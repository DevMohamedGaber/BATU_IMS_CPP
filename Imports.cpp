#include "Imports.h"  
#include "DatabaseConnection.h"  
#include "Utilities.h"
#include "AuthenticationController.h"

namespace Models  
{  
	List<Import^>^ Imports::GetAll() {  
		List<Import^>^ imports = gcnew List<Import^>();  
		auto db = DatabaseConnection::Instance;  
		if (db == nullptr) return imports;  

		// Query all imports  
        auto rows = db->Query("SELECT i.Id, i.ArrivalDate, i.Status, i.ItemCount, s.Id AS SupplierId, s.Name AS SupplierName FROM Imports i LEFT JOIN Suppliers s ON i.SupplierId = s.Id;");  
		for (auto& row : rows) {  
			Import^ import = gcnew Import();  
			import->Id = stoi(row[0]);  
			import->ArrivalDate = DateTime::Parse(gcnew String(row[1].c_str()));  
			import->Status = static_cast<OrderStatus>(stoi(row[2]));  
			import->ItemCount = stoi(row[3]);  

			if (!row[4].empty() && !row[5].empty()) {  
				Supplier^ supplier = gcnew Supplier();  
				supplier->Id = stoi(row[4]);  
				supplier->Name = gcnew String(row[5].c_str());  
				import->Supplier = supplier;  
			}  

			imports->Add(import);  
		}
		return imports;  
	}  
	Import^ Imports::GetById(int id) {
		auto db = DatabaseConnection::Instance;

		// Query import by ID  
		auto rows = db->Query("SELECT * FROM Imports WHERE Id = " + to_string(id) + ";");
		if (rows.empty()) 
			return nullptr;

		auto row = rows[0];
		Import^ import = gcnew Import();
		import->Id = stoi(row[0]);  
		import->ArrivalDate = DateTime::Parse(gcnew String(row[1].c_str()));  
		import->Status = static_cast<OrderStatus>(stoi(row[2]));
		FetchImportData(import);

		// Fetch Items  
		import->Items = gcnew List<OrderItem^>();

		auto itemRows = db->Query("SELECT ii.InventoryId, ii.Count, i.Name FROM Import_Items ii JOIN Inventory i ON ii.InventoryId = i.Id WHERE ii.ImportId = " + to_string(id) + ";"
		);
		for (auto& itemRow : itemRows) {
			OrderItem^ item = gcnew OrderItem();
			item->Id = stoi(itemRow[0]);
			item->Count = stoi(itemRow[1]);
			item->Name = gcnew String(itemRow[2].c_str());
			import->Items->Add(item);
		}

		return import;
	}
	bool Imports::Insert(int SupplierId, String^ ArrivalDate, List<OrderItem^>^ Items) {
		auto db = DatabaseConnection::Instance;
		if (db == nullptr) return false;
		// Insert into Imports table  
		string query = "INSERT INTO Imports VALUES (NULL, '" // ID
			+ Utilities::GetNativeString(ArrivalDate) // ArrivalDate
			+ "', 0," // Status (default: InProgress)
			+ to_string(Items->Count) + ", " // Item Count
			+ to_string(SupplierId) + ", " // Supplier
			+ to_string(Controllers::AuthenticationController::CurrentUser->Id) // Adder
			+ ", NULL, NULL);"; // Reviewer and Accepter
		db->Execute(query);
		// Get the last inserted Import ID  
		int importId = Convert::ToInt32(db->LastInsertId());
		// Insert items into Import_Items table  
		for each (OrderItem ^ item in Items) {
			query = "INSERT INTO Import_Items VALUES (" + to_string(importId) + ", " + to_string(item->Id) + ", " + to_string(item->Count) + ");";
			db->Execute(query);
		}
		return true;
	}

	void Imports::FetchImportData(Import^ import) {
		// Fetch Supplier  
		auto supplierRows = DatabaseConnection::Instance->Query("SELECT Id, Name FROM Suppliers WHERE Id = " + to_string(import->Supplier->Id) + ";");
		if (!supplierRows.empty()) {
			auto supplierRow = supplierRows[0];
			Supplier^ supplier = gcnew Supplier();
			supplier->Id = stoi(supplierRow[0]);
			supplier->Name = gcnew String(supplierRow[1].c_str());
			import->Supplier = supplier;
		}
		// Fetch Adder
		auto adderRows = DatabaseConnection::Instance->Query("SELECT Id, FirstName, LastName FROM Users WHERE Id = " + to_string(import->Adder->Id) + ";");
		if (!adderRows.empty()) {
			import->Adder = User::MapForOrder(adderRows[0]);
		}

		// Fetch Reviewer  
		auto reviewerRows = DatabaseConnection::Instance->Query("SELECT Id, FirstName, LastName FROM Users WHERE Id = " + to_string(import->Reviewer->Id) + ";");
		if (!reviewerRows.empty()) {
			import->Reviewer = User::MapForOrder(reviewerRows[0]);
		}
		// Fetch Accepter  
		if (import->Accepter != nullptr) {
			auto accepterRows = DatabaseConnection::Instance->Query("SELECT Id, FirstName, LastName FROM Users WHERE Id = " + to_string(import->Accepter->Id) + ";");
			if (!accepterRows.empty()) {
				import->Accepter = User::MapForOrder(accepterRows[0]);
			}
		}
	}
}
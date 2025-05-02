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
		auto rows = db->Query("SELECT * FROM Imports;");  
		for (auto& row : rows) {  
			Import^ import = gcnew Import();  
			import->Id = stoi(row[0]);  
			import->ArrivalDate = DateTime::Parse(gcnew String(row[1].c_str()));  
			import->Status = static_cast<OrderStatus>(stoi(row[2]));  
			FetchImportData(import);
			// count how many items belong to this import and add them to the import variable items list as just the list count
			auto itemRows = db->Query("SELECT COUNT(*) FROM Import_Items WHERE ImportId = " + row[0] + ";");
			// set the items list length to the items count
			if (!itemRows.empty()) {
				auto itemCount = stoi(itemRows[0][0]);
				import->Items = gcnew List<OrderItem^>(itemCount);
			}
			else {
				import->Items = gcnew List<OrderItem^>();
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
	bool Imports::Add(int SupplierId, int Status, String^ ArrivalDate, List<OrderItem^>^ Items) {
		auto db = DatabaseConnection::Instance;
		if (db == nullptr) return false;
		// Insert into Imports table  
		string query = "INSERT INTO Imports VALUES (NULL, '" + Utilities::GetNativeString(ArrivalDate) + "', " + to_string(Status) + ", " + to_string(SupplierId) + ", " + to_string(Controllers::AuthenticationController::CurrentUser->Id) + ", NULL, NULL);";
		db->Execute(query);
		// Get the last inserted Import ID  
		int importId = Convert::ToInt32(db->LastInsertId());
		// Insert items into Import_Items table  
		for each (OrderItem ^ item in Items) {
			query = "INSERT INTO Import_Items (ImportId, InventoryId, Count) VALUES (" + to_string(importId) + ", " + to_string(item->Id) + ", " + to_string(item->Count) + ");";
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
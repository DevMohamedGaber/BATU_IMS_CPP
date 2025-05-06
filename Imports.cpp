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
		auto rows = DatabaseConnection::Instance->Query("SELECT * FROM Imports WHERE Id = " + to_string(id) + ";");

		if (rows.empty()) 
			return nullptr;

		auto row = rows[0];
		Import^ import = gcnew Import();
		import->Id = stoi(row[0]);  
		import->ArrivalDate = DateTime::Parse(gcnew String(row[1].c_str()));  
		import->Status = static_cast<OrderStatus>(stoi(row[2]));
		import->ItemCount = stoi(row[3]);
		import->Supplier = row[4].empty() ? nullptr : FetchSupplierData(row[4]);
		import->Adder = row[5].empty() ? nullptr : FetchUserData(row[5]);
		import->Reviewer = row[6].empty() ? nullptr : FetchUserData(row[6]);
		import->Accepter = row[7].empty() ? nullptr : FetchUserData(row[7]);
		import->Items = FetchItemsData(row[0]);

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
	
    bool Imports::IsReviewed(int ImportId) {  
       auto rows = DatabaseConnection::Instance->Query("SELECT ReviewerUserId FROM Imports WHERE Id = " + to_string(ImportId) + ";");  
       if (rows.empty()) 
		   return false;  
       return rows[0][0] != "NULL";
    }
	bool Imports::IsAccepted(int ImportId) {
		auto rows = DatabaseConnection::Instance->Query("SELECT AccepterUserId FROM Imports WHERE Id = " + to_string(ImportId) + ";");
		if (rows.empty())
			return false;
		return rows[0][0] != "NULL";
	}
	bool Imports::Review(int ImportId, int ReviewerId) {
		string query = "UPDATE Imports SET ReviewerUserId = " + to_string(ReviewerId) + ", Status = 1 WHERE Id = " + to_string(ImportId) + ";";
		return DatabaseConnection::Instance->Execute(query);
	}
	bool Imports::Accept(int ImportId, int AccepterId) {
		string query = "UPDATE Imports SET AccepterUserId = " + to_string(AccepterId) + ", Status = 2 WHERE Id = " + to_string(ImportId) + ";";
		return DatabaseConnection::Instance->Execute(query);
	}
	void Imports::Delete(int ImportId) {
		string query = "DELETE FROM Imports WHERE Id = " + to_string(ImportId) + ";";
		DatabaseConnection::Instance->Execute(query);
	}
	List<OrderItem^>^ Imports::GetItems(int ImportId) {
		auto rows = DatabaseConnection::Instance->Query("SELECT ii.ItemId, ii.Count, i.Name FROM Import_Items ii JOIN Inventory i ON ii.ItemId = i.Id WHERE ii.ImportId = " + to_string(ImportId) + ";");
		List<OrderItem^>^ items = gcnew List<OrderItem^>();
		for (auto& itemRow : rows) {
			OrderItem^ item = gcnew OrderItem();
			item->Id = stoi(itemRow[0]);
			item->Count = stoi(itemRow[1]);
			item->Name = gcnew String(itemRow[2].c_str());
			items->Add(item);
		}
		return items;
	}

	// helpers
	Supplier^ Imports::FetchSupplierData(string& id) {
		auto rows = DatabaseConnection::Instance->Query("SELECT Id, Name FROM Suppliers WHERE Id = " + id + ";");
		if (rows.empty()) return nullptr;
		auto row = rows[0];
		Supplier^ supplier = gcnew Supplier();
		supplier->Id = stoi(row[0]);
		supplier->Name = gcnew String(row[1].c_str());
		return supplier;
	}
	User^ Imports::FetchUserData(string& id) {
		auto rows = DatabaseConnection::Instance->Query("SELECT Id, FirstName, LastName FROM Users WHERE Id = " + id + ";");
		if (rows.empty()) 
			return nullptr;
		auto row = rows[0];
		User^ user = gcnew User();
		user->Id = stoi(row[0]);
		user->FirstName = gcnew String(row[1].c_str());
		user->LastName = gcnew String(row[2].c_str());
		return user;
	}
	List<OrderItem^>^ Imports::FetchItemsData(string& id) {
		auto rows = DatabaseConnection::Instance->Query("SELECT ii.ItemId, ii.Count, i.Name FROM Import_Items ii JOIN Inventory i ON ii.ItemId = i.Id WHERE ii.ImportId = " + id + ";");
		List<OrderItem^>^ items = gcnew List<OrderItem^>();
		for (auto& itemRow : rows) {
			OrderItem^ item = gcnew OrderItem();
			item->Id = stoi(itemRow[0]);
			item->Count = stoi(itemRow[1]);
			item->Name = gcnew String(itemRow[2].c_str());
            items->Add(item);
		}
		return items;
	}
}
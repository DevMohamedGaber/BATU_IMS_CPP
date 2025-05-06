#include "Exports.h"
#include "AuthenticationController.h"
#include "DatabaseConnection.h"  
#include "Utilities.h"

namespace Models
{
	List<Export^>^ Exports::GetAll() {
		List<Export^>^ exports = gcnew List<Export^>();
		// Query all exports
        auto rows = DatabaseConnection::Instance->Query("SELECT e.Id, e.ExportDate, e.Status, e.ItemCount, c.Id AS CustomerId, c.FirstName AS CustomerFirstName, c.LastName AS CustomerLastName FROM Exports e LEFT JOIN Customers c ON e.CustomerId = c.Id;");  
		for (auto& row : rows) {  
			Export^ exportObj = gcnew Export();
			exportObj->Id = stoi(row[0]);
			exportObj->Date = DateTime::Parse(gcnew String(row[1].c_str()));
			exportObj->Status = static_cast<OrderStatus>(stoi(row[2]));
			exportObj->ItemCount = stoi(row[3]);
			if (!row[4].empty() && !row[5].empty() && !row[6].empty()) {  
				Customer^ customer = gcnew Customer();  
				customer->Id = stoi(row[4]);  
				customer->FirstName = gcnew String(row[5].c_str());  
				customer->LastName = gcnew String(row[6].c_str());  
				exportObj->Customer = customer;
			}
			exports->Add(exportObj);
		}
		return exports;
	}
	Export^ Exports::GetById(int id) {
		auto rows = DatabaseConnection::Instance->Query("SELECT * FROM Exports WHERE Id = " + to_string(id) + ";");
		if (rows.empty())
			return nullptr;
		auto row = rows[0];
		Export^ exportObj = gcnew Export();
		exportObj->Id = stoi(row[0]);
		exportObj->Date = DateTime::Parse(gcnew String(row[1].c_str()));
		exportObj->Status = static_cast<OrderStatus>(stoi(row[2]));
		exportObj->ItemCount = stoi(row[3]);
		exportObj->Customer = row[4].empty() ? nullptr : FetchCustomerData(row[4]);
		exportObj->Retailer = row[5].empty() ? nullptr : FetchUserData(row[5]);
		exportObj->Items = FetchItemsData(row[0]);
		return exportObj;
	}
	bool Exports::Insert(int CustomerId, String^ Date, List<OrderItem^>^ Items) {
		
		string query = "INSERT INTO Exports VALUES (NULL, '"
			+ Utilities::GetNativeString(Date)
			+ "', 0,"
			+ to_string(Items->Count) + ", "
			+ to_string(CustomerId) + ", NULL);";
		if (!DatabaseConnection::Instance->Execute(query)) {
			return false;
		}
		int exportId = DatabaseConnection::Instance->LastInsertId();
		for each (OrderItem ^ item in Items) {
			query = "INSERT INTO Export_Items VALUES (" + to_string(exportId) + ", " + to_string(item->Id) + ", " + to_string(item->Count) + ");";
			if (!DatabaseConnection::Instance->Execute(query))
			{
				return false;
			}
		}
		return true;
	}
	void Exports::Delete(int ExportId) {
		string query = "DELETE FROM Exports WHERE Id = " + to_string(ExportId) + ";";
		DatabaseConnection::Instance->Execute(query);
	}
	bool Exports::ChangeStatus(int ExportId, int Status) {
		string query = "UPDATE Exports SET Status = " + to_string(Status) + " WHERE Id = " + to_string(ExportId) + ";";
		return DatabaseConnection::Instance->Execute(query);
	}
	List<OrderItem^>^ Exports::GetItems(int ExportId) {
		List<OrderItem^>^ items = gcnew List<OrderItem^>();
		auto rows = DatabaseConnection::Instance->Query("SELECT oi.Id, oi.Name, ei.Count FROM Order_Items oi JOIN Export_Items ei ON oi.Id = ei.ItemId WHERE ei.ExportId = " + to_string(ExportId) + ";");
		for (auto& row : rows) {
			OrderItem^ item = gcnew OrderItem();
			item->Id = stoi(row[0]);
			item->Name = gcnew String(row[1].c_str());
			item->Count = stoi(row[2]);
			items->Add(item);
		}
		return items;
	}
	Customer^ Exports::FetchCustomerData(string& id) {
		auto rows = DatabaseConnection::Instance->Query("SELECT * FROM Customers WHERE Id = " + id + ";");
		if (rows.empty())
			return nullptr;
		auto row = rows[0];
		Customer^ customer = gcnew Customer();
		customer->Id = stoi(row[0]);
		customer->FirstName = gcnew String(row[1].c_str());
		customer->LastName = gcnew String(row[2].c_str());
		return customer;
	}
	User^ Exports::FetchUserData(string& id) {
		auto rows = DatabaseConnection::Instance->Query("SELECT * FROM Users WHERE Id = " + id + ";");
		if (rows.empty())
			return nullptr;
		auto row = rows[0];
		User^ user = gcnew User();
		user->Id = stoi(row[0]);
		user->FirstName = gcnew String(row[1].c_str());
		user->LastName = gcnew String(row[2].c_str());
		return user;
	}
	List<OrderItem^>^ Exports::FetchItemsData(string& id) {
		List<OrderItem^>^ items = gcnew List<OrderItem^>();
		auto rows = DatabaseConnection::Instance->Query("SELECT oi.Id, oi.Name, ei.Count FROM Order_Items oi JOIN Export_Items ei ON oi.Id = ei.ItemId WHERE ei.ExportId = " + id + ";");
		for (auto& row : rows) {
			OrderItem^ item = gcnew OrderItem();
			item->Id = stoi(row[0]);
			item->Name = gcnew String(row[1].c_str());
			item->Count = stoi(row[2]);
			items->Add(item);
		}
		return items;
	}
}
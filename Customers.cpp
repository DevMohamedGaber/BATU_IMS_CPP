#include "DatabaseConnection.h"
#include "Customers.h"
#include "Utilities.h"
using namespace Core;

namespace Models
{
	List<Customer^>^ Customers::GetAll()
	{
		string sql = "SELECT * FROM Customers";
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		auto items = gcnew List<Customer^>();
		for (const auto& row : rows) {
			items->Add(Customer::Map(row));
		}
		return items;
	}
	Customer^ Customers::GetById(int id)
	{
		string sql = "SELECT * FROM Customers WHERE Id = " + to_string(id);
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		if (rows.empty() || rows[0].empty()) {
			return nullptr;
		}
		return Customer::Map(rows[0]);
	}

	bool Customers::Insert(String^ FirstName, String^ LastName, String^ Email)
	{
		string sql = "INSERT INTO Customers (FirstName, LastName, Email) VALUES ('" + Utilities::GetNativeString(FirstName) + "', '" + Utilities::GetNativeString(LastName) + "', '" + Utilities::GetNativeString(Email) + "')";
		return DatabaseConnection::Instance->Execute(sql);
	}
	bool Customers::Update(Customer^ item)
	{
		string sql = "UPDATE Customers SET FirstName = '" + Utilities::GetNativeString(item->FirstName) + "', LastName = '" + Utilities::GetNativeString(item->LastName) + "', Email = '" + Utilities::GetNativeString(item->Email) + "' WHERE Id = " + to_string(item->Id);
		return DatabaseConnection::Instance->Execute(sql);
	}
	void Customers::Delete(int id)
	{
		string sql = "DELETE FROM Customers WHERE Id = " + to_string(id);
		DatabaseConnection::Instance->Execute(sql);
	}
	bool Customers::ExistsByName(String^ firstName, String^ lastName)
	{
		string sql = "SELECT COUNT(*) FROM Customers WHERE FirstName = '" + Utilities::GetNativeString(firstName) + "' AND LastName = '" + Utilities::GetNativeString(lastName) + "'";
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		return !rows.empty() && !rows[0].empty() && stoi(rows[0][0]) > 0;
	}
	bool Customers::ExistsByEmail(String^ email)
	{
		string sql = "SELECT COUNT(*) FROM Customers WHERE Email = '" + Utilities::GetNativeString(email) + "'";
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		return !rows.empty() && !rows[0].empty() && stoi(rows[0][0]) > 0;
	}
}
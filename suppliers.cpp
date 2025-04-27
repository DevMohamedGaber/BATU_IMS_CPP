#include "suppliers.h"
#include "DatabaseConnection.h"
#include "Utilities.h"
using namespace Core;

namespace Models
{
	List<Supplier^>^ Suppliers::GetAll()
	{
		string sql = "SELECT * FROM Suppliers";
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		auto items = gcnew List<Supplier^>();
		for (const auto& row : rows) {
			items->Add(Supplier::Map(row));
		}
		return items;
	}
	Supplier^ Suppliers::GetById(int id)
	{
		string sql = "SELECT * FROM Suppliers WHERE Id = " + to_string(id);
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		if (rows.empty() || rows[0].empty()) {
			return nullptr;
		}
		return Supplier::Map(rows[0]);
	}
	bool Suppliers::Insert(String^ Name)
	{
		string sql = "INSERT INTO Suppliers (Name) VALUES ('" + Utilities::GetNativeString(Name) + "')";
		return DatabaseConnection::Instance->Execute(sql);
	}
	bool Suppliers::Update(Supplier^ item)
	{
		string sql = "UPDATE Suppliers SET Name = '" + Utilities::GetNativeString(item->Name) + "' WHERE Id = " + to_string(item->Id);
		return DatabaseConnection::Instance->Execute(sql);
	}
	void Suppliers::Delete(int id)
	{
		string sql = "DELETE FROM Suppliers WHERE Id = " + to_string(id);
		DatabaseConnection::Instance->Execute(sql);
	}
	bool Suppliers::Exists(String^ name)
	{
		string sql = "SELECT COUNT(*) FROM Suppliers WHERE Name = '" + Utilities::GetNativeString(name) + "'";
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		return !rows.empty() && !rows[0].empty() && stoi(rows[0][0]) > 0;
	}
}
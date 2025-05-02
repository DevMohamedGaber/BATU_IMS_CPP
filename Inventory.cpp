#include "Inventory.h"
#include "DatabaseConnection.h"
#include "Utilities.h"
#include "Item.h"

using namespace System::Collections::Generic;
using namespace System;
using namespace Core;
using namespace std;

namespace Models
{
	bool Inventory::AddItem(String^ Name, double Price, int categoryId)
	{
		string sql = "INSERT INTO Inventory VALUES (NULL, '" + Utilities::GetNativeString(Name) + "', 0, " + std::to_string(Price) + ", " + std::to_string(categoryId) + ")";
		return DatabaseConnection::Instance->Execute(sql);
	}

	Item^ Inventory::GetItemById(int id)
	{
		string sql = "SELECT Inventory.*, Categories.Name FROM Inventory LEFT JOIN Categories ON Inventory.CategoryId = Categories.Id WHERE Inventory.Id = " + std::to_string(id);
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		if (rows.empty() || rows[0].empty()) {
			return nullptr;
		}
		return Item::Map(rows[0]);

	}

	List<Item^>^ Inventory::GetAllItems()
	{
		string sql = "SELECT Inventory.*, Categories.Name FROM Inventory LEFT JOIN Categories ON Inventory.CategoryId = Categories.Id";
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		auto items = gcnew List<Item^>();
		for (const auto& row : rows) {
			items->Add(Item::Map(row));
		}
		return items;
	}

	bool Inventory::UpdateItem(Item^ item)
	{
		string sql = "UPDATE Inventory SET Name = '" + Utilities::GetNativeString(item->Name) + "', Price = " + Utilities::GetNativeString((item->Price.ToString("F2"))) + ", CategoryId = " + std::to_string(item->Category->Id) + " WHERE Id = " + std::to_string(item->Id);
		return DatabaseConnection::Instance->Execute(sql);
	}

	void Inventory::DeleteItem(int id)
	{
		string sql = "DELETE FROM Inventory WHERE Id = " + std::to_string(id);
		DatabaseConnection::Instance->Execute(sql);
	}
	List<Item^>^ Inventory::GetLikeName(String^ name)
	{
		string sql = "SELECT Id, Name, Stock FROM Inventory WHERE Name LIKE '%" + Utilities::GetNativeString(name) + "%'";
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		auto items = gcnew List<Item^>();
		for (const auto& row : rows) {
			Item^ item = gcnew Item();
			item->Id = row[0].empty() ? 0 : stol(row[0]);
			item->Name = gcnew System::String(row[1].c_str());
			item->Stock = stoi(row[2]);
			items->Add(item);
		}
		return items;
	}
}
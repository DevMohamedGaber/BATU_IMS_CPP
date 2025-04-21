#include "DatabaseConnection.h"
#include "Utilities.h"
#include "Category.h"
using namespace System;
using namespace Core;
using namespace std;

namespace Models
{
	public ref class Inventory sealed
	{
	public:
		int Id;
		String^ Name;
		int Stock;
		double Price;
		Category^ Category;

		static bool AddItem(String^ Name, double Price, int categoryId)
		{
			string sql = "INSERT INTO Inventory (Name, Price, CategoryId) VALUES ('" + Utilities::GetNativeString(Name) + "', " + std::to_string(Price) + ", " + std::to_string(categoryId) + ")";
			return DatabaseConnection::Instance->Execute(sql);
		}

		static Inventory^ GetItemById(int id)
		{
			string sql = "SELECT Inventory.*, Categories.Name FROM Inventory LEFT JOIN Categories ON Inventory.CategoryId = Categories.Id WHERE Inventory.Id = " + std::to_string(id);
			vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
			if (rows.empty() || rows[0].empty()) {
				return nullptr;
			}
			return Map(rows[0]);

		}

		static vector<Inventory> GetAllItems()
		{
			vector<Inventory> items;
			string sql = "SELECT Inventory.*, Categories.Name FROM Inventory LEFT JOIN Categories ON Inventory.CategoryId = Categories.Id";
			vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
			for (const auto& row : rows) {
				items.push_back(*Map(row));
			}
			return items;
		}

		static bool UpdateItem(Inventory^ item)
		{
			string sql = "UPDATE Inventory SET Name = '" + Utilities::GetNativeString(item->Name) + "', Price = " + std::to_string(item->Price) + ", CategoryId = " + std::to_string(item->Category->Id) + " WHERE Id = " + std::to_string(item->Id);
			return DatabaseConnection::Instance->Execute(sql);
		}

		static void DeleteItem(int id)
		{
			string sql = "DELETE FROM Inventory WHERE Id = " + std::to_string(id);
			DatabaseConnection::Instance->Execute(sql);
		}

		// helper methods
	private:
		static Inventory^ Map(const vector<string>& row)
		{
			Inventory^ item = gcnew Inventory();
			item->Id = row[0].empty() ? 0 : stol(row[0]);
			item->Name = gcnew String(row[1].c_str());
			item->Stock = stoi(row[2].c_str());
			item->Price = stod(row[3].c_str());
			item->Category = gcnew Models::Category();
			item->Category->Id = stoi(row[4]);
			item->Category->Name = gcnew String(row[5].c_str());
			return item;
		}
	};
}
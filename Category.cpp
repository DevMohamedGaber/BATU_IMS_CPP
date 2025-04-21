#include "DatabaseConnection.h"
#include "Utilities.h"
using namespace System;
using namespace Core;
using namespace std;

namespace Models
{
	public ref class Category sealed
	{
	public:
		int Id;
		String^ Name;

		static bool AddCategory(String^ Name)
		{
			string sql = "INSERT INTO Categories (Name) VALUES ('" + Utilities::GetNativeString(Name) + "')";
			return DatabaseConnection::Instance->Execute(sql);
		}

		static Category^ GetCategoryById(int id)
		{
			string sql = "SELECT * FROM Categories WHERE Id = " + std::to_string(id);
			vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
			if (rows.empty() || rows[0].empty()) {
				return nullptr;
			}
			return Map(rows[0]);
		}

		static vector<Category> GetAllCategories()
		{
			vector<Category> categories;
			string sql = "SELECT * FROM Categories";
			vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
			for (const auto& row : rows) {
				categories.push_back(*Map(row));
			}
			return categories;
		}

		static bool UpdateCategory(Category^ category)
		{
			string sql = "UPDATE Categories SET Name = '" + Utilities::GetNativeString(category->Name) + "' WHERE Id = " + std::to_string(category->Id);
			return DatabaseConnection::Instance->Execute(sql);
		}

		static void DeleteCategory(int id)
		{
			string sql = "DELETE FROM Categories WHERE Id = " + std::to_string(id);
			DatabaseConnection::Instance->Execute(sql);
		}

	private:
		static Category^ Map(const vector<string>& row)
		{
			Category^ category = gcnew Category();
			category->Id = stoi(row[0]);
			category->Name = gcnew String(row[1].c_str());
			return category;
		}
	};
}
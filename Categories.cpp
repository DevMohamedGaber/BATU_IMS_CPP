#include "DatabaseConnection.h"
#include "Utilities.h"
#include "Category.h"
using namespace System::Collections::Generic;
using namespace System;
using namespace Core;
using namespace std;

namespace Models
{
	public ref class Categories sealed
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
			return Category::Map(rows[0]);
		}

		static List<Category^>^ GetAllCategories()
		{
			string sql = "SELECT * FROM Categories";
			vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
			auto categories = gcnew List<Category^>();
			for (const auto& row : rows) {
				categories->Add(Category::Map(row));
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
	};
}
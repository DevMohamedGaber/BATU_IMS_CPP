#include "DatabaseConnection.h"
#include "Categories.h"
#include "Utilities.h"
using namespace System::Collections::Generic;
using namespace System;
using namespace Core;
using namespace std;

namespace Models
{
	Category^ Categories::GetById(int id)
	{
		string sql = "SELECT * FROM Categories WHERE Id = " + std::to_string(id);
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		if (rows.empty() || rows[0].empty()) {
			return nullptr;
		}
		return Category::Map(rows[0]);
	}

	List<Category^>^ Categories::GetAll()
	{
		string sql = "SELECT * FROM Categories";
		vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);
		auto categories = gcnew List<Category^>();
		for (const auto& row : rows) {
			categories->Add(Category::Map(row));
		}
		return categories;
	}

	bool Categories::Insert(String^ Name)
	{
		string sql = "INSERT INTO Categories (Name) VALUES ('" + Utilities::GetNativeString(Name) + "')";
		return DatabaseConnection::Instance->Execute(sql);
	}

	bool Categories::Update(Category^ category)
	{
		string sql = "UPDATE Categories SET Name = '" + Utilities::GetNativeString(category->Name) + "' WHERE Id = " + std::to_string(category->Id);
		return DatabaseConnection::Instance->Execute(sql);
	}

	void Categories::Delete(int id)
	{
		string sql = "DELETE FROM Categories WHERE Id = " + std::to_string(id);
		DatabaseConnection::Instance->Execute(sql);
	}

	bool Categories::Exists(String^ Name)
	{
		string sql = "SELECT COUNT(*) FROM Categories WHERE Name = '" + Utilities::GetNativeString(Name) + "'";
		vector<vector<string>> result = DatabaseConnection::Instance->Query(sql);

		if (!result.empty() && !result[0].empty()) {
			return stoi(result[0][0]) > 0;
		}

		return false;
	}
}
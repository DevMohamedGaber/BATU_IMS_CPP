#pragma once
using namespace System;
namespace Models
{
	public ref class Category sealed
	{
	public:
		int Id;
		String^ Name;

		static bool AddCategory(String^ Name);
		static Category^ GetCategoryById(int id);
		static vector<Category> GetAllCategories();
		static bool UpdateCategory(Category^ category);
		static void DeleteCategory(int id);

	private:
		static Category^ Map(const vector<string>& row);
	};
}
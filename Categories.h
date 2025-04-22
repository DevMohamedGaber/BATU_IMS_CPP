#pragma once
#include "Category.h"
using namespace System::Collections::Generic;
using namespace System;
namespace Models
{
	public ref class Categories sealed
	{
	public:
		static bool AddCategory(String^ Name);
		static Category^ GetCategoryById(int id);
		static List<Category^>^ GetAllCategories();
		static bool UpdateCategory(Category^ category);
		static void DeleteCategory(int id);
	};
}
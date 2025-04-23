#pragma once
#include "Category.h"
using namespace Models;
using namespace System::Collections::Generic;
namespace Controllers
{
	public ref class CategoriesController
	{
	public:
		static List<Category^>^ GetCategoriesList();
		static String^ AddNewCategory(String^ name);
	};
}
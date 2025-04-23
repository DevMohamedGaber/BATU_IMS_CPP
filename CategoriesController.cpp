#include "CategoriesController.h"
#include "Categories.h"

namespace Controllers
{
	List<Category^>^ CategoriesController::GetCategoriesList() {
		return Categories::GetAll();
	}

	String^ CategoriesController::AddNewCategory(String^ name)
	{
		if (String::IsNullOrWhiteSpace(name)) {
			return "Category Name can't be empty";
		}

		if (Categories::Exists(name)) {
			return "Category already exists";
		}

		if (!Categories::Insert(name)) {
			return "Failed to add the category";
		}

		return nullptr;
	}
}
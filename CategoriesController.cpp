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
	String^ CategoriesController::EditCategory(Category^ category)
	{
		if (String::IsNullOrWhiteSpace(category->Name)) {
			return "Category Name can't be empty";
		}
		if (category->Id == 0) {
			return "Category id can't be 0";
		}

		Category^ old = Categories::GetById(category->Id);

		if (old == nullptr) {
			return "Category not found";
		}
		if (old->Name == category->Name) {
			return "No changes in name";
		}
		if (Categories::Exists(category->Name)) {
			return "New category Name already taken";
		}
		if (!Categories::Update(category)) {
			return "Failed to update the category";
		}
		return nullptr;
	}
	Category^ CategoriesController::GetCategoryById(int id)
	{
		return Categories::GetById(id);
	}
	void CategoriesController::DeleteCategory(int id)
	{
		return Categories::Delete(id);
	}
}
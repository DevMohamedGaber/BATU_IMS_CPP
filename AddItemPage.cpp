#include "AddItemPage.h"
#include "CategoriesController.h"
using namespace System;
using namespace Controllers;

namespace Views {
	Void AddItemPage::AddItemPage_Load(Object^ sender, EventArgs^ e) {
		categoryInput->DataSource = CategoriesController::GetCategoriesList();
	}
}
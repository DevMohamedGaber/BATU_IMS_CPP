#include "CategoriesController.h"
#include "InventoryController.h"
#include "AddItemPage.h"
using namespace System;
using namespace Controllers;
using namespace System::Drawing;

namespace Views {
	Void AddItemPage::AddItemPage_Load(Object^ sender, EventArgs^ e) {
		categoryInput->DataSource = CategoriesController::GetCategoriesList();
	}
	Void AddItemPage::addBtn_Click(Object^ sender, EventArgs^ e) {
		String^ result = InventoryController::AddNewItem(nameInput->Text, priceInput->Text, Convert::ToInt32(categoryInput->SelectedValue));
		if (result != nullptr) {
			errorBox->ForeColor = Color::Maroon;
			errorBox->Text = result;
			return;
		}
		errorBox->ForeColor = Color::Green;
		errorBox->Text = "Item added successfully";
	}
}
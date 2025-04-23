#include "AddItemPage.h"
#include "CategoriesController.h"
#include "InventoryController.h"
using namespace System;
using namespace Controllers;

namespace Views {
	Void AddItemPage::AddItemPage_Load(Object^ sender, EventArgs^ e) {
		categoryInput->DataSource = CategoriesController::GetCategoriesList();
	}
	System::Void AddItemPage::addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ result = InventoryController::AddNewItem(nameInput->Text, priceInput->Text, Convert::ToInt32(categoryInput->SelectedValue));
		if (result != nullptr) {
			errorBox->ForeColor = System::Drawing::Color::Maroon;
			errorBox->Text = result;
			return;
		}
		errorBox->ForeColor = System::Drawing::Color::Green;
		errorBox->Text = "Item added successfully";
	}
}
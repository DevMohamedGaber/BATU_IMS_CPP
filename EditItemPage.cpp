#include "CategoriesController.h"
#include "InventoryController.h"
#include "DashboardForm.h"
#include "EditItemPage.h"
#include "ViewItemPage.h"
using namespace Controllers;

namespace Views
{
	EditItemPage::EditItemPage(Item^ item) {
		InitializeComponent();
		categoryInput->DataSource = CategoriesController::GetCategoriesList();
		this->item = item;
		idLabel->Text = "ID: " + item->Id;
		nameInput->Text = item->Name;
		priceInput->Text = item->Price.ToString();
		categoryInput->SelectedValue = item->Category->Id;
	}

	Void EditItemPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew ViewItemPage(item));
	}

	Void EditItemPage::saveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Item^ editedItem = gcnew Item();
		editedItem->Id = item->Id;
		editedItem->Name = nameInput->Text;
		editedItem->Price = Convert::ToDouble(priceInput->Text);
		editedItem->Stock = item->Stock;
		editedItem->Category = gcnew Category();
		editedItem->Category->Id = Convert::ToInt32(categoryInput->SelectedValue);
		editedItem->Category->Name = categoryInput->Text;

		String^ result = InventoryController::EditItem(editedItem);

		if (result != nullptr) {
			errorMsg->ForeColor = System::Drawing::Color::Red;
			errorMsg->Text = result;
			return;
		}

		errorMsg->ForeColor = System::Drawing::Color::Green;
		errorMsg->Text = "Item updated successfully";
		item = editedItem;
	}
}
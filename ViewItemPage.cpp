#include "ViewItemPage.h"
#include "AuthenticationController.h"
#include "InventoryController.h"
#include "ViewCategoryPage.h"
#include "DashboardForm.h"
#include "ItemListPage.h"
#include "EditItemPage.h"
using namespace Controllers;

namespace Views
{
	ViewItemPage::ViewItemPage(int Id) {
		InitializeComponent();
		SetItemData(InventoryController::GetItemById(Id));
	}
	ViewItemPage::ViewItemPage(Item^ Item) {
		InitializeComponent();
		SetItemData(Item);
	}

	void ViewItemPage::SetItemData(Item^ item) {
		this->item = item;
		nameLabel->Text = item->Name;
		idLabel->Text = "ID: " + item->Id.ToString();
		categoryLabel->Text = item->Category->Name;
		priceLabel->Text = item->Price.ToString("F2") + " EGP";
		stockLabel->Text = item->Stock.ToString();

		bool isAdmin = AuthenticationController::CurrentUser->Role->Equals(UserRole::Admin);
		editBtn->Visible = isAdmin;
		deleteBtn->Visible = isAdmin;
	}

	Void ViewItemPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew ItemListPage());
	}

	Void ViewItemPage::deleteBtn_Click(Object^ sender, EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to delete this item?", "Delete Item", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) != Windows::Forms::DialogResult::Yes) {
			return;
		}
		InventoryController::DeleteItem(item->Id);
		DashboardForm::SwitchView(gcnew ItemListPage());
	}

	Void ViewItemPage::editBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew EditItemPage(item));
	}

	Void ViewItemPage::categoryLabel_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew ViewCategoryPage(item->Category->Id));
	}
}
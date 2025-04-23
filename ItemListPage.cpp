#include "ItemListPage.h"
#include "InventoryController.h"
#include "AddItemPage.h"
#include "DashboardForm.h"

namespace Views {
	System::Void ItemListPage::ItemListPage_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Item^>^ data = Controllers::InventoryController::GetListViewData();
		if (data == nullptr || data->Count == 0) {
			return;
		}
		dataTable->DataSource = data;
	}
	System::Void ItemListPage::addNewBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Views::DashboardForm::DashboardForm::SwitchView(gcnew Views::AddItemPage());
	}
}
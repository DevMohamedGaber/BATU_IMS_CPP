#include "ItemListPage.h"
#include "InventoryController.h"
#include "AddItemPage.h"
#include "DashboardForm.h"
#include "ViewItemPage.h"
#include "CustomTable.h"

using namespace Controllers;

namespace Views
{
	Void ItemListPage::ItemListPage_Load(Object^ sender, EventArgs^ e) {
		List<Item^>^ data = InventoryController::GetListViewData();
		if (data == nullptr || data->Count == 0) {
			return;
		}
		CustomTable^ table = gcnew CustomTable();
		table->Dock = DockStyle::Fill; // Fill the available space
		table->BackColor = Color::White; // For debugging visibility

		table->AddColumn("#", 30);
		table->AddColumn("Id", 150);
		table->AddColumn("Name", 150);
		table->AddColumn("Price", 100);
		table->AddColumn("Category", 150);
		table->AddColumn("Stock", 100);
		table->AddColumn("Actions", 120);

		// Add rows and cells
		for each (Item ^ item in data) {
			table->AddRow();
			int rowIndex = table->GetRowCount() - 1;

			table->AddCell(rowIndex.ToString(), rowIndex, 0);
			table->AddCell(item->Id.ToString(), rowIndex, 1);
			table->AddCell(item->Name, rowIndex, 2);
			table->AddCell(item->Price.ToString("C"), rowIndex, 3);
			table->AddCell(item->Category->Name, rowIndex, 4);
			table->AddCell(item->Stock.ToString(), rowIndex, 5);

			Button^ actionButton = safe_cast<Button^>(table->AddButtonCell("Details", rowIndex, 6));
			if (actionButton != nullptr) {
				actionButton->Click += gcnew EventHandler(this, &ItemListPage::ActionButton_Click);
				actionButton->Tag = item->Id; // Store item ID for later reference
			}
		}
		Controls->Add(table);
		table->BringToFront();
	}
	Void ItemListPage::ActionButton_Click(Object^ sender, EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		int itemId = safe_cast<int>(button->Tag);
		DashboardForm::SwitchView(gcnew ViewItemPage(itemId));
	}
	Void ItemListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::DashboardForm::SwitchView(gcnew AddItemPage());
	}
}
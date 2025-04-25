#include "ItemListPage.h"
#include "InventoryController.h"
#include "AddItemPage.h"
#include "DashboardForm.h"
#include "ViewItemPage.h"
using namespace Controllers;

namespace Views
{
	Void ItemListPage::ItemListPage_Load(Object^ sender, EventArgs^ e) {
		List<Item^>^ data = InventoryController::GetListViewData();
		if (data == nullptr || data->Count == 0) {
			return;
		}
		System::Data::DataTable^ table = gcnew System::Data::DataTable();
		table->Columns->Add("Id", int::typeid);
		table->Columns->Add("Name", String::typeid);
		table->Columns->Add("Price", String::typeid);
		table->Columns->Add("Category", String::typeid);
		table->Columns->Add("Stock", String::typeid);

		for each (Item ^ item in data) {
			System::Data::DataRow^ row = table->NewRow();
			row["Id"] = item->Id;
			row["Name"] = item->Name;
			row["Price"] = item->Price.ToString("F2");
			row["Category"] = item->Category->Name;
			row["Stock"] = item->Stock.ToString();
			table->Rows->Add(row);
		}
		dataTable->DataSource = table;
		dataTable->Visible = true;
	}
	Void ItemListPage::dataTable_CellClick(Object^ sender, DataGridViewCellEventArgs^ e) {
		if (e->RowIndex < 0) {
			return;
		}
		int id = Convert::ToInt32(dataTable->Rows[e->RowIndex]->Cells["Id"]->Value);
		DashboardForm::SwitchView(gcnew ViewItemPage(id));
	}
	Void ItemListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::DashboardForm::SwitchView(gcnew AddItemPage());
	}
}
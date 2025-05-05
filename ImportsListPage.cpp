#include "ImportsListPage.h"
#include "AddImportPage.h"
#include "ImportsController.h"
#include "DashboardForm.h"
#include "ImportViewPage.h"

using namespace Controllers;

namespace Views
{
	Void ImportsListPage::ImportsListPage_Load(Object^ sender, EventArgs^ e) {
		auto data = ImportsController::GetImportsList();
		if (data == nullptr || data->Count == 0) {
			noDataLabel->Visible = true;
			return;
		}
		System::Data::DataTable^ table = gcnew System::Data::DataTable();
		table->Columns->Add("Id", int::typeid);
		table->Columns->Add("Supplier", String::typeid);
		table->Columns->Add("Status", String::typeid);
		table->Columns->Add("Arrival Date", String::typeid);
		table->Columns->Add("Items Count", int::typeid);

		for each (Import^ item in data) {
			System::Data::DataRow^ row = table->NewRow();
			row["Id"] = item->Id;
			row["Supplier"] = item->Supplier->Name;
			row["Status"] = item->Status.ToString();
			row["Arrival Date"] = item->ArrivalDate.ToString();
			row["Items Count"] = item->ItemCount;
			table->Rows->Add(row);
		}
		dataTable->DataSource = table;
		dataTable->Visible = true;
	}
	Void ImportsListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew AddImportPage());
	}
	Void ImportsListPage::dataTable_CellClick(Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex < 0) {
			return;
		}
		int id = Convert::ToInt32(dataTable->Rows[e->RowIndex]->Cells["Id"]->Value);
		DashboardForm::SwitchView(gcnew ImportViewPage(id));
	}
}
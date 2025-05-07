#include "ExportsListPage.h"
#include "ExportsController.h"
#include "AddExportPage.h"
#include "DashboardForm.h"
#include "ExportViewPage.h"

using namespace Controllers;

namespace Views
{
	Void ExportsListPage::ExportsListPage_Load(Object^ sender, EventArgs^ e) {
		auto data = ExportsController::GetExportsList();
		if (data == nullptr || data->Count == 0) {
			noDataLabel->Visible = true;
			return;
		}
		System::Data::DataTable^ table = gcnew System::Data::DataTable();
		table->Columns->Add("Id", int::typeid);
		table->Columns->Add("Customer", String::typeid);
		table->Columns->Add("Status", String::typeid);
		table->Columns->Add("Export Date", String::typeid);
		table->Columns->Add("Items Count", int::typeid);

		for each (Export ^ item in data) {
			System::Data::DataRow^ row = table->NewRow();
			row["Id"] = item->Id;
			row["Customer"] = item->Customer->GetFullName();
			row["Status"] = item->Status.ToString();
			row["Export Date"] = item->Date.ToString();
			row["Items Count"] = item->ItemCount;
			table->Rows->Add(row);
		}
		dataTable->DataSource = table;
		dataTable->Visible = true;
	}
	Void ExportsListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew AddExportPage());
	}
	Void ExportsListPage::dataTable_CellContentClick(Object^ sender, DataGridViewCellEventArgs^ e) {
		if (e->RowIndex < 0) return;
		auto id = Convert::ToInt32(dataTable->Rows[e->RowIndex]->Cells["Id"]->Value);
		DashboardForm::SwitchView(gcnew ExportViewPage(id));
	}
}
#include "SuppliersController.h"
#include "SuppliersListPage.h"
#include "SupplierViewPage.h"
#include "AddSupplierPage.h"
#include "DashboardForm.h"
using namespace Controllers;

namespace Views {
	Void SuppliersListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew AddSupplierPage());
	}
	Void SuppliersListPage::SuppliersListPage_Load(Object^ sender, EventArgs^ e) {
		List<Supplier^>^ suppliers = SuppliersController::GetSuppliersList();
		if (suppliers->Count == 0)
		{
			noDataLabel->Visible = true;
			return;
		}

		System::Data::DataTable^ table = gcnew System::Data::DataTable();
		table->Columns->Add("Id", int::typeid);
		table->Columns->Add("Name", String::typeid);
		table->Columns->Add("Contract Date", String::typeid);

		for each (Supplier ^ supplier in suppliers) {
			System::Data::DataRow^ row = table->NewRow();
			row["Id"] = supplier->Id;
			row["Name"] = supplier->Name;
			row["Contract Date"] = supplier->ContractedAt->ToString();
			table->Rows->Add(row);
		}

		dataTable->DataSource = table;
		dataTable->Visible = true;
	}
	Void SuppliersListPage::dataTable_CellClick(Object^ sender, DataGridViewCellEventArgs^ e) {
		if (e->RowIndex < 0) return;
		int id = Convert::ToInt32(dataTable->Rows[e->RowIndex]->Cells["Id"]->Value);
		DashboardForm::SwitchView(gcnew SupplierViewPage(id));
	}
}
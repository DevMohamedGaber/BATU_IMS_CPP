#include "CustomersListPage.h"
#include "CustomersController.h"
#include "DashboardForm.h"
#include "AddCustomerPage.h"
#include "CustomerViewPage.h"

using namespace Controllers;

namespace Views {
	Void CustomersListPage::addNewBtn_Click(Object^ sender, EventArgs^ e)
	{
		DashboardForm::SwitchView(gcnew AddCustomerPage());
	}
	// on page load
	Void CustomersListPage::CustomersListPage_Load(Object^ sender, EventArgs^ e)
	{
		// Get the customers list from the controller
		List<Customer^>^ customers = CustomersController::GetCustomersList();
		if (customers->Count == 0)
		{
			noDataLabel->Visible = true;
			return;
		}

		System::Data::DataTable^ table = gcnew System::Data::DataTable();
		table->Columns->Add("Id", int::typeid);
		table->Columns->Add("First Name", String::typeid);
		table->Columns->Add("Last Name", String::typeid);
		table->Columns->Add("Email", String::typeid);

		for each (Customer^ customer in customers) {
			System::Data::DataRow^ row = table->NewRow();
			row["Id"] = customer->Id;
			row["First Name"] = customer->FirstName;
			row["Last Name"] = customer->LastName;
			row["Email"] = customer->Email;
			table->Rows->Add(row);
		}

		dataTable->DataSource = table;
		dataTable->Visible = true;
	}

	Void CustomersListPage::dataTable_CellClick(Object^ sender, DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex < 0) return; // Ignore header row clicks
		int customerId = Convert::ToInt32(dataTable->Rows[e->RowIndex]->Cells["Id"]->Value);
		DashboardForm::SwitchView(gcnew CustomerViewPage(customerId));
	}
}
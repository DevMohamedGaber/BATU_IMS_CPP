#include "UsersController.h"
#include "UsersListPage.h"
#include "DashboardForm.h"
#include "AddUserPage.h"
#include "UserViewPage.h"

using namespace Controllers;

namespace Views
{
	Void UsersListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew AddUserPage());
	}
	Void UsersListPage::UsersListPage_Load(Object^ sender, EventArgs^ e) {
		List<User^>^ users = UsersController::GetAllUsers();
		if (users == nullptr || users->Count == 0) {
			noDataLabel->Visible = true;
			return;
		}

		System::Data::DataTable^ table = gcnew System::Data::DataTable();
		table->Columns->Add("Id", int::typeid);
		table->Columns->Add("First Name", String::typeid);
		table->Columns->Add("Last Name", String::typeid);
		table->Columns->Add("Email", String::typeid);
		table->Columns->Add("Username", String::typeid);
		table->Columns->Add("Role", String::typeid);

		for each (User ^ user in users) {
			System::Data::DataRow^ row = table->NewRow();
			row["Id"] = user->Id;
			row["First Name"] = user->FirstName;
			row["Last Name"] = user->LastName;
			row["Email"] = user->Email;
			row["Username"] = user->Username;
			row["Role"] = user->Role->ToString();
			table->Rows->Add(row);
		}

		dataTable->DataSource = table;
		dataTable->Visible = true;
	}
	Void UsersListPage::dataTable_CellClick(Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			int id = Convert::ToInt32(dataTable->Rows[e->RowIndex]->Cells[0]->Value);
			DashboardForm::SwitchView(gcnew UserViewPage(id));
		}
	}
}
#include "UserViewPage.h"
#include "UsersController.h"
#include "DashboardForm.h"
#include "UsersListPage.h"
#include "UserEditPage.h"

using namespace Controllers;

namespace Views
{
	UserViewPage::UserViewPage(int id) {
		InitializeComponent();
		SetData(UsersController::GetUserById(id));
	}
	UserViewPage::UserViewPage(User^ user) {
		InitializeComponent();
		SetData(user);
	}
	void UserViewPage::SetData(User^ user) {
		this->user = user;
		nameLabel->Text = user->FirstName + " " + user->LastName;
		idLabel->Text = "ID: " + user->Id.ToString();
		emailLabel->Text = user->Email;
		usernameLabel->Text = user->Username;
		roleLabel->Text = user->Role->ToString();
	}
	Void UserViewPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UsersListPage());
	}
	Void UserViewPage::editBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UserEditPage(user));
	}
	Void UserViewPage::deleteBtn_Click(Object^ sender, EventArgs^ e) {
		// show a confirm message box
		if (MessageBox::Show("Are you sure you want to delete this user?", "Confirm Deleting", MessageBoxButtons::YesNo, MessageBoxIcon::Stop) != System::Windows::Forms::DialogResult::Yes) {
			return;
		}
		UsersController::DeleteUser(user->Id);
		DashboardForm::SwitchView(gcnew UsersListPage());
	}
}
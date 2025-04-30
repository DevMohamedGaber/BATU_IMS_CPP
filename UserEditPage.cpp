#include "UserEditPage.h"
namespace Views {
	UserEditPage::UserEditPage(User^ user) {
		InitializeComponent();
		this->user = user;
		//SetData(user);
	}
	/*void UserEditPage::SetData(User^ user) {
		this->user = user;
		idLabel->Text = "ID: " + user->Id.ToString();
		nameTextBox->Text = user->FirstName + " " + user->LastName;
		emailTextBox->Text = user->Email;
		usernameTextBox->Text = user->Username;
		roleComboBox->SelectedItem = user->Role;
	}
	Void UserEditPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UsersListPage());
	}
	Void UserEditPage::saveBtn_Click(Object^ sender, EventArgs^ e) {
		user->FirstName = nameTextBox->Text;
		user->Email = emailTextBox->Text;
		user->Username = usernameTextBox->Text;
		user->Role = (UserRole)roleComboBox->SelectedItem;
		if (UsersController::UpdateUser(user)) {
			MessageBox::Show("User updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			DashboardForm::SwitchView(gcnew UsersListPage());
		}
		else {
			MessageBox::Show("Failed to update user", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}*/
}
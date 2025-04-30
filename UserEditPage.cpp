#include "UserEditPage.h"
#include "DashboardForm.h"
#include "UserViewPage.h"
#include "UsersController.h"

using namespace Controllers;

namespace Views
{
	UserEditPage::UserEditPage(User^ user) {
		InitializeComponent();
		this->user = user;
		idLabel->Text = "ID: " + user->Id.ToString();
		firstNameInput->Text = user->FirstName;
		lastNameInput->Text = user->LastName;
		emailInput->Text = user->Email;
		usernameInput->Text = user->Username;
		roleInput->SelectedIndex = Convert::ToInt32(user->Role);
	}
	Void UserEditPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UserViewPage(user));
	}
	Void UserEditPage::saveBtn_Click(Object^ sender, EventArgs^ e) {
		User^ newUser = gcnew User();
		newUser->Id = user->Id;
		newUser->FirstName = firstNameInput->Text;
		newUser->LastName = lastNameInput->Text;
		newUser->Email = emailInput->Text;
		newUser->Username = usernameInput->Text;
		newUser->Role = (UserRole)((int)roleInput->SelectedIndex);

		String^ result = UsersController::EditUserInfo(newUser);

		if (result != nullptr) {
			this->errorMsg->ForeColor = Drawing::Color::Red;
			this->errorMsg->Text = result;
		}
		this->errorMsg->ForeColor = Drawing::Color::Green;
		this->errorMsg->Text = "User info updated successfully!";
		user = newUser;
	}
}
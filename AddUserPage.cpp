#include "UsersController.h"  
#include "AddUserPage.h"  
#include "RoleItem.h"  
#include "UserRole.h"  

using namespace Core;
using namespace System::Collections::Generic;
using namespace Controllers;

namespace Views  
{  
	Void AddUserPage::AddUserPage_Load(System::Object^ sender, System::EventArgs^ e) {
		this->roleInput->SelectedIndex = 0;
	}
	
	Void AddUserPage::registerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ result = UsersController::RegisterNewUser(firstNameInput->Text, lastNameInput->Text, usernameInput->Text, passwordInput->Text, emailInput->Text, (int)roleInput->SelectedIndex);

		if (result != nullptr) {
			errorBox->ForeColor = System::Drawing::Color::Maroon;
			errorBox->Text = result;
			return;
		}
		errorBox->ForeColor = System::Drawing::Color::Green;
		errorBox->Text = "Category added successfully!";
	}
}
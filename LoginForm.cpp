#include "AuthenticationController.h"
#include "DashboardForm.h"
#include "LoginForm.h"

using namespace Controllers;
using namespace Core;

namespace Views
{
	Void LoginForm::button1_Click(Object^ sender, EventArgs^ e) {
		String^ result = AuthenticationController::Login(usernameInput->Text, passwordInput->Text);

		if (result != nullptr)
		{
			errorBox->ForeColor = System::Drawing::Color::IndianRed;
			errorBox->Text = result;
		}

		this->Hide();
		DashboardForm::Start();
		this->Close();
	}
	Void LoginForm::ExitBtn_Click(Object^ sender, EventArgs^ e) {
		Application::Exit();
	}
}
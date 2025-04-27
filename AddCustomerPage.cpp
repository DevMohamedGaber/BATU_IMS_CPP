#include "AddCustomerPage.h"
#include "CustomersController.h"

using namespace Controllers;

namespace Views
{
	Void AddCustomerPage::addBtn_Click(Object^ sender, EventArgs^ e)
	{
		String^ result = CustomersController::AddNewCustomer(firstNameInput->Text, lastNameInput->Text, emailInput->Text);

		if (result != nullptr) {
			errorMsg->ForeColor = System::Drawing::Color::Maroon;
			errorMsg->Text = result;
			return;
		}
		errorMsg->ForeColor = System::Drawing::Color::Green;
		errorMsg->Text = "Customer added successfully!";
	}
}
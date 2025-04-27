#include "CustomerEditPage.h"
#include "CustomersController.h"
#include "DashboardForm.h"
#include "CustomerViewPage.h"

using namespace Controllers;

namespace Views
{
	CustomerEditPage::CustomerEditPage(Customer^ customer) {
		InitializeComponent();

		this->customer = customer;
		firstNameInput->Text = customer->FirstName;
		lastNameInput->Text = customer->LastName;
		emailInput->Text = customer->Email;
	}

	Void CustomerEditPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew CustomerViewPage(customer));
	}

	Void CustomerEditPage::confirmBtn_Click(Object^ sender, EventArgs^ e) {
		Customer^ newCustomer = gcnew Customer();
		newCustomer->Id = customer->Id;
		newCustomer->FirstName = firstNameInput->Text;
		newCustomer->LastName = lastNameInput->Text;
		newCustomer->Email = emailInput->Text;

		String^ result = CustomersController::EditCustomer(newCustomer);

		if (result != nullptr) {
			this->errorMsg->ForeColor = System::Drawing::Color::Red;
			this->errorMsg->Text = result;
		}
		this->errorMsg->ForeColor = System::Drawing::Color::Green;
		this->errorMsg->Text = "Customer updated successfully!";
		this->customer = newCustomer;
	}
}
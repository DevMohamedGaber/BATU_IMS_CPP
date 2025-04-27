#include "CustomerViewPage.h"
#include "CustomersController.h"
#include "DashboardForm.h"
#include "CustomersListPage.h"
#include "CustomerEditPage.h"
using namespace Controllers;

namespace Views
{
	CustomerViewPage::CustomerViewPage(int id) {
		InitializeComponent();
		SetCustomer(CustomersController::GetCustomerById(id));
	}

	CustomerViewPage::CustomerViewPage(Customer^ customer) {
		InitializeComponent();
		SetCustomer(customer);
	}
	void CustomerViewPage::SetCustomer(Customer^ customer) {
		this->customer = customer;
		this->idLabel->Text = "Id: " + customer->Id;
		this->nameLabel->Text = customer->FirstName + " " + customer->LastName;
		this->emailLabel->Text = customer->Email;
	}
	Void CustomerViewPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew CustomersListPage());
	}

	Void CustomerViewPage::editBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew CustomerEditPage(customer));
	}

	Void CustomerViewPage::deleteBtn_Click(Object^ sender, EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to delete this customer?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes) {
			return;
		}
		CustomersController::DeleteCustomer(this->customer->Id);
		DashboardForm::SwitchView(gcnew CustomersListPage());
	}
}
#include "AddSupplierPage.h"
#include "SuppliersController.h"

using namespace Controllers;

namespace Views
{
	Void AddSupplierPage::addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ result = SuppliersController::AddNewSupplier(nameInput->Text, contractDateInput->Value);

		if (result != nullptr) {
			errorMsg->ForeColor = System::Drawing::Color::Maroon;
			errorMsg->Text = result;
			return;
		}
		errorMsg->ForeColor = System::Drawing::Color::Green;
		errorMsg->Text = "Suppliers added successfully!";
	}
}
#include "SupplierViewPage.h"
#include "SuppliersController.h"
#include "DashboardForm.h"
#include "SupplierEditPage.h"
#include "SuppliersListPage.h"

using namespace Controllers;

namespace Views
{
	SupplierViewPage::SupplierViewPage(int id) {
		InitializeComponent();
		SetData(SuppliersController::GetSupplierById(id));
	}
	SupplierViewPage::SupplierViewPage(Supplier^ supplier) {
		InitializeComponent();
		SetData(supplier);
	}
	void SupplierViewPage::SetData(Supplier^ supplier) {
		this->supplier = supplier;
		nameLabel->Text = supplier->Name;
		idLabel->Text = "ID: " + supplier->Id.ToString();
		contractDateLabel->Text = supplier->ContractedAt->ToString("dd/MM/yyyy");
	}
	Void SupplierViewPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew SuppliersListPage());
	}
	Void SupplierViewPage::editBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew SupplierEditPage(supplier));
	}
	Void SupplierViewPage::deleteBtn_Click(Object^ sender, EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to delete this supplier?", "Delete Supplier", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			SuppliersController::DeleteSupplier(supplier->Id);
			DashboardForm::SwitchView(gcnew SuppliersListPage());
		}
	}
}
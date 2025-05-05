#include "ImportViewPage.h"
#include "ImportsController.h"
#include "ViewOrderItem.h"
#include "DashboardForm.h"
#include "SupplierViewPage.h"
#include "UserViewPage.h"
#include "ImportsListPage.h"
#include "AuthenticationController.h"

using namespace Controllers;

namespace Views
{
	ImportViewPage::ImportViewPage(int id) {
		InitializeComponent();
		SetData(ImportsController::GetImportById(id));
	}
	ImportViewPage::ImportViewPage(Import^ import) {
		InitializeComponent();
		SetData(import);
	}
	void ImportViewPage::SetData(Import^ import) {
		this->import = import;
		idLabel->Text = import->Id.ToString();
		supplierLabel->Text = import->Supplier->Name;
		arrivalTimeLabel->Text = import->ArrivalDate.ToString("dd/MM/yyyy");
		adderLabel->Text = import->Adder->GetFullName();
		statusLabel->Text = import->Status.ToString();

		if (import->Accepter != nullptr) {
			accepterLabel->Text = import->Accepter->GetFullName();
			accepterLabel->Click += gcnew System::EventHandler(this, &ImportViewPage::accepterLabel_Click);
			acceptBtn->Hide();
		}
		else {
			accepterLabel->Text = "Not Accepted Yet";
			accepterLabel->ForeColor = System::Drawing::Color::Red;
		}

		if (import->Reviewer != nullptr) {
			reviewerLabel->Text = import->Reviewer->GetFullName();
			reviewerLabel->Click += gcnew System::EventHandler(this, &ImportViewPage::reviewerLabel_Click);
			reviewBtn->Hide();
		}
		else {
			reviewerLabel->Text = "Not Reviewed Yet";
			reviewerLabel->ForeColor = System::Drawing::Color::Red;
		}

		itemCountLabel->Text = "This Import incluldes " + import->ItemCount + " Items listed below";
		for each (OrderItem ^ item in import->Items) {
			ViewOrderItem^ viewItem = gcnew ViewOrderItem(item);
			viewItem->Dock = DockStyle::Top;
			itemsPanel->Controls->Add(viewItem);
		}
	}
	Void ImportViewPage::supplierLabel_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew SupplierViewPage(import->Supplier->Id));
	}
	Void ImportViewPage::adderLabel_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UserViewPage(import->Adder->Id));
	}
	Void ImportViewPage::reviewerLabel_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UserViewPage(import->Reviewer->Id));
	}
	Void ImportViewPage::accepterLabel_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UserViewPage(import->Accepter->Id));
	}
	Void ImportViewPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew ImportsListPage());
	}
	Void ImportViewPage::reviewBtn_Click(Object^ sender, EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to confirm reviewing this Import", "Confirm Reviewing", MessageBoxButtons::YesNo, MessageBoxIcon::Information) != DialogResult::Yes) {
			return;
		}

		String^ result = ImportsController::ReviewImport(import->Id);

		if (result != nullptr) {
			MessageBox::Show(result, "Reviewing Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		MessageBox::Show("Import Reviewed Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		import->Reviewer = AuthenticationController::CurrentUser;
		reviewerLabel->Text = import->Reviewer->GetFullName();
		reviewerLabel->Click += gcnew System::EventHandler(this, &ImportViewPage::reviewerLabel_Click);
		reviewBtn->Hide();
	}
	Void ImportViewPage::acceptBtn_Click(Object^ sender, EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to confirm accepting this Import", "Confirm Accepting", MessageBoxButtons::YesNo, MessageBoxIcon::Information) != DialogResult::Yes) {
			return;
		}

		String^ result = ImportsController::AcceptImport(import->Id);

		if (result != nullptr) {
			MessageBox::Show(result, "Accepting Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		MessageBox::Show("Import Accepted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		import->Accepter = AuthenticationController::CurrentUser;
		accepterLabel->Text = import->Accepter->GetFullName();
		accepterLabel->Click += gcnew System::EventHandler(this, &ImportViewPage::accepterLabel_Click);
		acceptBtn->Hide();
	}
	Void ImportViewPage::deleteBtn_Click(Object^ sender, EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to delete this Import", "Confirm Deleting", MessageBoxButtons::YesNo, MessageBoxIcon::Information) != DialogResult::Yes) {
			return;
		}
		String^ result = ImportsController::DeleteImport(import->Id);

		if (result != nullptr) {
			MessageBox::Show(result, "Deleting Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		MessageBox::Show("Import Deleted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		DashboardForm::SwitchView(gcnew ImportsListPage());
	}
}
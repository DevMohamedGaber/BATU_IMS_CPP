#include "ExportViewPage.h"
#include "AuthenticationController.h"
#include "ExportsController.h"
#include "CustomerViewPage.h"
#include "ExportsListPage.h"
#include "ViewOrderItem.h"
#include "DashboardForm.h"
#include "UserViewPage.h"

using namespace Controllers;

namespace Views
{
	ExportViewPage::ExportViewPage(int Id) {
		InitializeComponent();
		SetData(ExportsController::GetExportById(Id));
	}
	ExportViewPage::ExportViewPage(Export^ exportData) {
		InitializeComponent();
		SetData(exportData);
	}
	void ExportViewPage::SetData(Export^ exportData) {
		// handle buttons based on roles
		cancelBtn->Visible = AuthenticationController::CurrentUser->Role->Equals(UserRole::Admin)
			|| AuthenticationController::CurrentUser->Role->Equals(UserRole::Staff);
		confirmBtn->Visible = AuthenticationController::CurrentUser->Role->Equals(UserRole::Admin)
			|| AuthenticationController::CurrentUser->Role->Equals(UserRole::Staff);
		deleteBtn->Visible = AuthenticationController::CurrentUser->Role->Equals(UserRole::Admin);

		// set up data in table
		this->exportData = exportData;
		idLabel->Text = exportData->Id.ToString();
		customerLabel->Text = exportData->Customer->GetFullName();
		dateLabel->Text = exportData->Date.ToString("dd/MM/yyyy");
		retailerLabel->Text = exportData->Retailer->GetFullName();
		itemCountLabel->Text = "This Export incluldes " + exportData->ItemCount + " Items listed below";
		UpdateStatus();
		for each(OrderItem^ item in exportData->Items) {
			ViewOrderItem^ viewItem = gcnew ViewOrderItem(item);
			viewItem->Dock = DockStyle::Top;
			itemsPanel->Controls->Add(viewItem);
		}
	}
	void ExportViewPage::UpdateStatus() {
		statusLabel->Text = exportData->Status.ToString();
		cancelBtn->Visible = exportData->Status != OrderStatus::Cancelled;
		confirmBtn->Visible = exportData->Status != OrderStatus::Completed;
	}
	Void ExportViewPage::customerLabel_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew CustomerViewPage(exportData->Customer->Id));
	}
	Void ExportViewPage::retailerLabel_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UserViewPage(exportData->Retailer->Id));
	}
	Void ExportViewPage::cancelBtn_Click(Object^ sender, EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to Cancel this export?", "Cancel Export", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) != DialogResult::Yes) {
			return;
		}
		String^ result = ExportsController::ChangeExportStatus(exportData->Id, 3);
		if (result != nullptr) {
			MessageBox::Show(result, "Export Cancelation Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		exportData->Status = OrderStatus::Cancelled;
		UpdateStatus();
	}
    Void ExportViewPage::confirmBtn_Click(Object^ sender, EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to confirm this export?", "Confirm Export", MessageBoxButtons::YesNo, MessageBoxIcon::Question) != DialogResult::Yes) {
			return;
		}
		String^ result = ExportsController::ChangeExportStatus(exportData->Id, 2);
		if (result != nullptr) {
			MessageBox::Show(result, "Export Confirmation Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		exportData->Status = OrderStatus::Completed;
		UpdateStatus();
    }

	Void ExportViewPage::deleteBtn_Click(Object^ sender, EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to delete this export?", "Delete Export", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) != DialogResult::Yes) {
			return;
		}
		String^ result = ExportsController::DeleteExport(exportData->Id);

		if (result != nullptr) {
			MessageBox::Show(result, "Deleting Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		MessageBox::Show("Import Deleted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		DashboardForm::SwitchView(gcnew ExportsListPage());
	}
}
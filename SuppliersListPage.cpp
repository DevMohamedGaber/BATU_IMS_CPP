#include "SuppliersListPage.h"
#include "AuthenticationController.h"
#include "SuppliersController.h"
#include "SupplierViewPage.h"
#include "AddSupplierPage.h"
#include "DashboardForm.h"
#include "CustomTable.h"

using namespace Controllers;

namespace Views {
	Void SuppliersListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew AddSupplierPage());
	}
    Void SuppliersListPage::SuppliersListPage_Load(Object^ sender, EventArgs^ e) {
        // setup buttons to handle role
        addNewBtn->Visible = AuthenticationController::CurrentUser->Role->Equals(UserRole::Admin)
            || AuthenticationController::CurrentUser->Role->Equals(UserRole::Staff);

        List<Supplier^>^ suppliers = SuppliersController::GetSuppliersList();

        if (suppliers == nullptr || suppliers->Count == 0) {
            noDataLabel->Visible = true;
            return;
        }

        // Create and configure the CustomTable
        CustomTable^ table = gcnew CustomTable();
        table->Dock = DockStyle::Fill;

        // Add columns
        table->AddColumn("#", 40);
        table->AddColumn("ID", 100);
        table->AddColumn("Name", 200);
        table->AddColumn("Contract Date", 150);
        table->AddColumn("Actions", 150);

        // Add rows and cells
        for each (Supplier ^ supplier in suppliers) {
            table->AddRow();
            int rowIndex = table->GetRowCount() - 1;

            // Add data cells
            table->AddCell((rowIndex + 1).ToString(), rowIndex, 0);
            table->AddCell(supplier->Id.ToString(), rowIndex, 1);
            table->AddCell(supplier->Name, rowIndex, 2);
            table->AddCell(supplier->ContractedAt->ToString("d"), rowIndex, 3);

            // Add view button
            Button^ viewButton = safe_cast<Button^>(table->AddButtonCell("Details", rowIndex, 4));
            if (viewButton != nullptr) {
                viewButton->Click += gcnew EventHandler(this, &SuppliersListPage::ActionButton_Click);
                viewButton->Tag = supplier->Id;
            }
        }

        // Add table to the page
        Controls->Add(table);
        table->BringToFront();
    }
    // Handle button clicks
    Void SuppliersListPage::ActionButton_Click(Object^ sender, EventArgs^ e) {
        Button^ button = safe_cast<Button^>(sender);
        int Id = safe_cast<int>(button->Tag);
        // Handle the edit action, e.g.:
        DashboardForm::SwitchView(gcnew SupplierViewPage(Id));
    }
}
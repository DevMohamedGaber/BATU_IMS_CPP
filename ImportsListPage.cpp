#include "ImportsListPage.h"
#include "AuthenticationController.h"
#include "ImportsController.h"
#include "ImportViewPage.h"
#include "AddImportPage.h"
#include "DashboardForm.h"
#include "CustomTable.h"

using namespace Controllers;

namespace Views
{
    Void ImportsListPage::ImportsListPage_Load(Object^ sender, EventArgs^ e) {
        // show add button to Admin and Staff roles
		addNewBtn->Visible = AuthenticationController::CurrentUser->Role->Equals(UserRole::Admin)
                        || AuthenticationController::CurrentUser->Role->Equals(UserRole::Staff);
        auto data = ImportsController::GetImportsList();
        if (data == nullptr || data->Count == 0) {
            noDataLabel->Visible = true;
            return;
        }

        // Create and configure the CustomTable
        CustomTable^ table = gcnew CustomTable();
        table->Dock = DockStyle::Fill;

        // Add columns with appropriate widths
        table->AddColumn("#", 30);
        table->AddColumn("ID", 80);
        table->AddColumn("Supplier", 200);
        table->AddColumn("Status", 120);
        table->AddColumn("Arrival Date", 150);
        table->AddColumn("Items Count", 100);
        table->AddColumn("Actions", 200);

        // Add rows and cells
        for each (Import ^ import in data) {
            table->AddRow();
            int rowIndex = table->GetRowCount() - 1;

            // Add data cells with null checks
            table->AddCell((rowIndex + 1).ToString(), rowIndex, 0);
            table->AddCell(import->Id.ToString(), rowIndex, 1);
            table->AddCell(import->Supplier != nullptr ? import->Supplier->Name : "N/A", rowIndex, 2);
            table->AddCell(import->Status.ToString(), rowIndex, 3);

            // Format arrival date
            String^ arrivalDate = import->ArrivalDate != DateTime::MinValue
                ? import->ArrivalDate.ToString("MM/dd/yyyy")
                : "N/A";
            table->AddCell(arrivalDate, rowIndex, 4);

            table->AddCell(import->ItemCount.ToString(), rowIndex, 5);

            // Add view button
            Button^ viewButton = safe_cast<Button^>(table->AddButtonCell("View", rowIndex, 6));
            if (viewButton != nullptr) {
                viewButton->Click += gcnew EventHandler(this, &ImportsListPage::ViewButton_Click);
                viewButton->Tag = import->Id;
            }
        }

        // Add table to the page
        Controls->Add(table);
        table->BringToFront();
    }

    // Handle view button clicks
    Void ImportsListPage::ViewButton_Click(Object^ sender, EventArgs^ e) {
        Button^ button = safe_cast<Button^>(sender);
        int importId = safe_cast<int>(button->Tag);
        DashboardForm::SwitchView(gcnew ImportViewPage(importId));
    }
	Void ImportsListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew AddImportPage());
	}
}
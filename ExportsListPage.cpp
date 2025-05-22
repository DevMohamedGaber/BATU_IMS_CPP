#include "ExportsListPage.h"
#include "AuthenticationController.h"
#include "ExportsController.h"
#include "ExportViewPage.h"
#include "AddExportPage.h"
#include "DashboardForm.h"
#include "CustomTable.h"

using namespace Controllers;

namespace Views
{
    Void ExportsListPage::ExportsListPage_Load(Object^ sender, EventArgs^ e) {
        addNewBtn->Visible = AuthenticationController::CurrentUser->Role->Equals(UserRole::Admin)
            || AuthenticationController::CurrentUser->Role->Equals(UserRole::Retailer);
        auto data = ExportsController::GetExportsList();
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
        table->AddColumn("Customer", 200);
        table->AddColumn("Status", 120);
        table->AddColumn("Export Date", 150);
        table->AddColumn("Items Count", 100);
        table->AddColumn("Actions", 150);

        // Add rows and cells
        for each (Export ^ exportData in data) {
            table->AddRow();
            int rowIndex = table->GetRowCount() - 1;

            // Add data cells
            table->AddCell((rowIndex + 1).ToString(), rowIndex, 0);
            table->AddCell(exportData->Id.ToString(), rowIndex, 1);
            table->AddCell(exportData->Customer->GetFullName(), rowIndex, 2);
            table->AddCell(exportData->Status.ToString(), rowIndex, 3);
            table->AddCell(exportData->Date.ToString("MM/dd/yyyy"), rowIndex, 4); // Formatted date
            table->AddCell(exportData->ItemCount.ToString(), rowIndex, 5);

            // Add view button
            Button^ viewButton = safe_cast<Button^>(table->AddButtonCell("Details", rowIndex, 6));
            if (viewButton != nullptr) {
                viewButton->Click += gcnew EventHandler(this, &ExportsListPage::ViewButton_Click);
                viewButton->Tag = exportData->Id;
            }
        }

        // Add table to the page
        Controls->Add(table);
        table->BringToFront();
    }

    // Handle view button clicks
    Void ExportsListPage::ViewButton_Click(Object^ sender, EventArgs^ e) {
        Button^ button = safe_cast<Button^>(sender);
        int exportId = safe_cast<int>(button->Tag);
        DashboardForm::SwitchView(gcnew ExportViewPage(exportId));
    }
	Void ExportsListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew AddExportPage());
	}
}
#include "CustomersListPage.h"
#include "CustomersController.h"
#include "DashboardForm.h"
#include "AddCustomerPage.h"
#include "CustomerViewPage.h"
#include "CustomTable.h"

using namespace Controllers;

namespace Views {
	Void CustomersListPage::addNewBtn_Click(Object^ sender, EventArgs^ e)
	{
		DashboardForm::SwitchView(gcnew AddCustomerPage());
	}
	// on page load
    Void CustomersListPage::CustomersListPage_Load(Object^ sender, EventArgs^ e)
    {
        // Get the customers list from the controller
        List<Customer^>^ customers = CustomersController::GetCustomersList();
        if (customers == nullptr || customers->Count == 0)
        {
            noDataLabel->Visible = true;
            return;
        }

        // Create and configure the CustomTable
        CustomTable^ table = gcnew CustomTable();
        table->Dock = DockStyle::Fill;

        // Add columns with appropriate widths
        table->AddColumn("#", 30);
        table->AddColumn("ID", 80);
        table->AddColumn("First Name", 150);
        table->AddColumn("Last Name", 150);
        table->AddColumn("Email", 250);
        table->AddColumn("Actions", 120);

        // Add rows and cells
        for each (Customer ^ customer in customers) {
            table->AddRow();
            int rowIndex = table->GetRowCount() - 1;

            // Add data cells
            table->AddCell((rowIndex + 1).ToString(), rowIndex, 0);
            table->AddCell(customer->Id.ToString(), rowIndex, 1);
            table->AddCell(customer->FirstName != nullptr ? customer->FirstName : "N/A", rowIndex, 2);
            table->AddCell(customer->LastName != nullptr ? customer->LastName : "N/A", rowIndex, 3);
            table->AddCell(customer->Email != nullptr ? customer->Email : "N/A", rowIndex, 4);

            // Add view button
            Button^ viewButton = safe_cast<Button^>(table->AddButtonCell("Details", rowIndex, 5));
            if (viewButton != nullptr) {
                viewButton->Click += gcnew EventHandler(this, &CustomersListPage::ViewButton_Click);
                viewButton->Tag = customer->Id;
            }
        }

        // Add table to the page
        Controls->Add(table);
        table->BringToFront();
    }

    // Handle view button clicks
    Void CustomersListPage::ViewButton_Click(Object^ sender, EventArgs^ e) {
        Button^ button = safe_cast<Button^>(sender);
        int customerId = safe_cast<int>(button->Tag);
        DashboardForm::SwitchView(gcnew CustomerViewPage(customerId));
    }
}
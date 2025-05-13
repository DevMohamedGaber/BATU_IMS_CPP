#include "UsersController.h"
#include "UsersListPage.h"
#include "DashboardForm.h"
#include "AddUserPage.h"
#include "UserViewPage.h"
#include "CustomTable.h"

using namespace Controllers;

namespace Views
{
    Void UsersListPage::UsersListPage_Load(Object^ sender, EventArgs^ e) {
        List<User^>^ users = UsersController::GetAllUsers();
        if (users == nullptr || users->Count == 0) {
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
        table->AddColumn("Email", 200);
        table->AddColumn("Username", 120);
        table->AddColumn("Role", 100);
        table->AddColumn("Actions", 150);

        // Add rows and cells
        for each (User ^ user in users) {
            table->AddRow();
            int rowIndex = table->GetRowCount() - 1;

            // Add data cells with null checks
            table->AddCell((rowIndex + 1).ToString(), rowIndex, 0);
            table->AddCell(user->Id.ToString(), rowIndex, 1);
            table->AddCell(user->FirstName != nullptr ? user->FirstName : "N/A", rowIndex, 2);
            table->AddCell(user->LastName != nullptr ? user->LastName : "N/A", rowIndex, 3);
            table->AddCell(user->Email != nullptr ? user->Email : "N/A", rowIndex, 4);
            table->AddCell(user->Username != nullptr ? user->Username : "N/A", rowIndex, 5);
            table->AddCell(user->Role != nullptr ? user->Role->ToString() : "N/A", rowIndex, 6);

            // Add view button
            Button^ viewButton = safe_cast<Button^>(table->AddButtonCell("View", rowIndex, 7));
            if (viewButton != nullptr) {
                viewButton->Click += gcnew EventHandler(this, &UsersListPage::ViewButton_Click);
                viewButton->Tag = user->Id;
            }
        }

        // Add table to the page
        Controls->Add(table);
        table->BringToFront();
    }

    // Handle view button clicks
    Void UsersListPage::ViewButton_Click(Object^ sender, EventArgs^ e) {
        Button^ button = safe_cast<Button^>(sender);
        int userId = safe_cast<int>(button->Tag);
        DashboardForm::SwitchView(gcnew UserViewPage(userId));
    }
    Void UsersListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
        DashboardForm::SwitchView(gcnew AddUserPage());
    }
}
#include "CategoriesListPage.h"
#include "CategoriesController.h"
#include "DashboardForm.h"
#include "AddCategoryPage.h"
#include "ViewCategoryPage.h"
#include "CustomTable.h"
using namespace Controllers;
using namespace System;
using namespace Models;

namespace Views
{
	Void CategoriesListPage::addNewBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew AddCategoryPage());
	}
    Void CategoriesListPage::CategoriesListPage_Load(Object^ sender, EventArgs^ e) {
        List<Category^>^ categories = CategoriesController::GetCategoriesList();
        if (categories == nullptr || categories->Count == 0) {
            noDataLabel->Visible = true;
            return;
        }

        // Create and configure the CustomTable
        CustomTable^ table = gcnew CustomTable();
        table->Dock = DockStyle::Fill;

        // Add columns
        table->AddColumn("#", 30);
        table->AddColumn("ID", 100);
        table->AddColumn("Name", 200);
        table->AddColumn("Actions", 150);

        // Add rows and cells
        for each (Category ^ category in categories) {
            table->AddRow();
            int rowIndex = table->GetRowCount() - 1;

            // Add data cells
            table->AddCell((rowIndex + 1).ToString(), rowIndex, 0);
            table->AddCell(category->Id.ToString(), rowIndex, 1);
            table->AddCell(category->Name, rowIndex, 2);

            // Add action button
            Button^ actionButton = safe_cast<Button^>(table->AddButtonCell("Details", rowIndex, 3));
            if (actionButton != nullptr) {
                actionButton->Click += gcnew EventHandler(this, &CategoriesListPage::ActionButton_Click);
                actionButton->Tag = category->Id; // Store category ID for later reference
            }
        }

        // Add table to the page
        Controls->Add(table);
        table->BringToFront();
    }

    // Handle button clicks
    Void CategoriesListPage::ActionButton_Click(Object^ sender, EventArgs^ e) {
        Button^ button = safe_cast<Button^>(sender);
        int categoryId = safe_cast<int>(button->Tag);
        // Handle the edit action, e.g.:
        DashboardForm::SwitchView(gcnew ViewCategoryPage(categoryId));
    }
}
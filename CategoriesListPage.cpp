#include "CategoriesListPage.h"
#include "CategoriesController.h"
#include "DashboardForm.h"
#include "AddCategoryPage.h"
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

		// Create a DataTable to structure the data with Id, Name, and Operations columns  
		System::Data::DataTable^ table = gcnew System::Data::DataTable();  
		table->Columns->Add("Id", int::typeid);  
		table->Columns->Add("Name", String::typeid);  
		table->Columns->Add("Operations", String::typeid);  

		// Populate the DataTable with category data  
		for each (Category^ category in categories) {  
			System::Data::DataRow^ row = table->NewRow();  
			row["Id"] = category->Id;  
			row["Name"] = category->Name;  
			row["Operations"] = "Edit | View | Delete"; // Placeholder for buttons  
			table->Rows->Add(row);  
		}  

		// Bind the DataTable to the dataTable control  
		dataTable->DataSource = table;  
		dataTable->Visible = true;  

		// Add event handlers for the Operations column buttons (Edit, View, Delete)  
		/*dataTable->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CategoriesListPage::dataTable_CellContentClick);*/
	}
}
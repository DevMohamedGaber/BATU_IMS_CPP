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

		System::Data::DataTable^ table = gcnew System::Data::DataTable();  
		table->Columns->Add("Id", int::typeid);  
		table->Columns->Add("Name", String::typeid);

		for each (Category^ category in categories) {
			System::Data::DataRow^ row = table->NewRow();
			row["Id"] = category->Id;
			row["Name"] = category->Name;
			table->Rows->Add(row);
		}

		dataTable->DataSource = table;
		dataTable->Visible = true;
	}
}
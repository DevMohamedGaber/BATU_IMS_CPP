#include "CategoriesListPage.h"
#include "CategoriesController.h"
#include "DashboardForm.h"
#include "AddCategoryPage.h"
#include "ViewCategoryPage.h"
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
	// on click of a row, open the view category page
	Void CategoriesListPage::dataTable_CellClick(Object^ sender, DataGridViewCellEventArgs^ e) {
		if (e->RowIndex < 0) {
			return;
		}
		int id = Convert::ToInt32(dataTable->Rows[e->RowIndex]->Cells["Id"]->Value);
		DashboardForm::SwitchView(gcnew ViewCategoryPage(id));
	}
}
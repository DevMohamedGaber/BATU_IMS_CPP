#include "ViewCategoryPage.h"
#include "CategoriesController.h"
#include "DashboardForm.h"
#include "CategoriesListPage.h"
#include "EditCategoryPage.h"

using namespace Controllers;

namespace Views
{
	ViewCategoryPage::ViewCategoryPage(int Id) {
		InitializeComponent();
		SetCategory(CategoriesController::GetCategoryById(Id));
	}
	ViewCategoryPage::ViewCategoryPage(Category^ category) {
		InitializeComponent();
		SetCategory(category);
	}
	Void ViewCategoryPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew CategoriesListPage());
	}
	Void ViewCategoryPage::deleteBtn_Click(Object^ sender, EventArgs^ e) {
		// show a confirm message box
		if (MessageBox::Show("Are you sure you want to delete this category?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes) {
			return;
		}
		CategoriesController::DeleteCategory(this->category->Id);
		DashboardForm::SwitchView(gcnew CategoriesListPage());
	}
	Void ViewCategoryPage::editBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew EditCategoryPage(this->category));
	}
}
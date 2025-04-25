#include "EditCategoryPage.h"
#include "CategoriesController.h"
#include "DashboardForm.h"
#include "ViewCategoryPage.h"

using namespace Controllers;

namespace Views
{
	Void EditCategoryPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew ViewCategoryPage(this->category));
	}
	Void EditCategoryPage::confirmBtn_Click(Object^ sender, EventArgs^ e) {
		Category^ newCategory = gcnew Category();
		newCategory->Id = this->category->Id;
		newCategory->Name = this->nameInput->Text;

		String^ result = CategoriesController::EditCategory(newCategory);

		if (result != nullptr) {
			this->errorMsg->ForeColor = System::Drawing::Color::Red;
			this->errorMsg->Text = result;
		}
		this->errorMsg->ForeColor = System::Drawing::Color::Green;
		this->errorMsg->Text = "Category updated successfully!";
		this->category->Name = this->nameInput->Text;
	}
}
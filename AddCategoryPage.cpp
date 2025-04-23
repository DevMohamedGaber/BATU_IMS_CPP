#include "AddCategoryPage.h"
#include "CategoriesController.h"

using namespace Controllers;
namespace Views
{
	Void AddCategoryPage::button1_Click(Object^ sender, EventArgs^ e) {
		String^ result = CategoriesController::AddNewCategory(nameInput->Text);

		if (result != nullptr) {
			errorBox->ForeColor = System::Drawing::Color::Maroon;
			errorBox->Text = result;
			return;
		}
		errorBox->ForeColor = System::Drawing::Color::Green;
		errorBox->Text = "Category added successfully!";
	}
}
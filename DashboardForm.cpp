#include "CategoriesListPage.h"
#include "DashboardForm.h"
#include "ItemListPage.h"
#include "HomePage.h"
#include "CustomersListPage.h"

namespace Views
{
	void DashboardForm::Start() {
		if (Instance != nullptr) {
			return;
		}
		Instance = gcnew DashboardForm();
		SwitchView(gcnew HomePage());
		Instance->ShowDialog();
	}
	void DashboardForm::SwitchView(UserControl^ newView)
	{
		// Clear previous view
		if (Instance->_panelContainer != nullptr)
		{
			Instance->_panelContainer->Controls->Clear();
		}

		// Dispose if needed
		if (Instance->_currentView != nullptr)
		{
			delete Instance->_currentView;
		}

		// Set up new view
		Instance->_currentView = newView;
		Instance->_currentView->Dock = DockStyle::Fill;
		Instance->_panelContainer->Controls->Add(Instance->_currentView);

		// Optional: Update window title
		Instance->Text = "BATU - Inventory Management System - " + newView->Name;
	}
	System::Void DashboardForm::homeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		DashboardForm::SwitchView(gcnew HomePage());
	}
	System::Void DashboardForm::inventoryBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DashboardForm::SwitchView(gcnew ItemListPage());
	}
	System::Void DashboardForm::categoriesBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		DashboardForm::SwitchView(gcnew CategoriesListPage());
	}
	System::Void DashboardForm::customersBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		DashboardForm::SwitchView(gcnew CustomersListPage());
	}
}
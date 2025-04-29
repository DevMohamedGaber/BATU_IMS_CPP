#include "CategoriesListPage.h"
#include "DashboardForm.h"
#include "ItemListPage.h"
#include "HomePage.h"
#include "CustomersListPage.h"
#include "SuppliersListPage.h"

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
	// Event handlers for buttons
	Void DashboardForm::homeBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew HomePage());
	}
	Void DashboardForm::inventoryBtn_Click(Object^ sender, EventArgs^ e)
	{
		DashboardForm::SwitchView(gcnew ItemListPage());
	}
	Void DashboardForm::categoriesBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew CategoriesListPage());
	}
	Void DashboardForm::customersBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew CustomersListPage());
	}
	Void DashboardForm::suppliersBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew SuppliersListPage());
	}
}
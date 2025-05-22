#include "AuthenticationController.h"
#include "CategoriesListPage.h"
#include "CustomersListPage.h"
#include "SuppliersListPage.h"
#include "ImportsListPage.h"
#include "ExportsListPage.h"
#include "DashboardForm.h"
#include "UsersListPage.h"
#include "UserViewPage.h"
#include "ItemListPage.h"
#include "LoginForm.h"
#include "HomePage.h"

using namespace Controllers;

namespace Views
{
    void DashboardForm::SetMenuButton(Panel^ button, System::EventHandler^ handler, UserRole^ role) {
		// AuthenticationController::CurrentUser->Role
		UserRole^ userRole = AuthenticationController::CurrentUser->Role;
		bool canAppear = (role == nullptr) || userRole->Equals(UserRole::Admin) || userRole->Equals(role);

		button->Visible = canAppear;

		if (!canAppear) {
			return;
		}

		button->Click += handler;
		for each(auto child in button->Controls)
		{
			auto childCast = dynamic_cast<Control^>(child);
			if (childCast != nullptr) {
				childCast->Click += handler;
			}
		}
    }
	// Event handlers for buttons
	Void DashboardForm::DashboardForm_Load(System::Object^ sender, System::EventArgs^ e) {
		SetMenuButton(homeBtn, gcnew EventHandler(this, &DashboardForm::homeBtn_Click), nullptr);
		SetMenuButton(inventoryBtn, gcnew EventHandler(this, &DashboardForm::inventoryBtn_Click), nullptr);
		SetMenuButton(categoriesBtn, gcnew EventHandler(this, &DashboardForm::categoriesBtn_Click), nullptr);
		SetMenuButton(suppliersBtn, gcnew EventHandler(this, &DashboardForm::suppliersBtn_Click), UserRole::Staff);
		SetMenuButton(customersBtn, gcnew EventHandler(this, &DashboardForm::customersBtn_Click), UserRole::Retailer);
		SetMenuButton(importsBtn, gcnew EventHandler(this, &DashboardForm::importsBtn_Click), UserRole::Staff);
		SetMenuButton(exportsBtn, gcnew EventHandler(this, &DashboardForm::exportsBtn_Click), UserRole::Retailer);
		SetMenuButton(usersBtn, gcnew EventHandler(this, &DashboardForm::usersBtn_Click), UserRole::Admin);
	}

	Void DashboardForm::logoutBtn_Click(Object^ sender, EventArgs^ e) {
		AuthenticationController::Logout();
		Instance = nullptr;
		auto loginForm = gcnew LoginForm();
		this->Hide();
		loginForm->ShowDialog();
		this->Close();
	}
	Void DashboardForm::usernameLabel_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UserViewPage(AuthenticationController::CurrentUser));
	}
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
	Void DashboardForm::usersBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew UsersListPage());
	}
	Void DashboardForm::importsBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew ImportsListPage());
	}
	Void DashboardForm::exportsBtn_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew ExportsListPage());
	}

	// Static instance of DashboardForm
	void DashboardForm::Start() {
		if (Instance != nullptr) {
			return;
		}
		Instance = gcnew DashboardForm();
		SwitchView(gcnew HomePage());
		if (AuthenticationController::CurrentUser != nullptr) {
			Instance->usernameLabel->Text = AuthenticationController::CurrentUser->GetFullName();
			Instance->roleLabel->Text = AuthenticationController::CurrentUser->Role->ToString();
		}
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
}
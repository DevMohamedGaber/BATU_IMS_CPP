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
	// Event handlers for buttons
	Void DashboardForm::DashboardForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		homeBtn->Click += gcnew System::EventHandler(this, &DashboardForm::homeBtn_Click);
		for each (auto child in homeBtn->Controls)
		{
			auto childCast = dynamic_cast<Control^>(child);
			if (childCast != nullptr) {
				childCast->Click += gcnew System::EventHandler(this, &DashboardForm::homeBtn_Click);
			}
		}
		inventoryBtn->Click += gcnew System::EventHandler(this, &DashboardForm::inventoryBtn_Click);
		for each (auto child in inventoryBtn->Controls)
		{
			auto childCast = dynamic_cast<Control^>(child);
			if (childCast != nullptr) {
				childCast->Click += gcnew System::EventHandler(this, &DashboardForm::inventoryBtn_Click);
			}
		}
		categoriesBtn->Click += gcnew System::EventHandler(this, &DashboardForm::categoriesBtn_Click);
		for each (auto child in categoriesBtn->Controls)
		{
			auto childCast = dynamic_cast<Control^>(child);
			if (childCast != nullptr) {
				childCast->Click += gcnew System::EventHandler(this, &DashboardForm::categoriesBtn_Click);
			}
		}
		suppliersBtn->Click += gcnew System::EventHandler(this, &DashboardForm::suppliersBtn_Click);
		for each (auto child in suppliersBtn->Controls)
		{
			auto childCast = dynamic_cast<Control^>(child);
			if (childCast != nullptr) {
				childCast->Click += gcnew System::EventHandler(this, &DashboardForm::suppliersBtn_Click);
			}
		}
		customersBtn->Click += gcnew System::EventHandler(this, &DashboardForm::customersBtn_Click);
		for each (auto child in customersBtn->Controls)
		{
			auto childCast = dynamic_cast<Control^>(child);
			if (childCast != nullptr) {
				childCast->Click += gcnew System::EventHandler(this, &DashboardForm::customersBtn_Click);
			}
		}
		importsBtn->Click += gcnew System::EventHandler(this, &DashboardForm::importsBtn_Click);
		for each (auto child in importsBtn->Controls)
		{
			auto childCast = dynamic_cast<Control^>(child);
			if (childCast != nullptr) {
				childCast->Click += gcnew System::EventHandler(this, &DashboardForm::importsBtn_Click);
			}
		}
		exportsBtn->Click += gcnew System::EventHandler(this, &DashboardForm::exportsBtn_Click);
		for each (auto child in exportsBtn->Controls)
		{
			auto childCast = dynamic_cast<Control^>(child);
			if (childCast != nullptr) {
				childCast->Click += gcnew System::EventHandler(this, &DashboardForm::exportsBtn_Click);
			}
		}
		usersBtn->Click += gcnew System::EventHandler(this, &DashboardForm::usersBtn_Click);
		for each (auto child in usersBtn->Controls)
		{
			auto childCast = dynamic_cast<Control^>(child);
			if (childCast != nullptr) {
				childCast->Click += gcnew System::EventHandler(this, &DashboardForm::usersBtn_Click);
			}
		}
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
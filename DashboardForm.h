#pragma once
#include "HomePage.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Views
{
	/// <summary>
	/// Summary for DashboardForm
	/// </summary>
	public ref class DashboardForm : public System::Windows::Forms::Form
	{
	private:
		Panel^ _panelContainer;
		UserControl^ _currentView;
		static DashboardForm^ Instance;

	public:
		DashboardForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashboardForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1135, 829);
			this->Name = L"DashboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashboardForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
		}

	public:
		static void Start()
		{
			if (Instance != nullptr) {
				return;
			}
			Instance = gcnew DashboardForm();
			Instance->_panelContainer = gcnew Panel();
			Instance->_panelContainer->Dock = DockStyle::Fill;
			Instance->Controls->Add(Instance->_panelContainer);
			SwitchView(gcnew HomePage());
			Instance->ShowDialog();
		}
		static void SwitchView(UserControl^ newView)
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
#pragma endregion
	};
}

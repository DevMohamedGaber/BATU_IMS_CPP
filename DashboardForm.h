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
	private: System::Windows::Forms::Panel^ panel1;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->MaximumSize = System::Drawing::Size(300, 0);
			this->panel1->MinimumSize = System::Drawing::Size(300, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 829);
			this->panel1->TabIndex = 0;
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1410, 829);
			this->Controls->Add(this->panel1);
			this->Name = L"DashboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashboardForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

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

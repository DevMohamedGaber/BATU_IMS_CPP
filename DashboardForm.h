#pragma once
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
		UserControl^ _currentView;

	private: System::Windows::Forms::Panel^ _panelContainer;

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
			System::Windows::Forms::Panel^ sideNavBarPanel;
			System::Windows::Forms::Button^ suppliersBtn;
			System::Windows::Forms::Button^ customersBtn;
			System::Windows::Forms::Button^ inventoryBtn;
			System::Windows::Forms::Button^ categoriesBtn;
			System::Windows::Forms::Button^ usersBtn;
			System::Windows::Forms::Button^ homeBtn;
			System::Windows::Forms::Button^ importsBtn;
			this->_panelContainer = (gcnew System::Windows::Forms::Panel());
			sideNavBarPanel = (gcnew System::Windows::Forms::Panel());
			suppliersBtn = (gcnew System::Windows::Forms::Button());
			customersBtn = (gcnew System::Windows::Forms::Button());
			inventoryBtn = (gcnew System::Windows::Forms::Button());
			categoriesBtn = (gcnew System::Windows::Forms::Button());
			usersBtn = (gcnew System::Windows::Forms::Button());
			homeBtn = (gcnew System::Windows::Forms::Button());
			importsBtn = (gcnew System::Windows::Forms::Button());
			sideNavBarPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// sideNavBarPanel
			// 
			sideNavBarPanel->AutoSize = true;
			sideNavBarPanel->BackColor = System::Drawing::Color::SteelBlue;
			sideNavBarPanel->Controls->Add(importsBtn);
			sideNavBarPanel->Controls->Add(suppliersBtn);
			sideNavBarPanel->Controls->Add(customersBtn);
			sideNavBarPanel->Controls->Add(inventoryBtn);
			sideNavBarPanel->Controls->Add(categoriesBtn);
			sideNavBarPanel->Controls->Add(usersBtn);
			sideNavBarPanel->Controls->Add(homeBtn);
			sideNavBarPanel->Dock = System::Windows::Forms::DockStyle::Left;
			sideNavBarPanel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			sideNavBarPanel->Location = System::Drawing::Point(0, 0);
			sideNavBarPanel->MaximumSize = System::Drawing::Size(400, 0);
			sideNavBarPanel->MinimumSize = System::Drawing::Size(400, 0);
			sideNavBarPanel->Name = L"sideNavBarPanel";
			sideNavBarPanel->Size = System::Drawing::Size(400, 829);
			sideNavBarPanel->TabIndex = 0;
			// 
			// suppliersBtn
			// 
			suppliersBtn->BackColor = System::Drawing::Color::DodgerBlue;
			suppliersBtn->FlatAppearance->BorderSize = 0;
			suppliersBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			suppliersBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			suppliersBtn->Location = System::Drawing::Point(-1, 384);
			suppliersBtn->Name = L"suppliersBtn";
			suppliersBtn->Size = System::Drawing::Size(402, 60);
			suppliersBtn->TabIndex = 5;
			suppliersBtn->Text = L"Suppliers";
			suppliersBtn->UseVisualStyleBackColor = false;
			suppliersBtn->Click += gcnew System::EventHandler(this, &DashboardForm::suppliersBtn_Click);
			// 
			// customersBtn
			// 
			customersBtn->BackColor = System::Drawing::Color::DodgerBlue;
			customersBtn->FlatAppearance->BorderSize = 0;
			customersBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			customersBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			customersBtn->Location = System::Drawing::Point(-2, 293);
			customersBtn->Name = L"customersBtn";
			customersBtn->Size = System::Drawing::Size(402, 60);
			customersBtn->TabIndex = 4;
			customersBtn->Text = L"Customers";
			customersBtn->UseVisualStyleBackColor = false;
			customersBtn->Click += gcnew System::EventHandler(this, &DashboardForm::customersBtn_Click);
			// 
			// inventoryBtn
			// 
			inventoryBtn->BackColor = System::Drawing::Color::DodgerBlue;
			inventoryBtn->FlatAppearance->BorderSize = 0;
			inventoryBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			inventoryBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			inventoryBtn->Location = System::Drawing::Point(0, 127);
			inventoryBtn->Name = L"inventoryBtn";
			inventoryBtn->Size = System::Drawing::Size(402, 60);
			inventoryBtn->TabIndex = 3;
			inventoryBtn->Text = L"Inventory";
			inventoryBtn->UseVisualStyleBackColor = false;
			inventoryBtn->Click += gcnew System::EventHandler(this, &DashboardForm::inventoryBtn_Click);
			// 
			// categoriesBtn
			// 
			categoriesBtn->BackColor = System::Drawing::Color::DodgerBlue;
			categoriesBtn->FlatAppearance->BorderSize = 0;
			categoriesBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			categoriesBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			categoriesBtn->Location = System::Drawing::Point(-2, 209);
			categoriesBtn->Name = L"categoriesBtn";
			categoriesBtn->Size = System::Drawing::Size(402, 60);
			categoriesBtn->TabIndex = 2;
			categoriesBtn->Text = L"Categories";
			categoriesBtn->UseVisualStyleBackColor = false;
			categoriesBtn->Click += gcnew System::EventHandler(this, &DashboardForm::categoriesBtn_Click);
			// 
			// usersBtn
			// 
			usersBtn->BackColor = System::Drawing::Color::DodgerBlue;
			usersBtn->FlatAppearance->BorderSize = 0;
			usersBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			usersBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			usersBtn->Location = System::Drawing::Point(-1, 566);
			usersBtn->Name = L"usersBtn";
			usersBtn->Size = System::Drawing::Size(402, 60);
			usersBtn->TabIndex = 1;
			usersBtn->Text = L"Users";
			usersBtn->UseVisualStyleBackColor = false;
			usersBtn->Click += gcnew System::EventHandler(this, &DashboardForm::usersBtn_Click);
			// 
			// homeBtn
			// 
			homeBtn->BackColor = System::Drawing::Color::DodgerBlue;
			homeBtn->FlatAppearance->BorderSize = 0;
			homeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			homeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			homeBtn->Location = System::Drawing::Point(0, 46);
			homeBtn->Name = L"homeBtn";
			homeBtn->Size = System::Drawing::Size(402, 60);
			homeBtn->TabIndex = 0;
			homeBtn->Text = L"Home";
			homeBtn->UseVisualStyleBackColor = false;
			homeBtn->Click += gcnew System::EventHandler(this, &DashboardForm::homeBtn_Click);
			// 
			// _panelContainer
			// 
			this->_panelContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->_panelContainer->Location = System::Drawing::Point(400, 0);
			this->_panelContainer->Name = L"_panelContainer";
			this->_panelContainer->Size = System::Drawing::Size(1010, 829);
			this->_panelContainer->TabIndex = 1;
			// 
			// importsBtn
			// 
			importsBtn->BackColor = System::Drawing::Color::DodgerBlue;
			importsBtn->FlatAppearance->BorderSize = 0;
			importsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			importsBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			importsBtn->Location = System::Drawing::Point(-1, 474);
			importsBtn->Name = L"importsBtn";
			importsBtn->Size = System::Drawing::Size(402, 60);
			importsBtn->TabIndex = 6;
			importsBtn->Text = L"Imports";
			importsBtn->UseVisualStyleBackColor = false;
			importsBtn->Click += gcnew System::EventHandler(this, &DashboardForm::importsBtn_Click);
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1410, 829);
			this->Controls->Add(this->_panelContainer);
			this->Controls->Add(sideNavBarPanel);
			this->Name = L"DashboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashboardForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			sideNavBarPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		System::Void homeBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void inventoryBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void categoriesBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void customersBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void suppliersBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void usersBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void importsBtn_Click(System::Object^ sender, System::EventArgs^ e);

	public:
		static void Start();
		static void SwitchView(UserControl^ newView);
	};
}

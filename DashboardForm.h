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
			System::Windows::Forms::Button^ importsBtn;
			System::Windows::Forms::Button^ suppliersBtn;
			System::Windows::Forms::Button^ customersBtn;
			System::Windows::Forms::Button^ inventoryBtn;
			System::Windows::Forms::Button^ categoriesBtn;
			System::Windows::Forms::Button^ usersBtn;
			System::Windows::Forms::Button^ homeBtn;
			System::Windows::Forms::FlowLayoutPanel^ sideMenuPanel;
			this->_panelContainer = (gcnew System::Windows::Forms::Panel());
			importsBtn = (gcnew System::Windows::Forms::Button());
			suppliersBtn = (gcnew System::Windows::Forms::Button());
			customersBtn = (gcnew System::Windows::Forms::Button());
			inventoryBtn = (gcnew System::Windows::Forms::Button());
			categoriesBtn = (gcnew System::Windows::Forms::Button());
			usersBtn = (gcnew System::Windows::Forms::Button());
			homeBtn = (gcnew System::Windows::Forms::Button());
			sideMenuPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			sideMenuPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// importsBtn
			// 
			importsBtn->BackColor = System::Drawing::Color::DodgerBlue;
			importsBtn->FlatAppearance->BorderSize = 0;
			importsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			importsBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			importsBtn->ForeColor = System::Drawing::SystemColors::Control;
			importsBtn->Location = System::Drawing::Point(3, 521);
			importsBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 15);
			importsBtn->Name = L"importsBtn";
			importsBtn->Size = System::Drawing::Size(402, 60);
			importsBtn->TabIndex = 6;
			importsBtn->Text = L"Imports";
			importsBtn->UseVisualStyleBackColor = false;
			importsBtn->Click += gcnew System::EventHandler(this, &DashboardForm::importsBtn_Click);
			// 
			// suppliersBtn
			// 
			suppliersBtn->BackColor = System::Drawing::Color::DodgerBlue;
			suppliersBtn->FlatAppearance->BorderSize = 0;
			suppliersBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			suppliersBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			suppliersBtn->ForeColor = System::Drawing::SystemColors::Control;
			suppliersBtn->Location = System::Drawing::Point(3, 287);
			suppliersBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 15);
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
			customersBtn->ForeColor = System::Drawing::SystemColors::Control;
			customersBtn->Location = System::Drawing::Point(3, 443);
			customersBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 15);
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
			inventoryBtn->ForeColor = System::Drawing::SystemColors::Control;
			inventoryBtn->Location = System::Drawing::Point(3, 131);
			inventoryBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 15);
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
			categoriesBtn->ForeColor = System::Drawing::SystemColors::Control;
			categoriesBtn->Location = System::Drawing::Point(3, 365);
			categoriesBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 15);
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
			usersBtn->ForeColor = System::Drawing::SystemColors::Control;
			usersBtn->Location = System::Drawing::Point(3, 209);
			usersBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 15);
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
			homeBtn->ForeColor = System::Drawing::SystemColors::Control;
			homeBtn->Location = System::Drawing::Point(3, 53);
			homeBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 15);
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
			this->_panelContainer->Location = System::Drawing::Point(394, 0);
			this->_panelContainer->Margin = System::Windows::Forms::Padding(20, 3, 3, 3);
			this->_panelContainer->Name = L"_panelContainer";
			this->_panelContainer->Size = System::Drawing::Size(1016, 829);
			this->_panelContainer->TabIndex = 1;
			// 
			// sideMenuPanel
			// 
			sideMenuPanel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			sideMenuPanel->Controls->Add(homeBtn);
			sideMenuPanel->Controls->Add(inventoryBtn);
			sideMenuPanel->Controls->Add(usersBtn);
			sideMenuPanel->Controls->Add(suppliersBtn);
			sideMenuPanel->Controls->Add(categoriesBtn);
			sideMenuPanel->Controls->Add(customersBtn);
			sideMenuPanel->Controls->Add(importsBtn);
			sideMenuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			sideMenuPanel->Location = System::Drawing::Point(0, 0);
			sideMenuPanel->Margin = System::Windows::Forms::Padding(3, 3, 20, 3);
			sideMenuPanel->Name = L"sideMenuPanel";
			sideMenuPanel->Padding = System::Windows::Forms::Padding(0, 50, 0, 50);
			sideMenuPanel->Size = System::Drawing::Size(394, 829);
			sideMenuPanel->TabIndex = 7;
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1410, 829);
			this->Controls->Add(this->_panelContainer);
			this->Controls->Add(sideMenuPanel);
			this->Name = L"DashboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashboardForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			sideMenuPanel->ResumeLayout(false);
			this->ResumeLayout(false);

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

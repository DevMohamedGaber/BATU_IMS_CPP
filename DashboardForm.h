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
		static DashboardForm^ Instance;
		UserControl^ _currentView;
		System::Windows::Forms::Panel^ _panelContainer;
		System::Windows::Forms::Label^ currentUserNameLabel;

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
			System::Windows::Forms::Button^ exportsBtn;
			System::Windows::Forms::Panel^ topBarPanel;
			System::Windows::Forms::Button^ logoutBtn;
			System::Windows::Forms::Label^ label1;
			this->currentUserNameLabel = (gcnew System::Windows::Forms::Label());
			this->_panelContainer = (gcnew System::Windows::Forms::Panel());
			importsBtn = (gcnew System::Windows::Forms::Button());
			suppliersBtn = (gcnew System::Windows::Forms::Button());
			customersBtn = (gcnew System::Windows::Forms::Button());
			inventoryBtn = (gcnew System::Windows::Forms::Button());
			categoriesBtn = (gcnew System::Windows::Forms::Button());
			usersBtn = (gcnew System::Windows::Forms::Button());
			homeBtn = (gcnew System::Windows::Forms::Button());
			sideMenuPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			exportsBtn = (gcnew System::Windows::Forms::Button());
			topBarPanel = (gcnew System::Windows::Forms::Panel());
			logoutBtn = (gcnew System::Windows::Forms::Button());
			label1 = (gcnew System::Windows::Forms::Label());
			sideMenuPanel->SuspendLayout();
			topBarPanel->SuspendLayout();
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
			importsBtn->Location = System::Drawing::Point(3, 601);
			importsBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 25);
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
			suppliersBtn->Location = System::Drawing::Point(3, 337);
			suppliersBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 25);
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
			customersBtn->Location = System::Drawing::Point(3, 513);
			customersBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 25);
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
			inventoryBtn->Location = System::Drawing::Point(3, 161);
			inventoryBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 25);
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
			categoriesBtn->Location = System::Drawing::Point(3, 425);
			categoriesBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 25);
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
			usersBtn->Location = System::Drawing::Point(3, 249);
			usersBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 25);
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
			homeBtn->Location = System::Drawing::Point(3, 73);
			homeBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 25);
			homeBtn->Name = L"homeBtn";
			homeBtn->Size = System::Drawing::Size(402, 60);
			homeBtn->TabIndex = 0;
			homeBtn->Text = L"Home";
			homeBtn->UseVisualStyleBackColor = false;
			homeBtn->Click += gcnew System::EventHandler(this, &DashboardForm::homeBtn_Click);
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
			sideMenuPanel->Controls->Add(exportsBtn);
			sideMenuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			sideMenuPanel->Location = System::Drawing::Point(0, 0);
			sideMenuPanel->Margin = System::Windows::Forms::Padding(3, 3, 20, 3);
			sideMenuPanel->Name = L"sideMenuPanel";
			sideMenuPanel->Padding = System::Windows::Forms::Padding(0, 70, 0, 50);
			sideMenuPanel->Size = System::Drawing::Size(394, 785);
			sideMenuPanel->TabIndex = 7;
			// 
			// exportsBtn
			// 
			exportsBtn->BackColor = System::Drawing::Color::DodgerBlue;
			exportsBtn->FlatAppearance->BorderSize = 0;
			exportsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			exportsBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			exportsBtn->ForeColor = System::Drawing::SystemColors::Control;
			exportsBtn->Location = System::Drawing::Point(3, 689);
			exportsBtn->Margin = System::Windows::Forms::Padding(3, 3, 3, 25);
			exportsBtn->Name = L"exportsBtn";
			exportsBtn->Size = System::Drawing::Size(402, 60);
			exportsBtn->TabIndex = 7;
			exportsBtn->Text = L"Exports";
			exportsBtn->UseVisualStyleBackColor = false;
			exportsBtn->Click += gcnew System::EventHandler(this, &DashboardForm::exportsBtn_Click);
			// 
			// topBarPanel
			// 
			topBarPanel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			topBarPanel->Controls->Add(logoutBtn);
			topBarPanel->Controls->Add(this->currentUserNameLabel);
			topBarPanel->Controls->Add(label1);
			topBarPanel->Dock = System::Windows::Forms::DockStyle::Top;
			topBarPanel->Location = System::Drawing::Point(394, 0);
			topBarPanel->Name = L"topBarPanel";
			topBarPanel->Padding = System::Windows::Forms::Padding(0, 0, 20, 0);
			topBarPanel->Size = System::Drawing::Size(784, 64);
			topBarPanel->TabIndex = 0;
			// 
			// logoutBtn
			// 
			logoutBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			logoutBtn->BackColor = System::Drawing::Color::Firebrick;
			logoutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			logoutBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			logoutBtn->ForeColor = System::Drawing::SystemColors::Control;
			logoutBtn->Location = System::Drawing::Point(636, 14);
			logoutBtn->Name = L"logoutBtn";
			logoutBtn->Size = System::Drawing::Size(116, 40);
			logoutBtn->TabIndex = 2;
			logoutBtn->Text = L"Logout";
			logoutBtn->UseVisualStyleBackColor = false;
			logoutBtn->Click += gcnew System::EventHandler(this, &DashboardForm::logoutBtn_Click);
			// 
			// currentUserNameLabel
			// 
			this->currentUserNameLabel->AutoSize = true;
			this->currentUserNameLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->currentUserNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentUserNameLabel->ForeColor = System::Drawing::Color::Chocolate;
			this->currentUserNameLabel->Location = System::Drawing::Point(133, 21);
			this->currentUserNameLabel->Name = L"currentUserNameLabel";
			this->currentUserNameLabel->Size = System::Drawing::Size(114, 24);
			this->currentUserNameLabel->TabIndex = 1;
			this->currentUserNameLabel->Text = L"User Name";
			this->currentUserNameLabel->Click += gcnew System::EventHandler(this, &DashboardForm::currentUserNameLabel_Click);
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(23, 21);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(104, 24);
			label1->TabIndex = 0;
			label1->Text = L"Welcome,";
			// 
			// _panelContainer
			// 
			this->_panelContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->_panelContainer->Location = System::Drawing::Point(394, 64);
			this->_panelContainer->Margin = System::Windows::Forms::Padding(20, 3, 3, 3);
			this->_panelContainer->Name = L"_panelContainer";
			this->_panelContainer->Size = System::Drawing::Size(784, 721);
			this->_panelContainer->TabIndex = 1;
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1178, 785);
			this->Controls->Add(this->_panelContainer);
			this->Controls->Add(topBarPanel);
			this->Controls->Add(sideMenuPanel);
			this->Name = L"DashboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashboardForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			sideMenuPanel->ResumeLayout(false);
			topBarPanel->ResumeLayout(false);
			topBarPanel->PerformLayout();
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
		System::Void logoutBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void currentUserNameLabel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void exportsBtn_Click(System::Object^ sender, System::EventArgs^ e);

	public:
		static void Start();
		static void SwitchView(UserControl^ newView);
	};
}

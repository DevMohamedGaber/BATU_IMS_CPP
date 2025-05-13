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
		System::Windows::Forms::UserControl^ _currentView;
		System::Windows::Forms::Label^ roleLabel;
		System::Windows::Forms::Label^ usernameLabel;
		System::Windows::Forms::Panel^ _panelContainer;
		System::Windows::Forms::Panel^ homeBtn;
		System::Windows::Forms::Panel^ inventoryBtn;
		System::Windows::Forms::Panel^ categoriesBtn;
		System::Windows::Forms::Panel^ suppliersBtn;
		System::Windows::Forms::Panel^ customersBtn;
		System::Windows::Forms::Panel^ importsBtn;
		System::Windows::Forms::Panel^ exportsBtn;
		System::Windows::Forms::Panel^ usersBtn;
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
			System::Windows::Forms::FlowLayoutPanel^ sideMenuPanel;
			System::Windows::Forms::Panel^ panel2;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardForm::typeid));
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Panel^ panel6;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Panel^ panel7;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Panel^ panel8;
			System::Windows::Forms::Label^ label5;
			System::Windows::Forms::Panel^ panel9;
			System::Windows::Forms::Label^ label6;
			System::Windows::Forms::Panel^ panel10;
			System::Windows::Forms::Label^ label7;
			System::Windows::Forms::Panel^ panel11;
			System::Windows::Forms::Label^ label8;
			System::Windows::Forms::Panel^ panel12;
			System::Windows::Forms::Label^ label9;
			System::Windows::Forms::Panel^ panel13;
			System::Windows::Forms::Panel^ topBarPanel;
			System::Windows::Forms::Panel^ panel4;
			System::Windows::Forms::Button^ logoutBtn;
			System::Windows::Forms::Panel^ panel1;
			System::Windows::Forms::Panel^ panel3;
			this->roleLabel = (gcnew System::Windows::Forms::Label());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->homeBtn = (gcnew System::Windows::Forms::Panel());
			this->inventoryBtn = (gcnew System::Windows::Forms::Panel());
			this->categoriesBtn = (gcnew System::Windows::Forms::Panel());
			this->suppliersBtn = (gcnew System::Windows::Forms::Panel());
			this->customersBtn = (gcnew System::Windows::Forms::Panel());
			this->importsBtn = (gcnew System::Windows::Forms::Panel());
			this->exportsBtn = (gcnew System::Windows::Forms::Panel());
			this->usersBtn = (gcnew System::Windows::Forms::Panel());
			this->_panelContainer = (gcnew System::Windows::Forms::Panel());
			sideMenuPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			panel2 = (gcnew System::Windows::Forms::Panel());
			label2 = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			panel6 = (gcnew System::Windows::Forms::Panel());
			label3 = (gcnew System::Windows::Forms::Label());
			panel7 = (gcnew System::Windows::Forms::Panel());
			label4 = (gcnew System::Windows::Forms::Label());
			panel8 = (gcnew System::Windows::Forms::Panel());
			label5 = (gcnew System::Windows::Forms::Label());
			panel9 = (gcnew System::Windows::Forms::Panel());
			label6 = (gcnew System::Windows::Forms::Label());
			panel10 = (gcnew System::Windows::Forms::Panel());
			label7 = (gcnew System::Windows::Forms::Label());
			panel11 = (gcnew System::Windows::Forms::Panel());
			label8 = (gcnew System::Windows::Forms::Label());
			panel12 = (gcnew System::Windows::Forms::Panel());
			label9 = (gcnew System::Windows::Forms::Label());
			panel13 = (gcnew System::Windows::Forms::Panel());
			topBarPanel = (gcnew System::Windows::Forms::Panel());
			panel4 = (gcnew System::Windows::Forms::Panel());
			logoutBtn = (gcnew System::Windows::Forms::Button());
			panel1 = (gcnew System::Windows::Forms::Panel());
			panel3 = (gcnew System::Windows::Forms::Panel());
			sideMenuPanel->SuspendLayout();
			panel2->SuspendLayout();
			this->homeBtn->SuspendLayout();
			this->inventoryBtn->SuspendLayout();
			this->categoriesBtn->SuspendLayout();
			this->suppliersBtn->SuspendLayout();
			this->customersBtn->SuspendLayout();
			this->importsBtn->SuspendLayout();
			this->exportsBtn->SuspendLayout();
			this->usersBtn->SuspendLayout();
			topBarPanel->SuspendLayout();
			panel1->SuspendLayout();
			panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// sideMenuPanel
			// 
			sideMenuPanel->BackColor = System::Drawing::Color::White;
			sideMenuPanel->Controls->Add(panel2);
			sideMenuPanel->Controls->Add(label2);
			sideMenuPanel->Controls->Add(this->homeBtn);
			sideMenuPanel->Controls->Add(this->inventoryBtn);
			sideMenuPanel->Controls->Add(this->categoriesBtn);
			sideMenuPanel->Controls->Add(this->suppliersBtn);
			sideMenuPanel->Controls->Add(this->customersBtn);
			sideMenuPanel->Controls->Add(this->importsBtn);
			sideMenuPanel->Controls->Add(this->exportsBtn);
			sideMenuPanel->Controls->Add(this->usersBtn);
			sideMenuPanel->Dock = System::Windows::Forms::DockStyle::Left;
			sideMenuPanel->Location = System::Drawing::Point(0, 0);
			sideMenuPanel->Margin = System::Windows::Forms::Padding(3, 3, 20, 3);
			sideMenuPanel->Name = L"sideMenuPanel";
			sideMenuPanel->Size = System::Drawing::Size(336, 721);
			sideMenuPanel->TabIndex = 2;
			// 
			// panel2
			// 
			panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel2->Controls->Add(this->roleLabel);
			panel2->Controls->Add(this->usernameLabel);
			panel2->Location = System::Drawing::Point(3, 3);
			panel2->Margin = System::Windows::Forms::Padding(3, 3, 3, 30);
			panel2->Name = L"panel2";
			panel2->Size = System::Drawing::Size(330, 160);
			panel2->TabIndex = 8;
			// 
			// roleLabel
			// 
			this->roleLabel->AutoSize = true;
			this->roleLabel->BackColor = System::Drawing::Color::Transparent;
			this->roleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roleLabel->ForeColor = System::Drawing::Color::White;
			this->roleLabel->Location = System::Drawing::Point(23, 117);
			this->roleLabel->Name = L"roleLabel";
			this->roleLabel->Size = System::Drawing::Size(43, 20);
			this->roleLabel->TabIndex = 1;
			this->roleLabel->Text = L"Role";
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->BackColor = System::Drawing::Color::Transparent;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->ForeColor = System::Drawing::Color::White;
			this->usernameLabel->Location = System::Drawing::Point(23, 92);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(119, 25);
			this->usernameLabel->TabIndex = 0;
			this->usernameLabel->Text = L"User Name";
			this->usernameLabel->Click += gcnew System::EventHandler(this, &DashboardForm::usernameLabel_Click);
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			label2->Location = System::Drawing::Point(3, 193);
			label2->Margin = System::Windows::Forms::Padding(3, 0, 3, 15);
			label2->Name = L"label2";
			label2->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			label2->Size = System::Drawing::Size(127, 20);
			label2->TabIndex = 9;
			label2->Text = L"Navigation";
			// 
			// homeBtn
			// 
			this->homeBtn->Controls->Add(label1);
			this->homeBtn->Controls->Add(panel6);
			this->homeBtn->Location = System::Drawing::Point(3, 231);
			this->homeBtn->Name = L"homeBtn";
			this->homeBtn->Size = System::Drawing::Size(333, 40);
			this->homeBtn->TabIndex = 10;
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			label1->Location = System::Drawing::Point(84, 12);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(58, 20);
			label1->TabIndex = 1;
			label1->Text = L"Home";
			// 
			// panel6
			// 
			panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel6->Location = System::Drawing::Point(40, 10);
			panel6->Name = L"panel6";
			panel6->Size = System::Drawing::Size(26, 26);
			panel6->TabIndex = 0;
			// 
			// inventoryBtn
			// 
			this->inventoryBtn->Controls->Add(label3);
			this->inventoryBtn->Controls->Add(panel7);
			this->inventoryBtn->Location = System::Drawing::Point(3, 277);
			this->inventoryBtn->Name = L"inventoryBtn";
			this->inventoryBtn->Size = System::Drawing::Size(333, 40);
			this->inventoryBtn->TabIndex = 11;
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			label3->Location = System::Drawing::Point(84, 12);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(85, 20);
			label3->TabIndex = 1;
			label3->Text = L"Inventory";
			// 
			// panel7
			// 
			panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel7->Location = System::Drawing::Point(40, 10);
			panel7->Name = L"panel7";
			panel7->Size = System::Drawing::Size(26, 26);
			panel7->TabIndex = 0;
			// 
			// categoriesBtn
			// 
			this->categoriesBtn->Controls->Add(label4);
			this->categoriesBtn->Controls->Add(panel8);
			this->categoriesBtn->Location = System::Drawing::Point(3, 323);
			this->categoriesBtn->Name = L"categoriesBtn";
			this->categoriesBtn->Size = System::Drawing::Size(333, 40);
			this->categoriesBtn->TabIndex = 12;
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			label4->Location = System::Drawing::Point(84, 12);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(100, 20);
			label4->TabIndex = 1;
			label4->Text = L"Categories";
			// 
			// panel8
			// 
			panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel8->Location = System::Drawing::Point(40, 10);
			panel8->Name = L"panel8";
			panel8->Size = System::Drawing::Size(26, 26);
			panel8->TabIndex = 0;
			// 
			// suppliersBtn
			// 
			this->suppliersBtn->Controls->Add(label5);
			this->suppliersBtn->Controls->Add(panel9);
			this->suppliersBtn->Location = System::Drawing::Point(3, 369);
			this->suppliersBtn->Name = L"suppliersBtn";
			this->suppliersBtn->Size = System::Drawing::Size(333, 40);
			this->suppliersBtn->TabIndex = 13;
			// 
			// label5
			// 
			label5->AutoSize = true;
			label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			label5->Location = System::Drawing::Point(84, 12);
			label5->Name = L"label5";
			label5->Size = System::Drawing::Size(88, 20);
			label5->TabIndex = 1;
			label5->Text = L"Suppliers";
			// 
			// panel9
			// 
			panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel9->Location = System::Drawing::Point(40, 10);
			panel9->Name = L"panel9";
			panel9->Size = System::Drawing::Size(26, 26);
			panel9->TabIndex = 0;
			// 
			// customersBtn
			// 
			this->customersBtn->Controls->Add(label6);
			this->customersBtn->Controls->Add(panel10);
			this->customersBtn->Location = System::Drawing::Point(3, 415);
			this->customersBtn->Name = L"customersBtn";
			this->customersBtn->Size = System::Drawing::Size(333, 40);
			this->customersBtn->TabIndex = 14;
			// 
			// label6
			// 
			label6->AutoSize = true;
			label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			label6->Location = System::Drawing::Point(84, 12);
			label6->Name = L"label6";
			label6->Size = System::Drawing::Size(100, 20);
			label6->TabIndex = 1;
			label6->Text = L"Customers";
			// 
			// panel10
			// 
			panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel10->Location = System::Drawing::Point(40, 10);
			panel10->Name = L"panel10";
			panel10->Size = System::Drawing::Size(26, 26);
			panel10->TabIndex = 0;
			// 
			// importsBtn
			// 
			this->importsBtn->Controls->Add(label7);
			this->importsBtn->Controls->Add(panel11);
			this->importsBtn->Location = System::Drawing::Point(3, 461);
			this->importsBtn->Name = L"importsBtn";
			this->importsBtn->Size = System::Drawing::Size(333, 40);
			this->importsBtn->TabIndex = 15;
			// 
			// label7
			// 
			label7->AutoSize = true;
			label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			label7->Location = System::Drawing::Point(84, 12);
			label7->Name = L"label7";
			label7->Size = System::Drawing::Size(72, 20);
			label7->TabIndex = 1;
			label7->Text = L"Imports";
			// 
			// panel11
			// 
			panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			panel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel11->Location = System::Drawing::Point(40, 10);
			panel11->Name = L"panel11";
			panel11->Size = System::Drawing::Size(26, 26);
			panel11->TabIndex = 0;
			// 
			// exportsBtn
			// 
			this->exportsBtn->Controls->Add(label8);
			this->exportsBtn->Controls->Add(panel12);
			this->exportsBtn->Location = System::Drawing::Point(3, 507);
			this->exportsBtn->Name = L"exportsBtn";
			this->exportsBtn->Size = System::Drawing::Size(333, 40);
			this->exportsBtn->TabIndex = 16;
			// 
			// label8
			// 
			label8->AutoSize = true;
			label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			label8->Location = System::Drawing::Point(84, 12);
			label8->Name = L"label8";
			label8->Size = System::Drawing::Size(73, 20);
			label8->TabIndex = 1;
			label8->Text = L"Exports";
			// 
			// panel12
			// 
			panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel12->Location = System::Drawing::Point(40, 10);
			panel12->Name = L"panel12";
			panel12->Size = System::Drawing::Size(26, 26);
			panel12->TabIndex = 0;
			// 
			// usersBtn
			// 
			this->usersBtn->Controls->Add(label9);
			this->usersBtn->Controls->Add(panel13);
			this->usersBtn->Location = System::Drawing::Point(3, 553);
			this->usersBtn->Name = L"usersBtn";
			this->usersBtn->Size = System::Drawing::Size(333, 40);
			this->usersBtn->TabIndex = 17;
			// 
			// label9
			// 
			label9->AutoSize = true;
			label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			label9->Location = System::Drawing::Point(84, 12);
			label9->Name = L"label9";
			label9->Size = System::Drawing::Size(59, 20);
			label9->TabIndex = 1;
			label9->Text = L"Users";
			// 
			// panel13
			// 
			panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			panel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel13->Location = System::Drawing::Point(40, 10);
			panel13->Name = L"panel13";
			panel13->Size = System::Drawing::Size(26, 26);
			panel13->TabIndex = 0;
			// 
			// topBarPanel
			// 
			topBarPanel->BackColor = System::Drawing::Color::Transparent;
			topBarPanel->Controls->Add(panel4);
			topBarPanel->Controls->Add(logoutBtn);
			topBarPanel->Dock = System::Windows::Forms::DockStyle::Top;
			topBarPanel->Location = System::Drawing::Point(336, 0);
			topBarPanel->Name = L"topBarPanel";
			topBarPanel->Size = System::Drawing::Size(724, 64);
			topBarPanel->TabIndex = 1;
			// 
			// panel4
			// 
			panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel4->Location = System::Drawing::Point(30, 12);
			panel4->Name = L"panel4";
			panel4->Size = System::Drawing::Size(156, 38);
			panel4->TabIndex = 3;
			// 
			// logoutBtn
			// 
			logoutBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			logoutBtn->BackColor = System::Drawing::Color::Transparent;
			logoutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			logoutBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			logoutBtn->ForeColor = System::Drawing::SystemColors::Control;
			logoutBtn->Location = System::Drawing::Point(594, 12);
			logoutBtn->Name = L"logoutBtn";
			logoutBtn->Size = System::Drawing::Size(100, 41);
			logoutBtn->TabIndex = 2;
			logoutBtn->Text = L"Logout";
			logoutBtn->UseVisualStyleBackColor = false;
			logoutBtn->Click += gcnew System::EventHandler(this, &DashboardForm::logoutBtn_Click);
			// 
			// panel1
			// 
			panel1->BackColor = System::Drawing::Color::Transparent;
			panel1->Controls->Add(this->_panelContainer);
			panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			panel1->Location = System::Drawing::Point(336, 64);
			panel1->Name = L"panel1";
			panel1->Padding = System::Windows::Forms::Padding(30, 10, 30, 30);
			panel1->Size = System::Drawing::Size(724, 657);
			panel1->TabIndex = 3;
			// 
			// _panelContainer
			// 
			this->_panelContainer->BackColor = System::Drawing::Color::White;
			this->_panelContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->_panelContainer->Location = System::Drawing::Point(30, 10);
			this->_panelContainer->Margin = System::Windows::Forms::Padding(20, 3, 3, 3);
			this->_panelContainer->Name = L"_panelContainer";
			this->_panelContainer->Size = System::Drawing::Size(664, 617);
			this->_panelContainer->TabIndex = 1;
			// 
			// panel3
			// 
			panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel3->Controls->Add(panel1);
			panel3->Controls->Add(topBarPanel);
			panel3->Controls->Add(sideMenuPanel);
			panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			panel3->Location = System::Drawing::Point(0, 0);
			panel3->Name = L"panel3";
			panel3->Size = System::Drawing::Size(1060, 721);
			panel3->TabIndex = 10;
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1060, 721);
			this->Controls->Add(panel3);
			this->Name = L"DashboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashboardForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &DashboardForm::DashboardForm_Load);
			sideMenuPanel->ResumeLayout(false);
			sideMenuPanel->PerformLayout();
			panel2->ResumeLayout(false);
			panel2->PerformLayout();
			this->homeBtn->ResumeLayout(false);
			this->homeBtn->PerformLayout();
			this->inventoryBtn->ResumeLayout(false);
			this->inventoryBtn->PerformLayout();
			this->categoriesBtn->ResumeLayout(false);
			this->categoriesBtn->PerformLayout();
			this->suppliersBtn->ResumeLayout(false);
			this->suppliersBtn->PerformLayout();
			this->customersBtn->ResumeLayout(false);
			this->customersBtn->PerformLayout();
			this->importsBtn->ResumeLayout(false);
			this->importsBtn->PerformLayout();
			this->exportsBtn->ResumeLayout(false);
			this->exportsBtn->PerformLayout();
			this->usersBtn->ResumeLayout(false);
			this->usersBtn->PerformLayout();
			topBarPanel->ResumeLayout(false);
			panel1->ResumeLayout(false);
			panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion
		System::Void DashboardForm_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void logoutBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void homeBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void inventoryBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void categoriesBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void suppliersBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void customersBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void importsBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void exportsBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void usersBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void usernameLabel_Click(System::Object^ sender, System::EventArgs^ e);

	public:
		static void Start();
		static void SwitchView(UserControl^ newView);
	};
}

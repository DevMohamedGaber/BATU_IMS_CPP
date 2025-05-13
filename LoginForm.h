#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Views {
	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 


	private: System::Windows::Forms::Label^ errorBox;
	private: System::Windows::Forms::TextBox^ usernameInput;
	private: System::Windows::Forms::TextBox^ passwordInput;



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
			System::Windows::Forms::Button^ LoginBtn;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			System::Windows::Forms::Button^ ExitBtn;
			System::Windows::Forms::Panel^ panel2;
			System::Windows::Forms::Panel^ panel7;
			System::Windows::Forms::Panel^ panel8;
			System::Windows::Forms::Panel^ panel5;
			System::Windows::Forms::Panel^ panel6;
			System::Windows::Forms::Panel^ panel4;
			System::Windows::Forms::Panel^ panel1;
			System::Windows::Forms::Panel^ panel3;
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->usernameInput = (gcnew System::Windows::Forms::TextBox());
			this->errorBox = (gcnew System::Windows::Forms::Label());
			LoginBtn = (gcnew System::Windows::Forms::Button());
			ExitBtn = (gcnew System::Windows::Forms::Button());
			panel2 = (gcnew System::Windows::Forms::Panel());
			panel7 = (gcnew System::Windows::Forms::Panel());
			panel8 = (gcnew System::Windows::Forms::Panel());
			panel5 = (gcnew System::Windows::Forms::Panel());
			panel6 = (gcnew System::Windows::Forms::Panel());
			panel4 = (gcnew System::Windows::Forms::Panel());
			panel1 = (gcnew System::Windows::Forms::Panel());
			panel3 = (gcnew System::Windows::Forms::Panel());
			panel2->SuspendLayout();
			panel7->SuspendLayout();
			panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// LoginBtn
			// 
			LoginBtn->BackColor = System::Drawing::Color::White;
			LoginBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoginBtn.BackgroundImage")));
			LoginBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			LoginBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			LoginBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			LoginBtn->FlatAppearance->BorderSize = 0;
			LoginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			LoginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			LoginBtn->Location = System::Drawing::Point(180, 426);
			LoginBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			LoginBtn->Name = L"LoginBtn";
			LoginBtn->Size = System::Drawing::Size(140, 40);
			LoginBtn->TabIndex = 6;
			LoginBtn->UseVisualStyleBackColor = false;
			LoginBtn->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// ExitBtn
			// 
			ExitBtn->BackColor = System::Drawing::Color::Transparent;
			ExitBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitBtn.BackgroundImage")));
			ExitBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			ExitBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			ExitBtn->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			ExitBtn->FlatAppearance->BorderSize = 0;
			ExitBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			ExitBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			ExitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			ExitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			ExitBtn->ForeColor = System::Drawing::Color::White;
			ExitBtn->Location = System::Drawing::Point(338, 426);
			ExitBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			ExitBtn->Name = L"ExitBtn";
			ExitBtn->Size = System::Drawing::Size(140, 40);
			ExitBtn->TabIndex = 12;
			ExitBtn->UseVisualStyleBackColor = false;
			ExitBtn->Click += gcnew System::EventHandler(this, &LoginForm::ExitBtn_Click);
			// 
			// panel2
			// 
			panel2->BackColor = System::Drawing::Color::White;
			panel2->Controls->Add(panel7);
			panel2->Controls->Add(panel5);
			panel2->Controls->Add(panel4);
			panel2->Controls->Add(panel1);
			panel2->Controls->Add(this->errorBox);
			panel2->Controls->Add(ExitBtn);
			panel2->Controls->Add(LoginBtn);
			panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			panel2->Location = System::Drawing::Point(400, 0);
			panel2->Name = L"panel2";
			panel2->Size = System::Drawing::Size(624, 600);
			panel2->TabIndex = 14;
			// 
			// panel7
			// 
			panel7->Controls->Add(panel8);
			panel7->Controls->Add(this->passwordInput);
			panel7->Location = System::Drawing::Point(99, 339);
			panel7->Name = L"panel7";
			panel7->Size = System::Drawing::Size(438, 50);
			panel7->TabIndex = 16;
			// 
			// panel8
			// 
			panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel8->Location = System::Drawing::Point(12, 17);
			panel8->Name = L"panel8";
			panel8->Size = System::Drawing::Size(20, 20);
			panel8->TabIndex = 0;
			// 
			// passwordInput
			// 
			this->passwordInput->BackColor = System::Drawing::Color::Snow;
			this->passwordInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->passwordInput->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->passwordInput->Location = System::Drawing::Point(54, 19);
			this->passwordInput->Margin = System::Windows::Forms::Padding(0);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->PasswordChar = '*';
			this->passwordInput->Size = System::Drawing::Size(366, 19);
			this->passwordInput->TabIndex = 2;
			this->passwordInput->Text = L"admin";
			// 
			// panel5
			// 
			panel5->Controls->Add(panel6);
			panel5->Controls->Add(this->usernameInput);
			panel5->Location = System::Drawing::Point(99, 283);
			panel5->Name = L"panel5";
			panel5->Size = System::Drawing::Size(438, 50);
			panel5->TabIndex = 15;
			// 
			// panel6
			// 
			panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel6->Location = System::Drawing::Point(12, 19);
			panel6->Name = L"panel6";
			panel6->Size = System::Drawing::Size(20, 20);
			panel6->TabIndex = 0;
			// 
			// usernameInput
			// 
			this->usernameInput->BackColor = System::Drawing::Color::Snow;
			this->usernameInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->usernameInput->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->usernameInput->Location = System::Drawing::Point(54, 19);
			this->usernameInput->Margin = System::Windows::Forms::Padding(0);
			this->usernameInput->Name = L"usernameInput";
			this->usernameInput->Size = System::Drawing::Size(366, 19);
			this->usernameInput->TabIndex = 2;
			this->usernameInput->Text = L"admin";
			// 
			// panel4
			// 
			panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel4->Location = System::Drawing::Point(521, 561);
			panel4->Name = L"panel4";
			panel4->Size = System::Drawing::Size(91, 27);
			panel4->TabIndex = 0;
			// 
			// panel1
			// 
			panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel1->Location = System::Drawing::Point(178, 95);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(300, 150);
			panel1->TabIndex = 14;
			// 
			// errorBox
			// 
			this->errorBox->AutoSize = true;
			this->errorBox->BackColor = System::Drawing::Color::Transparent;
			this->errorBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorBox->ForeColor = System::Drawing::Color::Maroon;
			this->errorBox->Location = System::Drawing::Point(122, 498);
			this->errorBox->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->errorBox->MaximumSize = System::Drawing::Size(688, 0);
			this->errorBox->Name = L"errorBox";
			this->errorBox->Size = System::Drawing::Size(0, 20);
			this->errorBox->TabIndex = 13;
			// 
			// panel3
			// 
			panel3->BackColor = System::Drawing::Color::Transparent;
			panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel3->Dock = System::Windows::Forms::DockStyle::Left;
			panel3->Location = System::Drawing::Point(0, 0);
			panel3->Name = L"panel3";
			panel3->Size = System::Drawing::Size(400, 600);
			panel3->TabIndex = 0;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1024, 600);
			this->Controls->Add(panel2);
			this->Controls->Add(panel3);
			this->Font = (gcnew System::Drawing::Font(L"Orbitron", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BATU - Inventory Management System";
			panel2->ResumeLayout(false);
			panel2->PerformLayout();
			panel7->ResumeLayout(false);
			panel7->PerformLayout();
			panel5->ResumeLayout(false);
			panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

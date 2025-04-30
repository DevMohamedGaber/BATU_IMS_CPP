#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Views {

	/// <summary>
	/// Summary for AddUserPage
	/// </summary>
	public ref class AddUserPage : public System::Windows::Forms::UserControl
	{
	public:
		AddUserPage(void)
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
		~AddUserPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ errorBox;

		System::Windows::Forms::TextBox^ firstNameInput;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ lastNameInput;
		System::Windows::Forms::TextBox^ emailInput;
		System::Windows::Forms::TextBox^ usernameInput;
		System::Windows::Forms::TextBox^ passwordInput;
		System::Windows::Forms::ComboBox^ roleInput;
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
			System::Windows::Forms::Label^ nameLabel;
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Label^ label5;
			System::Windows::Forms::Label^ label6;
			System::Windows::Forms::Button^ registerBtn;
			this->errorBox = (gcnew System::Windows::Forms::Label());
			this->firstNameInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lastNameInput = (gcnew System::Windows::Forms::TextBox());
			this->emailInput = (gcnew System::Windows::Forms::TextBox());
			this->usernameInput = (gcnew System::Windows::Forms::TextBox());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->roleInput = (gcnew System::Windows::Forms::ComboBox());
			nameLabel = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			label4 = (gcnew System::Windows::Forms::Label());
			label5 = (gcnew System::Windows::Forms::Label());
			label6 = (gcnew System::Windows::Forms::Label());
			registerBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			nameLabel->AutoSize = true;
			nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			nameLabel->Location = System::Drawing::Point(86, 161);
			nameLabel->Name = L"nameLabel";
			nameLabel->Size = System::Drawing::Size(141, 29);
			nameLabel->TabIndex = 6;
			nameLabel->Text = L"First Name";
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(86, 229);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(137, 29);
			label2->TabIndex = 10;
			label2->Text = L"Last Name";
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->Location = System::Drawing::Point(86, 299);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(79, 29);
			label3->TabIndex = 12;
			label3->Text = L"Email";
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->Location = System::Drawing::Point(86, 400);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(132, 29);
			label4->TabIndex = 14;
			label4->Text = L"Username";
			// 
			// label5
			// 
			label5->AutoSize = true;
			label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label5->Location = System::Drawing::Point(86, 461);
			label5->Name = L"label5";
			label5->Size = System::Drawing::Size(128, 29);
			label5->TabIndex = 16;
			label5->Text = L"Password";
			// 
			// label6
			// 
			label6->AutoSize = true;
			label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label6->Location = System::Drawing::Point(86, 528);
			label6->Name = L"label6";
			label6->Size = System::Drawing::Size(68, 29);
			label6->TabIndex = 18;
			label6->Text = L"Role";
			// 
			// registerBtn
			// 
			registerBtn->BackColor = System::Drawing::Color::Chocolate;
			registerBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			registerBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			registerBtn->Location = System::Drawing::Point(774, 632);
			registerBtn->Name = L"registerBtn";
			registerBtn->Size = System::Drawing::Size(165, 54);
			registerBtn->TabIndex = 8;
			registerBtn->Text = L"Register";
			registerBtn->UseVisualStyleBackColor = false;
			registerBtn->Click += gcnew System::EventHandler(this, &AddUserPage::registerBtn_Click);
			// 
			// errorBox
			// 
			this->errorBox->AutoSize = true;
			this->errorBox->BackColor = System::Drawing::Color::Transparent;
			this->errorBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorBox->ForeColor = System::Drawing::Color::Maroon;
			this->errorBox->Location = System::Drawing::Point(86, 632);
			this->errorBox->MaximumSize = System::Drawing::Size(400, 0);
			this->errorBox->Name = L"errorBox";
			this->errorBox->Size = System::Drawing::Size(0, 25);
			this->errorBox->TabIndex = 9;
			// 
			// firstNameInput
			// 
			this->firstNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstNameInput->Location = System::Drawing::Point(291, 158);
			this->firstNameInput->Name = L"firstNameInput";
			this->firstNameInput->Size = System::Drawing::Size(454, 34);
			this->firstNameInput->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(79, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(320, 39);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Register New User";
			// 
			// lastNameInput
			// 
			this->lastNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastNameInput->Location = System::Drawing::Point(291, 226);
			this->lastNameInput->Name = L"lastNameInput";
			this->lastNameInput->Size = System::Drawing::Size(454, 34);
			this->lastNameInput->TabIndex = 11;
			// 
			// emailInput
			// 
			this->emailInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailInput->Location = System::Drawing::Point(291, 296);
			this->emailInput->Name = L"emailInput";
			this->emailInput->Size = System::Drawing::Size(454, 34);
			this->emailInput->TabIndex = 13;
			// 
			// usernameInput
			// 
			this->usernameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameInput->Location = System::Drawing::Point(291, 397);
			this->usernameInput->Name = L"usernameInput";
			this->usernameInput->Size = System::Drawing::Size(454, 34);
			this->usernameInput->TabIndex = 15;
			// 
			// passwordInput
			// 
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordInput->Location = System::Drawing::Point(291, 458);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->PasswordChar = '*';
			this->passwordInput->Size = System::Drawing::Size(454, 34);
			this->passwordInput->TabIndex = 17;
			// 
			// roleInput
			// 
			this->roleInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roleInput->FormattingEnabled = true;
			this->roleInput->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Admin", L"Staff", L"Retailer" });
			this->roleInput->Location = System::Drawing::Point(291, 528);
			this->roleInput->Name = L"roleInput";
			this->roleInput->Size = System::Drawing::Size(454, 37);
			this->roleInput->TabIndex = 19;
			// 
			// AddUserPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->roleInput);
			this->Controls->Add(label6);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(label5);
			this->Controls->Add(this->usernameInput);
			this->Controls->Add(label4);
			this->Controls->Add(this->emailInput);
			this->Controls->Add(label3);
			this->Controls->Add(this->lastNameInput);
			this->Controls->Add(label2);
			this->Controls->Add(this->errorBox);
			this->Controls->Add(registerBtn);
			this->Controls->Add(this->firstNameInput);
			this->Controls->Add(nameLabel);
			this->Controls->Add(this->label1);
			this->Name = L"AddUserPage";
			this->Size = System::Drawing::Size(1041, 739);
			this->Load += gcnew System::EventHandler(this, &AddUserPage::AddUserPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void AddUserPage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void registerBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

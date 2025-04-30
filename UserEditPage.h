#pragma once
#include "User.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Models;

namespace Views {

	/// <summary>
	/// Summary for UserEditPage
	/// </summary>
	public ref class UserEditPage : public System::Windows::Forms::UserControl
	{
	public:
		UserEditPage(User^ user);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserEditPage()
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
		System::Windows::Forms::ComboBox^ roleInput;
		System::Windows::Forms::TextBox^ usernameInput;
		System::Windows::Forms::TextBox^ emailInput;
		System::Windows::Forms::TextBox^ lastNameInput;
		System::Windows::Forms::Label^ errorMsg;
		System::Windows::Forms::TextBox^ firstNameInput;
		System::Windows::Forms::Label^ idLabel;
		User^ user;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ label6;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Button^ saveBtn;
			System::Windows::Forms::Label^ nameLabel;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Button^ returnBtn;
			this->roleInput = (gcnew System::Windows::Forms::ComboBox());
			this->usernameInput = (gcnew System::Windows::Forms::TextBox());
			this->emailInput = (gcnew System::Windows::Forms::TextBox());
			this->lastNameInput = (gcnew System::Windows::Forms::TextBox());
			this->errorMsg = (gcnew System::Windows::Forms::Label());
			this->firstNameInput = (gcnew System::Windows::Forms::TextBox());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			label6 = (gcnew System::Windows::Forms::Label());
			label4 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			saveBtn = (gcnew System::Windows::Forms::Button());
			nameLabel = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			returnBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label6
			// 
			label6->AutoSize = true;
			label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label6->Location = System::Drawing::Point(72, 453);
			label6->Name = L"label6";
			label6->Size = System::Drawing::Size(68, 29);
			label6->TabIndex = 33;
			label6->Text = L"Role";
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->Location = System::Drawing::Point(72, 391);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(132, 29);
			label4->TabIndex = 29;
			label4->Text = L"Username";
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->Location = System::Drawing::Point(72, 290);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(79, 29);
			label3->TabIndex = 27;
			label3->Text = L"Email";
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(72, 220);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(137, 29);
			label2->TabIndex = 25;
			label2->Text = L"Last Name";
			// 
			// saveBtn
			// 
			saveBtn->BackColor = System::Drawing::Color::SteelBlue;
			saveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			saveBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			saveBtn->Location = System::Drawing::Point(724, 557);
			saveBtn->Name = L"saveBtn";
			saveBtn->Size = System::Drawing::Size(201, 54);
			saveBtn->TabIndex = 23;
			saveBtn->Text = L"Save Changes";
			saveBtn->UseVisualStyleBackColor = false;
			saveBtn->Click += gcnew System::EventHandler(this, &UserEditPage::saveBtn_Click);
			// 
			// nameLabel
			// 
			nameLabel->AutoSize = true;
			nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			nameLabel->Location = System::Drawing::Point(72, 152);
			nameLabel->Name = L"nameLabel";
			nameLabel->Size = System::Drawing::Size(141, 29);
			nameLabel->TabIndex = 21;
			nameLabel->Text = L"First Name";
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(65, 55);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(237, 39);
			label1->TabIndex = 20;
			label1->Text = L"Edit User Info";
			// 
			// returnBtn
			// 
			returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			returnBtn->BackColor = System::Drawing::Color::DarkRed;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::Color::Gainsboro;
			returnBtn->Location = System::Drawing::Point(737, 55);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(188, 50);
			returnBtn->TabIndex = 36;
			returnBtn->Text = L"Return Back";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &UserEditPage::returnBtn_Click);
			// 
			// roleInput
			// 
			this->roleInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roleInput->FormattingEnabled = true;
			this->roleInput->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Admin", L"Staff", L"Retailer" });
			this->roleInput->Location = System::Drawing::Point(277, 453);
			this->roleInput->Name = L"roleInput";
			this->roleInput->Size = System::Drawing::Size(454, 37);
			this->roleInput->TabIndex = 34;
			// 
			// usernameInput
			// 
			this->usernameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameInput->Location = System::Drawing::Point(277, 388);
			this->usernameInput->Name = L"usernameInput";
			this->usernameInput->Size = System::Drawing::Size(454, 34);
			this->usernameInput->TabIndex = 30;
			// 
			// emailInput
			// 
			this->emailInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailInput->Location = System::Drawing::Point(277, 287);
			this->emailInput->Name = L"emailInput";
			this->emailInput->Size = System::Drawing::Size(454, 34);
			this->emailInput->TabIndex = 28;
			// 
			// lastNameInput
			// 
			this->lastNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastNameInput->Location = System::Drawing::Point(277, 217);
			this->lastNameInput->Name = L"lastNameInput";
			this->lastNameInput->Size = System::Drawing::Size(454, 34);
			this->lastNameInput->TabIndex = 26;
			// 
			// errorMsg
			// 
			this->errorMsg->AutoSize = true;
			this->errorMsg->BackColor = System::Drawing::Color::Transparent;
			this->errorMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMsg->ForeColor = System::Drawing::Color::Maroon;
			this->errorMsg->Location = System::Drawing::Point(72, 557);
			this->errorMsg->MaximumSize = System::Drawing::Size(400, 0);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(0, 25);
			this->errorMsg->TabIndex = 24;
			// 
			// firstNameInput
			// 
			this->firstNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstNameInput->Location = System::Drawing::Point(277, 149);
			this->firstNameInput->Name = L"firstNameInput";
			this->firstNameInput->Size = System::Drawing::Size(454, 34);
			this->firstNameInput->TabIndex = 22;
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->idLabel->Location = System::Drawing::Point(325, 63);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(139, 29);
			this->idLabel->TabIndex = 35;
			this->idLabel->Text = L"ID: 9999999";
			// 
			// UserEditPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(returnBtn);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(this->roleInput);
			this->Controls->Add(label6);
			this->Controls->Add(this->usernameInput);
			this->Controls->Add(label4);
			this->Controls->Add(this->emailInput);
			this->Controls->Add(label3);
			this->Controls->Add(this->lastNameInput);
			this->Controls->Add(label2);
			this->Controls->Add(this->errorMsg);
			this->Controls->Add(saveBtn);
			this->Controls->Add(this->firstNameInput);
			this->Controls->Add(nameLabel);
			this->Controls->Add(label1);
			this->Name = L"UserEditPage";
			this->Size = System::Drawing::Size(984, 663);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

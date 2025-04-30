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
	/// Summary for UserViewPage
	/// </summary>
	public ref class UserViewPage : public System::Windows::Forms::UserControl
	{
	public:
		UserViewPage(int id);
		UserViewPage(User^ user);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserViewPage()
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
		System::Windows::Forms::Label^ idLabel;
		System::Windows::Forms::Label^ nameLabel;
		System::Windows::Forms::Label^ emailLabel;
		System::Windows::Forms::Label^ usernameLabel;
		System::Windows::Forms::Label^ roleLabel;
		User^ user;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Button^ deleteBtn;
			System::Windows::Forms::Button^ editBtn;
			System::Windows::Forms::Button^ returnBtn;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Label^ label4;
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->roleLabel = (gcnew System::Windows::Forms::Label());
			deleteBtn = (gcnew System::Windows::Forms::Button());
			editBtn = (gcnew System::Windows::Forms::Button());
			returnBtn = (gcnew System::Windows::Forms::Button());
			label1 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// deleteBtn
			// 
			deleteBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			deleteBtn->BackColor = System::Drawing::Color::Crimson;
			deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			deleteBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			deleteBtn->Location = System::Drawing::Point(796, 200);
			deleteBtn->Name = L"deleteBtn";
			deleteBtn->Size = System::Drawing::Size(174, 51);
			deleteBtn->TabIndex = 11;
			deleteBtn->Text = L"Delete";
			deleteBtn->UseVisualStyleBackColor = false;
			deleteBtn->Click += gcnew System::EventHandler(this, &UserViewPage::deleteBtn_Click);
			// 
			// editBtn
			// 
			editBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			editBtn->BackColor = System::Drawing::Color::ForestGreen;
			editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			editBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			editBtn->Location = System::Drawing::Point(796, 126);
			editBtn->Name = L"editBtn";
			editBtn->Size = System::Drawing::Size(174, 51);
			editBtn->TabIndex = 10;
			editBtn->Text = L"Edit";
			editBtn->UseVisualStyleBackColor = false;
			editBtn->Click += gcnew System::EventHandler(this, &UserViewPage::editBtn_Click);
			// 
			// returnBtn
			// 
			returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			returnBtn->BackColor = System::Drawing::Color::CornflowerBlue;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			returnBtn->Location = System::Drawing::Point(796, 55);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(174, 51);
			returnBtn->TabIndex = 9;
			returnBtn->Text = L"Return Back";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &UserViewPage::returnBtn_Click);
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(60, 161);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(86, 29);
			label1->TabIndex = 12;
			label1->Text = L"Email:";
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->Location = System::Drawing::Point(60, 210);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(139, 29);
			label3->TabIndex = 14;
			label3->Text = L"Username:";
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->Location = System::Drawing::Point(60, 262);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(75, 29);
			label4->TabIndex = 16;
			label4->Text = L"Role:";
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->idLabel->Location = System::Drawing::Point(62, 104);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(161, 29);
			this->idLabel->TabIndex = 8;
			this->idLabel->Text = L"Id: 99999999";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->Location = System::Drawing::Point(60, 55);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(198, 39);
			this->nameLabel->TabIndex = 7;
			this->nameLabel->Text = L"User Name";
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->Location = System::Drawing::Point(152, 161);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(262, 29);
			this->emailLabel->TabIndex = 13;
			this->emailLabel->Text = L"email@company.com";
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->Location = System::Drawing::Point(205, 210);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(197, 29);
			this->usernameLabel->TabIndex = 15;
			this->usernameLabel->Text = L"username value";
			// 
			// roleLabel
			// 
			this->roleLabel->AutoSize = true;
			this->roleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roleLabel->Location = System::Drawing::Point(141, 262);
			this->roleLabel->Name = L"roleLabel";
			this->roleLabel->Size = System::Drawing::Size(128, 29);
			this->roleLabel->TabIndex = 17;
			this->roleLabel->Text = L"role value";
			// 
			// UserViewPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->roleLabel);
			this->Controls->Add(label4);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(label3);
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(label1);
			this->Controls->Add(deleteBtn);
			this->Controls->Add(editBtn);
			this->Controls->Add(returnBtn);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(this->nameLabel);
			this->Name = L"UserViewPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1028, 812);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e);
		void SetData(User^ user);
	};
}

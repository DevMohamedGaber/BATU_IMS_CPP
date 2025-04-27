#pragma once
#include "Customer.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Models;

namespace Views {

	/// <summary>
	/// Summary for CustomerEditPage
	/// </summary>
	public ref class CustomerEditPage : public System::Windows::Forms::UserControl
	{
	public:
		CustomerEditPage(Customer^ customer);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomerEditPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ errorMsg;
		System::Windows::Forms::TextBox^ firstNameInput;
		System::Windows::Forms::TextBox^ lastNameInput;
		System::Windows::Forms::TextBox^ emailInput;
		Customer^ customer;
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
			System::Windows::Forms::Button^ confirmBtn;
			System::Windows::Forms::Label^ firstNameLabel;
			System::Windows::Forms::Button^ returnBtn;
			System::Windows::Forms::Label^ headerLabel;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label2;
			this->errorMsg = (gcnew System::Windows::Forms::Label());
			this->firstNameInput = (gcnew System::Windows::Forms::TextBox());
			this->lastNameInput = (gcnew System::Windows::Forms::TextBox());
			this->emailInput = (gcnew System::Windows::Forms::TextBox());
			confirmBtn = (gcnew System::Windows::Forms::Button());
			firstNameLabel = (gcnew System::Windows::Forms::Label());
			returnBtn = (gcnew System::Windows::Forms::Button());
			headerLabel = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// confirmBtn
			// 
			confirmBtn->BackColor = System::Drawing::Color::CornflowerBlue;
			confirmBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			confirmBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			confirmBtn->Location = System::Drawing::Point(592, 360);
			confirmBtn->Name = L"confirmBtn";
			confirmBtn->Size = System::Drawing::Size(155, 48);
			confirmBtn->TabIndex = 10;
			confirmBtn->Text = L"Confirm";
			confirmBtn->UseVisualStyleBackColor = false;
			confirmBtn->Click += gcnew System::EventHandler(this, &CustomerEditPage::confirmBtn_Click);
			// 
			// firstNameLabel
			// 
			firstNameLabel->AutoSize = true;
			firstNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			firstNameLabel->Location = System::Drawing::Point(107, 162);
			firstNameLabel->Name = L"firstNameLabel";
			firstNameLabel->Size = System::Drawing::Size(116, 25);
			firstNameLabel->TabIndex = 8;
			firstNameLabel->Text = L"First Name";
			// 
			// returnBtn
			// 
			returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			returnBtn->BackColor = System::Drawing::Color::DarkRed;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::Color::Gainsboro;
			returnBtn->Location = System::Drawing::Point(647, 75);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(188, 50);
			returnBtn->TabIndex = 7;
			returnBtn->Text = L"Return Back";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &CustomerEditPage::returnBtn_Click);
			// 
			// headerLabel
			// 
			headerLabel->AutoSize = true;
			headerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			headerLabel->Location = System::Drawing::Point(93, 75);
			headerLabel->Name = L"headerLabel";
			headerLabel->Size = System::Drawing::Size(245, 39);
			headerLabel->TabIndex = 6;
			headerLabel->Text = L"Edit Customer";
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(107, 229);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(115, 25);
			label1->TabIndex = 12;
			label1->Text = L"Last Name";
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(107, 294);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(65, 25);
			label2->TabIndex = 14;
			label2->Text = L"Email";
			// 
			// errorMsg
			// 
			this->errorMsg->AutoSize = true;
			this->errorMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMsg->ForeColor = System::Drawing::Color::Red;
			this->errorMsg->Location = System::Drawing::Point(106, 360);
			this->errorMsg->MaximumSize = System::Drawing::Size(400, 0);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(0, 25);
			this->errorMsg->TabIndex = 11;
			// 
			// firstNameInput
			// 
			this->firstNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstNameInput->Location = System::Drawing::Point(325, 156);
			this->firstNameInput->Name = L"firstNameInput";
			this->firstNameInput->Size = System::Drawing::Size(383, 34);
			this->firstNameInput->TabIndex = 9;
			// 
			// lastNameInput
			// 
			this->lastNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastNameInput->Location = System::Drawing::Point(325, 223);
			this->lastNameInput->Name = L"lastNameInput";
			this->lastNameInput->Size = System::Drawing::Size(383, 34);
			this->lastNameInput->TabIndex = 13;
			// 
			// emailInput
			// 
			this->emailInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailInput->Location = System::Drawing::Point(325, 288);
			this->emailInput->Name = L"emailInput";
			this->emailInput->Size = System::Drawing::Size(383, 34);
			this->emailInput->TabIndex = 15;
			// 
			// CustomerEditPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->emailInput);
			this->Controls->Add(label2);
			this->Controls->Add(this->lastNameInput);
			this->Controls->Add(label1);
			this->Controls->Add(this->errorMsg);
			this->Controls->Add(confirmBtn);
			this->Controls->Add(this->firstNameInput);
			this->Controls->Add(firstNameLabel);
			this->Controls->Add(returnBtn);
			this->Controls->Add(headerLabel);
			this->Name = L"CustomerEditPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(888, 525);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void confirmBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

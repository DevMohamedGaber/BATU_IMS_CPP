#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Views {

	/// <summary>
	/// Summary for AddCustomerPage
	/// </summary>
	public ref class AddCustomerPage : public System::Windows::Forms::UserControl
	{
	public:
		AddCustomerPage(void)
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
		~AddCustomerPage()
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
			System::Windows::Forms::Button^ addBtn;
			System::Windows::Forms::Label^ label1;
			this->errorMsg = (gcnew System::Windows::Forms::Label());
			this->firstNameInput = (gcnew System::Windows::Forms::TextBox());
			this->lastNameInput = (gcnew System::Windows::Forms::TextBox());
			this->emailInput = (gcnew System::Windows::Forms::TextBox());
			nameLabel = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			addBtn = (gcnew System::Windows::Forms::Button());
			label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			nameLabel->AutoSize = true;
			nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			nameLabel->Location = System::Drawing::Point(70, 153);
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
			label2->Location = System::Drawing::Point(70, 224);
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
			label3->Location = System::Drawing::Point(70, 290);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(79, 29);
			label3->TabIndex = 12;
			label3->Text = L"Email";
			// 
			// addBtn
			// 
			addBtn->BackColor = System::Drawing::Color::DarkGreen;
			addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			addBtn->Location = System::Drawing::Point(679, 387);
			addBtn->Name = L"addBtn";
			addBtn->Size = System::Drawing::Size(142, 54);
			addBtn->TabIndex = 8;
			addBtn->Text = L"Add";
			addBtn->UseVisualStyleBackColor = false;
			addBtn->Click += gcnew System::EventHandler(this, &AddCustomerPage::addBtn_Click);
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(63, 56);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(328, 39);
			label1->TabIndex = 5;
			label1->Text = L"Add New Customer";
			// 
			// errorMsg
			// 
			this->errorMsg->AutoSize = true;
			this->errorMsg->BackColor = System::Drawing::Color::Transparent;
			this->errorMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMsg->ForeColor = System::Drawing::Color::Maroon;
			this->errorMsg->Location = System::Drawing::Point(74, 387);
			this->errorMsg->MaximumSize = System::Drawing::Size(400, 0);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(0, 25);
			this->errorMsg->TabIndex = 9;
			// 
			// firstNameInput
			// 
			this->firstNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstNameInput->Location = System::Drawing::Point(276, 148);
			this->firstNameInput->Name = L"firstNameInput";
			this->firstNameInput->Size = System::Drawing::Size(454, 34);
			this->firstNameInput->TabIndex = 7;
			// 
			// lastNameInput
			// 
			this->lastNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastNameInput->Location = System::Drawing::Point(276, 219);
			this->lastNameInput->Name = L"lastNameInput";
			this->lastNameInput->Size = System::Drawing::Size(454, 34);
			this->lastNameInput->TabIndex = 11;
			// 
			// emailInput
			// 
			this->emailInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailInput->Location = System::Drawing::Point(276, 285);
			this->emailInput->Name = L"emailInput";
			this->emailInput->Size = System::Drawing::Size(454, 34);
			this->emailInput->TabIndex = 13;
			// 
			// AddCustomerPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->emailInput);
			this->Controls->Add(label3);
			this->Controls->Add(this->lastNameInput);
			this->Controls->Add(label2);
			this->Controls->Add(this->errorMsg);
			this->Controls->Add(addBtn);
			this->Controls->Add(this->firstNameInput);
			this->Controls->Add(nameLabel);
			this->Controls->Add(label1);
			this->Name = L"AddCustomerPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1130, 790);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

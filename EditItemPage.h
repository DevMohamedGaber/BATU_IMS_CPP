#pragma once
#include "Item.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Models;

namespace Views {

	/// <summary>
	/// Summary for EditItemPage
	/// </summary>
	public ref class EditItemPage : public System::Windows::Forms::UserControl
	{
	public:
		EditItemPage(Item^ item);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditItemPage()
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
		System::Windows::Forms::TextBox^ nameInput;
		System::Windows::Forms::TextBox^ priceInput;
		System::Windows::Forms::ComboBox^ categoryInput;
		System::Windows::Forms::Button^ saveBtn;
		System::Windows::Forms::Button^ returnBtn;
		System::Windows::Forms::Label^ errorMsg;
		Item^ item;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Label^ label2;
			this->returnBtn = (gcnew System::Windows::Forms::Button());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->priceInput = (gcnew System::Windows::Forms::TextBox());
			this->categoryInput = (gcnew System::Windows::Forms::ComboBox());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->errorMsg = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			label4 = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(51, 48);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(160, 39);
			label1->TabIndex = 0;
			label1->Text = L"Edit Item";
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->Location = System::Drawing::Point(77, 191);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(61, 25);
			label3->TabIndex = 5;
			label3->Text = L"Price";
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->Location = System::Drawing::Point(77, 255);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(100, 25);
			label4->TabIndex = 7;
			label4->Text = L"Category";
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(77, 132);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(68, 25);
			label2->TabIndex = 3;
			label2->Text = L"Name";
			// 
			// returnBtn
			// 
			this->returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->returnBtn->BackColor = System::Drawing::Color::DarkRed;
			this->returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->returnBtn->Location = System::Drawing::Point(891, 48);
			this->returnBtn->Name = L"returnBtn";
			this->returnBtn->Size = System::Drawing::Size(179, 46);
			this->returnBtn->TabIndex = 2;
			this->returnBtn->Text = L"Return Back";
			this->returnBtn->UseVisualStyleBackColor = false;
			this->returnBtn->Click += gcnew System::EventHandler(this, &EditItemPage::returnBtn_Click);
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->idLabel->Location = System::Drawing::Point(226, 59);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(118, 25);
			this->idLabel->TabIndex = 1;
			this->idLabel->Text = L"ID: 999999";
			// 
			// nameInput
			// 
			this->nameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameInput->Location = System::Drawing::Point(249, 126);
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(326, 34);
			this->nameInput->TabIndex = 4;
			// 
			// priceInput
			// 
			this->priceInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->priceInput->Location = System::Drawing::Point(249, 185);
			this->priceInput->Name = L"priceInput";
			this->priceInput->Size = System::Drawing::Size(326, 34);
			this->priceInput->TabIndex = 6;
			// 
			// categoryInput
			// 
			this->categoryInput->DisplayMember = L"Name";
			this->categoryInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->categoryInput->FormattingEnabled = true;
			this->categoryInput->Location = System::Drawing::Point(249, 249);
			this->categoryInput->Name = L"categoryInput";
			this->categoryInput->Size = System::Drawing::Size(326, 37);
			this->categoryInput->TabIndex = 8;
			this->categoryInput->ValueMember = L"Id";
			// 
			// saveBtn
			// 
			this->saveBtn->BackColor = System::Drawing::Color::Chocolate;
			this->saveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveBtn->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->saveBtn->Location = System::Drawing::Point(588, 324);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(178, 53);
			this->saveBtn->TabIndex = 9;
			this->saveBtn->Text = L"Save Changes";
			this->saveBtn->UseVisualStyleBackColor = false;
			this->saveBtn->Click += gcnew System::EventHandler(this, &EditItemPage::saveBtn_Click);
			// 
			// errorMsg
			// 
			this->errorMsg->AutoSize = true;
			this->errorMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMsg->ForeColor = System::Drawing::Color::Red;
			this->errorMsg->Location = System::Drawing::Point(82, 324);
			this->errorMsg->MaximumSize = System::Drawing::Size(450, 0);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(0, 25);
			this->errorMsg->TabIndex = 10;
			// 
			// EditItemPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->errorMsg);
			this->Controls->Add(this->saveBtn);
			this->Controls->Add(this->categoryInput);
			this->Controls->Add(label4);
			this->Controls->Add(this->priceInput);
			this->Controls->Add(label3);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(label2);
			this->Controls->Add(this->returnBtn);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(label1);
			this->Name = L"EditItemPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1129, 804);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

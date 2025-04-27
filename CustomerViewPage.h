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
	/// Summary for CustomerViewPage
	/// </summary>
	public ref class CustomerViewPage : public System::Windows::Forms::UserControl
	{
	public:
		CustomerViewPage(int id);
		CustomerViewPage(Customer^ customer);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomerViewPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ noItemsLabel;
		System::Windows::Forms::Label^ idLabel;
		System::Windows::Forms::Label^ nameLabel;
		System::Windows::Forms::Label^ emailLabel;
		Customer^ customer;
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
			System::Windows::Forms::Label^ itemsLabel;
			System::Windows::Forms::Button^ deleteBtn;
			System::Windows::Forms::Button^ editBtn;
			System::Windows::Forms::Button^ returnBtn;
			System::Windows::Forms::Label^ label1;
			this->noItemsLabel = (gcnew System::Windows::Forms::Label());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			itemsLabel = (gcnew System::Windows::Forms::Label());
			deleteBtn = (gcnew System::Windows::Forms::Button());
			editBtn = (gcnew System::Windows::Forms::Button());
			returnBtn = (gcnew System::Windows::Forms::Button());
			label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// itemsLabel
			// 
			itemsLabel->AutoSize = true;
			itemsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			itemsLabel->Location = System::Drawing::Point(63, 246);
			itemsLabel->Name = L"itemsLabel";
			itemsLabel->Size = System::Drawing::Size(416, 29);
			itemsLabel->TabIndex = 12;
			itemsLabel->Text = L"Exports belonging to this customer";
			// 
			// deleteBtn
			// 
			deleteBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			deleteBtn->BackColor = System::Drawing::Color::Crimson;
			deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			deleteBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			deleteBtn->Location = System::Drawing::Point(966, 196);
			deleteBtn->Name = L"deleteBtn";
			deleteBtn->Size = System::Drawing::Size(174, 51);
			deleteBtn->TabIndex = 11;
			deleteBtn->Text = L"Delete";
			deleteBtn->UseVisualStyleBackColor = false;
			deleteBtn->Click += gcnew System::EventHandler(this, &CustomerViewPage::deleteBtn_Click);
			// 
			// editBtn
			// 
			editBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			editBtn->BackColor = System::Drawing::Color::ForestGreen;
			editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			editBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			editBtn->Location = System::Drawing::Point(966, 122);
			editBtn->Name = L"editBtn";
			editBtn->Size = System::Drawing::Size(174, 51);
			editBtn->TabIndex = 10;
			editBtn->Text = L"Edit";
			editBtn->UseVisualStyleBackColor = false;
			editBtn->Click += gcnew System::EventHandler(this, &CustomerViewPage::editBtn_Click);
			// 
			// returnBtn
			// 
			returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			returnBtn->BackColor = System::Drawing::Color::CornflowerBlue;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			returnBtn->Location = System::Drawing::Point(966, 51);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(174, 51);
			returnBtn->TabIndex = 9;
			returnBtn->Text = L"Return Back";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &CustomerViewPage::returnBtn_Click);
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(65, 144);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(86, 29);
			label1->TabIndex = 14;
			label1->Text = L"Email:";
			// 
			// noItemsLabel
			// 
			this->noItemsLabel->AutoSize = true;
			this->noItemsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noItemsLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->noItemsLabel->Location = System::Drawing::Point(88, 311);
			this->noItemsLabel->Name = L"noItemsLabel";
			this->noItemsLabel->Size = System::Drawing::Size(164, 25);
			this->noItemsLabel->TabIndex = 13;
			this->noItemsLabel->Text = L"No Items Found";
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->idLabel->Location = System::Drawing::Point(65, 99);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(111, 29);
			this->idLabel->TabIndex = 8;
			this->idLabel->Text = L"Id: value";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->Location = System::Drawing::Point(63, 50);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(347, 39);
			this->nameLabel->TabIndex = 7;
			this->nameLabel->Text = L"Customer Full Name";
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->Location = System::Drawing::Point(157, 144);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(152, 29);
			this->emailLabel->TabIndex = 15;
			this->emailLabel->Text = L"Email Value";
			// 
			// CustomerViewPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(label1);
			this->Controls->Add(this->noItemsLabel);
			this->Controls->Add(itemsLabel);
			this->Controls->Add(deleteBtn);
			this->Controls->Add(editBtn);
			this->Controls->Add(returnBtn);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(this->nameLabel);
			this->Name = L"CustomerViewPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1194, 803);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e);
		void SetCustomer(Customer^ customer);
	};
}

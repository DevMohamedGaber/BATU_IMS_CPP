#pragma once
#include "Supplier.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Models;

namespace Views {

	/// <summary>
	/// Summary for SupplierEditPage
	/// </summary>
	public ref class SupplierEditPage : public System::Windows::Forms::UserControl
	{
	public:
		SupplierEditPage(Supplier^ supplier);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SupplierEditPage()
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
		System::Windows::Forms::Label^ errorMsg;
		System::Windows::Forms::TextBox^ nameInput;
		System::Windows::Forms::DateTimePicker^ contractDateInput;

		Supplier^ supplier;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Button^ confirmBtn;
			System::Windows::Forms::Label^ firstNameLabel;
			System::Windows::Forms::Button^ returnBtn;
			System::Windows::Forms::Label^ headerLabel;
			this->errorMsg = (gcnew System::Windows::Forms::Label());
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->contractDateInput = (gcnew System::Windows::Forms::DateTimePicker());
			label1 = (gcnew System::Windows::Forms::Label());
			confirmBtn = (gcnew System::Windows::Forms::Button());
			firstNameLabel = (gcnew System::Windows::Forms::Label());
			returnBtn = (gcnew System::Windows::Forms::Button());
			headerLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(80, 233);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(145, 25);
			label1->TabIndex = 22;
			label1->Text = L"Contract Date";
			// 
			// confirmBtn
			// 
			confirmBtn->BackColor = System::Drawing::Color::CornflowerBlue;
			confirmBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			confirmBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			confirmBtn->Location = System::Drawing::Point(571, 316);
			confirmBtn->Name = L"confirmBtn";
			confirmBtn->Size = System::Drawing::Size(155, 48);
			confirmBtn->TabIndex = 20;
			confirmBtn->Text = L"Confirm";
			confirmBtn->UseVisualStyleBackColor = false;
			confirmBtn->Click += gcnew System::EventHandler(this, &SupplierEditPage::confirmBtn_Click);
			// 
			// firstNameLabel
			// 
			firstNameLabel->AutoSize = true;
			firstNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			firstNameLabel->Location = System::Drawing::Point(80, 166);
			firstNameLabel->Name = L"firstNameLabel";
			firstNameLabel->Size = System::Drawing::Size(68, 25);
			firstNameLabel->TabIndex = 18;
			firstNameLabel->Text = L"Name";
			// 
			// returnBtn
			// 
			returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			returnBtn->BackColor = System::Drawing::Color::DarkRed;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::Color::Gainsboro;
			returnBtn->Location = System::Drawing::Point(717, 79);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(188, 50);
			returnBtn->TabIndex = 17;
			returnBtn->Text = L"Return Back";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &SupplierEditPage::returnBtn_Click);
			// 
			// headerLabel
			// 
			headerLabel->AutoSize = true;
			headerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			headerLabel->Location = System::Drawing::Point(66, 79);
			headerLabel->Name = L"headerLabel";
			headerLabel->Size = System::Drawing::Size(224, 39);
			headerLabel->TabIndex = 16;
			headerLabel->Text = L"Edit Supplier";
			// 
			// errorMsg
			// 
			this->errorMsg->AutoSize = true;
			this->errorMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMsg->ForeColor = System::Drawing::Color::Red;
			this->errorMsg->Location = System::Drawing::Point(85, 316);
			this->errorMsg->MaximumSize = System::Drawing::Size(400, 0);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(0, 25);
			this->errorMsg->TabIndex = 21;
			// 
			// nameInput
			// 
			this->nameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameInput->Location = System::Drawing::Point(298, 160);
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(383, 34);
			this->nameInput->TabIndex = 19;
			// 
			// contractDateInput
			// 
			this->contractDateInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contractDateInput->Location = System::Drawing::Point(298, 225);
			this->contractDateInput->Name = L"contractDateInput";
			this->contractDateInput->Size = System::Drawing::Size(383, 34);
			this->contractDateInput->TabIndex = 23;
			// 
			// SupplierEditPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->contractDateInput);
			this->Controls->Add(label1);
			this->Controls->Add(this->errorMsg);
			this->Controls->Add(confirmBtn);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(firstNameLabel);
			this->Controls->Add(returnBtn);
			this->Controls->Add(headerLabel);
			this->Name = L"SupplierEditPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(978, 452);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void confirmBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

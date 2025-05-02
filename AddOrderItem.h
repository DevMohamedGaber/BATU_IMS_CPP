#pragma once
#include "OrderItem.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Views {

	/// <summary>
	/// Summary for AddOrderItem
	/// </summary>
	public ref class AddOrderItem : public System::Windows::Forms::UserControl
	{
	public:
		AddOrderItem(void)
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
		~AddOrderItem()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		System::Windows::Forms::Button^ deleteBtn;
		Core::OrderItem^ GetItem();

	private: 
		System::Windows::Forms::ComboBox^ itemInput;
		System::Windows::Forms::TextBox^ amountInput;
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
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label2;
			this->itemInput = (gcnew System::Windows::Forms::ComboBox());
			this->amountInput = (gcnew System::Windows::Forms::TextBox());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			label1 = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(23, 21);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(53, 25);
			label1->TabIndex = 0;
			label1->Text = L"Item";
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(480, 21);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(86, 25);
			label2->TabIndex = 2;
			label2->Text = L"Amount";
			// 
			// itemInput
			// 
			this->itemInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemInput->FormattingEnabled = true;
			this->itemInput->Location = System::Drawing::Point(93, 18);
			this->itemInput->Name = L"itemInput";
			this->itemInput->Size = System::Drawing::Size(333, 33);
			this->itemInput->TabIndex = 1;
			// 
			// amountInput
			// 
			this->amountInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amountInput->Location = System::Drawing::Point(596, 21);
			this->amountInput->Name = L"amountInput";
			this->amountInput->Size = System::Drawing::Size(187, 30);
			this->amountInput->TabIndex = 3;
			// 
			// deleteBtn
			// 
			this->deleteBtn->BackColor = System::Drawing::Color::DarkRed;
			this->deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->deleteBtn->Location = System::Drawing::Point(828, 18);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(104, 37);
			this->deleteBtn->TabIndex = 4;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->UseVisualStyleBackColor = false;
			// 
			// AddOrderItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->amountInput);
			this->Controls->Add(label2);
			this->Controls->Add(this->itemInput);
			this->Controls->Add(label1);
			this->Name = L"AddOrderItem";
			this->Size = System::Drawing::Size(957, 68);
			this->Load += gcnew System::EventHandler(this, &AddOrderItem::AddOrderItem_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		System::Void AddOrderItem_Load(System::Object^ sender, System::EventArgs^ e);
		Void itemInput_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		Void amountInput_LostFocus(System::Object^ sender, System::EventArgs^ e);
	};
}

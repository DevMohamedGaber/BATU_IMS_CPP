#pragma once
#include "OrderItem.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Core;

namespace Views {

	/// <summary>
	/// Summary for ViewOrderItem
	/// </summary>
	public ref class ViewOrderItem : public System::Windows::Forms::UserControl
	{
	public:
		ViewOrderItem(OrderItem^ item);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewOrderItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ itemLabel;
		System::Windows::Forms::Label^ amountLabel;
		OrderItem^ Item;
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
			System::Windows::Forms::Label^ label3;
			this->itemLabel = (gcnew System::Windows::Forms::Label());
			this->amountLabel = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::SystemColors::GrayText;
			label1->Location = System::Drawing::Point(27, 23);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(60, 25);
			label1->TabIndex = 0;
			label1->Text = L"Item: ";
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->ForeColor = System::Drawing::SystemColors::GrayText;
			label3->Location = System::Drawing::Point(481, 23);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(91, 25);
			label3->TabIndex = 2;
			label3->Text = L"Amount: ";
			// 
			// itemLabel
			// 
			this->itemLabel->AutoSize = true;
			this->itemLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->itemLabel->Location = System::Drawing::Point(93, 23);
			this->itemLabel->Name = L"itemLabel";
			this->itemLabel->Size = System::Drawing::Size(167, 25);
			this->itemLabel->TabIndex = 1;
			this->itemLabel->Text = L"Item Name Here";
			this->itemLabel->Click += gcnew System::EventHandler(this, &ViewOrderItem::itemLabel_Click);
			// 
			// amountLabel
			// 
			this->amountLabel->AutoSize = true;
			this->amountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amountLabel->Location = System::Drawing::Point(578, 23);
			this->amountLabel->Name = L"amountLabel";
			this->amountLabel->Size = System::Drawing::Size(89, 25);
			this->amountLabel->TabIndex = 3;
			this->amountLabel->Text = L"9999999";
			// 
			// ViewOrderItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->amountLabel);
			this->Controls->Add(label3);
			this->Controls->Add(this->itemLabel);
			this->Controls->Add(label1);
			this->Name = L"ViewOrderItem";
			this->Size = System::Drawing::Size(892, 73);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void itemLabel_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

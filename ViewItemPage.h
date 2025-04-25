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
	/// Summary for ViewItemPage
	/// </summary>
	public ref class ViewItemPage : public System::Windows::Forms::UserControl
	{
	public:
		ViewItemPage(int Id);
		ViewItemPage(Item^ Item);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewItemPage()
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
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Label^ nameLabel;
		System::Windows::Forms::Label^ idLabel;
		System::Windows::Forms::Button^ editBtn;
		System::Windows::Forms::Button^ deleteBtn;
		System::Windows::Forms::Label^ categoryLabel;
		System::Windows::Forms::Label^ priceLabel;
		System::Windows::Forms::Label^ stockLabel;
		Item^ item;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Button^ returnBtn;
			System::Windows::Forms::Label^ catLabel;
			System::Windows::Forms::Label^ pricelbl;
			System::Windows::Forms::Label^ stocklbl;
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->categoryLabel = (gcnew System::Windows::Forms::Label());
			this->priceLabel = (gcnew System::Windows::Forms::Label());
			this->stockLabel = (gcnew System::Windows::Forms::Label());
			returnBtn = (gcnew System::Windows::Forms::Button());
			catLabel = (gcnew System::Windows::Forms::Label());
			pricelbl = (gcnew System::Windows::Forms::Label());
			stocklbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// returnBtn
			// 
			returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			returnBtn->BackColor = System::Drawing::Color::Indigo;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			returnBtn->Location = System::Drawing::Point(916, 48);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(158, 46);
			returnBtn->TabIndex = 2;
			returnBtn->Text = L"Return Back";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &ViewItemPage::returnBtn_Click);
			// 
			// catLabel
			// 
			catLabel->AutoSize = true;
			catLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			catLabel->Location = System::Drawing::Point(67, 154);
			catLabel->Name = L"catLabel";
			catLabel->Size = System::Drawing::Size(90, 20);
			catLabel->TabIndex = 5;
			catLabel->Text = L"Category:";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->Location = System::Drawing::Point(60, 55);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(192, 39);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"Item Name";
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idLabel->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->idLabel->Location = System::Drawing::Point(62, 104);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(136, 29);
			this->idLabel->TabIndex = 1;
			this->idLabel->Text = L"ID: 999999";
			// 
			// editBtn
			// 
			this->editBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->editBtn->BackColor = System::Drawing::Color::RoyalBlue;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->editBtn->Location = System::Drawing::Point(916, 104);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(158, 46);
			this->editBtn->TabIndex = 3;
			this->editBtn->Text = L"Edit";
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->Click += gcnew System::EventHandler(this, &ViewItemPage::editBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->deleteBtn->BackColor = System::Drawing::Color::Firebrick;
			this->deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->deleteBtn->Location = System::Drawing::Point(916, 165);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(158, 46);
			this->deleteBtn->TabIndex = 4;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &ViewItemPage::deleteBtn_Click);
			// 
			// categoryLabel
			// 
			this->categoryLabel->AutoSize = true;
			this->categoryLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->categoryLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->categoryLabel->ForeColor = System::Drawing::Color::MediumBlue;
			this->categoryLabel->Location = System::Drawing::Point(163, 152);
			this->categoryLabel->Name = L"categoryLabel";
			this->categoryLabel->Size = System::Drawing::Size(183, 24);
			this->categoryLabel->TabIndex = 6;
			this->categoryLabel->Text = L"Category Name Link";
			this->categoryLabel->Click += gcnew System::EventHandler(this, &ViewItemPage::categoryLabel_Click);
			// 
			// priceLabel
			// 
			this->priceLabel->AutoSize = true;
			this->priceLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->priceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->priceLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->priceLabel->Location = System::Drawing::Point(163, 187);
			this->priceLabel->Name = L"priceLabel";
			this->priceLabel->Size = System::Drawing::Size(105, 24);
			this->priceLabel->TabIndex = 8;
			this->priceLabel->Text = L"Price Value";
			// 
			// pricelbl
			// 
			pricelbl->AutoSize = true;
			pricelbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			pricelbl->Location = System::Drawing::Point(67, 189);
			pricelbl->Name = L"pricelbl";
			pricelbl->Size = System::Drawing::Size(59, 20);
			pricelbl->TabIndex = 7;
			pricelbl->Text = L"Price:";
			// 
			// stockLabel
			// 
			this->stockLabel->AutoSize = true;
			this->stockLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->stockLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->stockLabel->Location = System::Drawing::Point(163, 222);
			this->stockLabel->Name = L"stockLabel";
			this->stockLabel->Size = System::Drawing::Size(110, 24);
			this->stockLabel->TabIndex = 10;
			this->stockLabel->Text = L"Stock Value";
			// 
			// stocklbl
			// 
			stocklbl->AutoSize = true;
			stocklbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			stocklbl->Location = System::Drawing::Point(67, 224);
			stocklbl->Name = L"stocklbl";
			stocklbl->Size = System::Drawing::Size(62, 20);
			stocklbl->TabIndex = 9;
			stocklbl->Text = L"Stock:";
			// 
			// ViewItemPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->stockLabel);
			this->Controls->Add(stocklbl);
			this->Controls->Add(this->priceLabel);
			this->Controls->Add(pricelbl);
			this->Controls->Add(this->categoryLabel);
			this->Controls->Add(catLabel);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->editBtn);
			this->Controls->Add(returnBtn);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(this->nameLabel);
			this->Name = L"ViewItemPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1132, 831);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void SetItemData(Item^ item);
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void categoryLabel_Click(System::Object^ sender, System::EventArgs^ e);
	};
#pragma endregion 
}

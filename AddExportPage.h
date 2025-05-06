#pragma once
#include "AddOrderItem.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Collections::Generic;

namespace Views {

	/// <summary>
	/// Summary for AddExportPage
	/// </summary>
	public ref class AddExportPage : public System::Windows::Forms::UserControl
	{
	public:
		AddExportPage(void)
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
		~AddExportPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ noItemsMsg;
		System::Windows::Forms::ComboBox^ customerInput;
		System::Windows::Forms::DateTimePicker^ dateInput;
		System::Windows::Forms::Label^ errorMsg;
		System::Windows::Forms::FlowLayoutPanel^ itemsPanel;
		List<AddOrderItem^>^ itemsList;
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
			System::Windows::Forms::Button^ addItemBtn;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Button^ addBtn;
			System::Windows::Forms::Panel^ panel1;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Label^ label2;
			this->customerInput = (gcnew System::Windows::Forms::ComboBox());
			this->dateInput = (gcnew System::Windows::Forms::DateTimePicker());
			this->noItemsMsg = (gcnew System::Windows::Forms::Label());
			this->errorMsg = (gcnew System::Windows::Forms::Label());
			this->itemsPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			addItemBtn = (gcnew System::Windows::Forms::Button());
			label3 = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			addBtn = (gcnew System::Windows::Forms::Button());
			panel1 = (gcnew System::Windows::Forms::Panel());
			label4 = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			panel1->SuspendLayout();
			this->itemsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// addItemBtn
			// 
			addItemBtn->BackColor = System::Drawing::Color::RoyalBlue;
			addItemBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addItemBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			addItemBtn->Location = System::Drawing::Point(280, 206);
			addItemBtn->Margin = System::Windows::Forms::Padding(0);
			addItemBtn->Name = L"addItemBtn";
			addItemBtn->Size = System::Drawing::Size(151, 43);
			addItemBtn->TabIndex = 0;
			addItemBtn->Text = L"+ Add Item";
			addItemBtn->UseVisualStyleBackColor = false;
			addItemBtn->Click += gcnew System::EventHandler(this, &AddExportPage::addItemBtn_Click);
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->Location = System::Drawing::Point(30, 146);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(149, 29);
			label3->TabIndex = 3;
			label3->Text = L"Retail Date:";
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(23, 16);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(316, 39);
			label1->TabIndex = 0;
			label1->Text = L"Register an Export";
			// 
			// addBtn
			// 
			addBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			addBtn->BackColor = System::Drawing::Color::ForestGreen;
			addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addBtn->ForeColor = System::Drawing::SystemColors::Control;
			addBtn->Location = System::Drawing::Point(749, 750);
			addBtn->Name = L"addBtn";
			addBtn->Size = System::Drawing::Size(246, 52);
			addBtn->TabIndex = 10;
			addBtn->Text = L"Confirm Export";
			addBtn->UseVisualStyleBackColor = false;
			addBtn->Click += gcnew System::EventHandler(this, &AddExportPage::addBtn_Click);
			// 
			// panel1
			// 
			panel1->Controls->Add(addItemBtn);
			panel1->Controls->Add(label4);
			panel1->Controls->Add(this->customerInput);
			panel1->Controls->Add(this->dateInput);
			panel1->Controls->Add(label1);
			panel1->Controls->Add(label3);
			panel1->Controls->Add(label2);
			panel1->Dock = System::Windows::Forms::DockStyle::Top;
			panel1->Location = System::Drawing::Point(30, 30);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(968, 268);
			panel1->TabIndex = 11;
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->Location = System::Drawing::Point(25, 210);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(198, 29);
			label4->TabIndex = 5;
			label4->Text = L"Export Contents";
			// 
			// customerInput
			// 
			this->customerInput->DisplayMember = L"Name";
			this->customerInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerInput->FormattingEnabled = true;
			this->customerInput->Location = System::Drawing::Point(260, 79);
			this->customerInput->Name = L"customerInput";
			this->customerInput->Size = System::Drawing::Size(573, 37);
			this->customerInput->TabIndex = 2;
			this->customerInput->ValueMember = L"Id";
			// 
			// dateInput
			// 
			this->dateInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateInput->Location = System::Drawing::Point(260, 145);
			this->dateInput->Name = L"dateInput";
			this->dateInput->Size = System::Drawing::Size(573, 30);
			this->dateInput->TabIndex = 4;
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(30, 82);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(132, 29);
			label2->TabIndex = 1;
			label2->Text = L"Customer:";
			// 
			// noItemsMsg
			// 
			this->noItemsMsg->AutoSize = true;
			this->noItemsMsg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->noItemsMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noItemsMsg->ForeColor = System::Drawing::SystemColors::GrayText;
			this->noItemsMsg->Location = System::Drawing::Point(33, 10);
			this->noItemsMsg->Name = L"noItemsMsg";
			this->noItemsMsg->Size = System::Drawing::Size(357, 29);
			this->noItemsMsg->TabIndex = 0;
			this->noItemsMsg->Text = L"No Items added to this Export";
			this->noItemsMsg->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// errorMsg
			// 
			this->errorMsg->AutoSize = true;
			this->errorMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMsg->ForeColor = System::Drawing::Color::DarkRed;
			this->errorMsg->Location = System::Drawing::Point(33, 765);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(0, 25);
			this->errorMsg->TabIndex = 12;
			// 
			// itemsPanel
			// 
			this->itemsPanel->AutoScroll = true;
			this->itemsPanel->Controls->Add(this->noItemsMsg);
			this->itemsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->itemsPanel->Location = System::Drawing::Point(30, 298);
			this->itemsPanel->Name = L"itemsPanel";
			this->itemsPanel->Padding = System::Windows::Forms::Padding(30, 10, 30, 10);
			this->itemsPanel->Size = System::Drawing::Size(968, 429);
			this->itemsPanel->TabIndex = 13;
			// 
			// AddExportPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->errorMsg);
			this->Controls->Add(this->itemsPanel);
			this->Controls->Add(addBtn);
			this->Controls->Add(panel1);
			this->Name = L"AddExportPage";
			this->Padding = System::Windows::Forms::Padding(30, 30, 30, 100);
			this->Size = System::Drawing::Size(1028, 827);
			this->Load += gcnew System::EventHandler(this, &AddExportPage::AddExportPage_Load);
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			this->itemsPanel->ResumeLayout(false);
			this->itemsPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void AddExportPage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void addItemBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void deleteItemBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void customerInput_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	};
}

#pragma once
#include "Export.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Models;

namespace Views {

	/// <summary>
	/// Summary for ExportViewPage
	/// </summary>
	public ref class ExportViewPage : public System::Windows::Forms::UserControl
	{
	public:
		ExportViewPage(int Id);
		ExportViewPage(Export^ exportData);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ExportViewPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		Export^ exportData;
		System::Windows::Forms::FlowLayoutPanel^ itemsPanel;
		System::Windows::Forms::Label^ statusLabel;
		System::Windows::Forms::Label^ itemCountLabel;
	private: System::Windows::Forms::Label^ customerLabel;

		System::Windows::Forms::Button^ cancelBtn;
		System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::Label^ retailerLabel;

		System::Windows::Forms::Label^ idLabel;
	private: System::Windows::Forms::Label^ dateLabel;
	private: System::Windows::Forms::Button^ confirmBtn;

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
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Label^ label5;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::FlowLayoutPanel^ btnsPanel;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Panel^ panel1;
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->statusLabel = (gcnew System::Windows::Forms::Label());
			this->itemCountLabel = (gcnew System::Windows::Forms::Label());
			this->retailerLabel = (gcnew System::Windows::Forms::Label());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->customerLabel = (gcnew System::Windows::Forms::Label());
			this->itemsPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->confirmBtn = (gcnew System::Windows::Forms::Button());
			label3 = (gcnew System::Windows::Forms::Label());
			label5 = (gcnew System::Windows::Forms::Label());
			label4 = (gcnew System::Windows::Forms::Label());
			btnsPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			label1 = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			panel1 = (gcnew System::Windows::Forms::Panel());
			btnsPanel->SuspendLayout();
			panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->Location = System::Drawing::Point(21, 201);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(74, 25);
			label3->TabIndex = 14;
			label3->Text = L"Status:";
			// 
			// label5
			// 
			label5->AutoSize = true;
			label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label5->Location = System::Drawing::Point(21, 157);
			label5->Name = L"label5";
			label5->Size = System::Drawing::Size(116, 25);
			label5->TabIndex = 7;
			label5->Text = L"Retailed By:";
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->Location = System::Drawing::Point(21, 118);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(125, 25);
			label4->TabIndex = 5;
			label4->Text = L"Export Date: ";
			// 
			// btnsPanel
			// 
			btnsPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			btnsPanel->Controls->Add(this->confirmBtn);
			btnsPanel->Controls->Add(this->cancelBtn);
			btnsPanel->Controls->Add(this->deleteBtn);
			btnsPanel->Location = System::Drawing::Point(786, 3);
			btnsPanel->Name = L"btnsPanel";
			btnsPanel->Size = System::Drawing::Size(224, 223);
			btnsPanel->TabIndex = 2;
			// 
			// cancelBtn
			// 
			this->cancelBtn->BackColor = System::Drawing::Color::DarkOrange;
			this->cancelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->cancelBtn->Location = System::Drawing::Point(3, 56);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(221, 47);
			this->cancelBtn->TabIndex = 0;
			this->cancelBtn->Text = L"Cancel Export";
			this->cancelBtn->UseVisualStyleBackColor = false;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &ExportViewPage::cancelBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->BackColor = System::Drawing::Color::DarkRed;
			this->deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->deleteBtn->Location = System::Drawing::Point(3, 109);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(221, 47);
			this->deleteBtn->TabIndex = 2;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &ExportViewPage::deleteBtn_Click);
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(14, 17);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(243, 39);
			label1->TabIndex = 0;
			label1->Text = L"Export Details";
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(21, 75);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(103, 25);
			label2->TabIndex = 3;
			label2->Text = L"Customer:";
			// 
			// panel1
			// 
			panel1->Controls->Add(this->statusLabel);
			panel1->Controls->Add(label3);
			panel1->Controls->Add(this->itemCountLabel);
			panel1->Controls->Add(btnsPanel);
			panel1->Controls->Add(label1);
			panel1->Controls->Add(this->retailerLabel);
			panel1->Controls->Add(this->idLabel);
			panel1->Controls->Add(label5);
			panel1->Controls->Add(label2);
			panel1->Controls->Add(this->dateLabel);
			panel1->Controls->Add(this->customerLabel);
			panel1->Controls->Add(label4);
			panel1->Dock = System::Windows::Forms::DockStyle::Top;
			panel1->Location = System::Drawing::Point(30, 30);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(1013, 296);
			panel1->TabIndex = 11;
			// 
			// statusLabel
			// 
			this->statusLabel->AutoSize = true;
			this->statusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->statusLabel->Location = System::Drawing::Point(117, 201);
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(124, 25);
			this->statusLabel->TabIndex = 15;
			this->statusLabel->Text = L"Status Value";
			// 
			// itemCountLabel
			// 
			this->itemCountLabel->AutoSize = true;
			this->itemCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemCountLabel->Location = System::Drawing::Point(22, 251);
			this->itemCountLabel->Name = L"itemCountLabel";
			this->itemCountLabel->Size = System::Drawing::Size(407, 24);
			this->itemCountLabel->TabIndex = 13;
			this->itemCountLabel->Text = L"This Export incluldes 99 items listed below";
			// 
			// retailerLabel
			// 
			this->retailerLabel->AutoSize = true;
			this->retailerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->retailerLabel->ForeColor = System::Drawing::Color::Peru;
			this->retailerLabel->Location = System::Drawing::Point(168, 157);
			this->retailerLabel->Name = L"retailerLabel";
			this->retailerLabel->Size = System::Drawing::Size(184, 25);
			this->retailerLabel->TabIndex = 8;
			this->retailerLabel->Text = L"Adder Name Here";
			this->retailerLabel->Click += gcnew System::EventHandler(this, &ExportViewPage::retailerLabel_Click);
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->idLabel->Location = System::Drawing::Point(261, 28);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(130, 25);
			this->idLabel->TabIndex = 1;
			this->idLabel->Text = L"ID: 9999999";
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->dateLabel->Location = System::Drawing::Point(168, 118);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(53, 25);
			this->dateLabel->TabIndex = 6;
			this->dateLabel->Text = L"Date";
			// 
			// customerLabel
			// 
			this->customerLabel->AutoSize = true;
			this->customerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerLabel->ForeColor = System::Drawing::Color::RoyalBlue;
			this->customerLabel->Location = System::Drawing::Point(139, 75);
			this->customerLabel->Name = L"customerLabel";
			this->customerLabel->Size = System::Drawing::Size(219, 25);
			this->customerLabel->TabIndex = 4;
			this->customerLabel->Text = L"Customer Name Here";
			this->customerLabel->Click += gcnew System::EventHandler(this, &ExportViewPage::customerLabel_Click);
			// 
			// itemsPanel
			// 
			this->itemsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->itemsPanel->Location = System::Drawing::Point(30, 326);
			this->itemsPanel->Name = L"itemsPanel";
			this->itemsPanel->Size = System::Drawing::Size(1013, 479);
			this->itemsPanel->TabIndex = 12;
			// 
			// confirmBtn
			// 
			this->confirmBtn->BackColor = System::Drawing::Color::ForestGreen;
			this->confirmBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->confirmBtn->Location = System::Drawing::Point(3, 3);
			this->confirmBtn->Name = L"confirmBtn";
			this->confirmBtn->Size = System::Drawing::Size(221, 47);
			this->confirmBtn->TabIndex = 3;
			this->confirmBtn->Text = L"Confirm Export";
			this->confirmBtn->UseVisualStyleBackColor = false;
			this->confirmBtn->Click += gcnew System::EventHandler(this, &ExportViewPage::confirmBtn_Click);
			// 
			// ExportViewPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->itemsPanel);
			this->Controls->Add(panel1);
			this->Name = L"ExportViewPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1073, 835);
			btnsPanel->ResumeLayout(false);
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void SetData(Export^ exportData);
		void UpdateStatus();
		System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void customerLabel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void retailerLabel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void confirmBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

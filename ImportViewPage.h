#pragma once
#include "Import.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Models;

namespace Views {

	/// <summary>
	/// Summary for ImportViewPage
	/// </summary>
	public ref class ImportViewPage : public System::Windows::Forms::UserControl
	{
	public:
		ImportViewPage(int id);
		ImportViewPage(Import^ import);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ImportViewPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		Import^ import;
		System::Windows::Forms::Label^ idLabel;
		System::Windows::Forms::Label^ supplierLabel;
		System::Windows::Forms::Label^ arrivalTimeLabel;
		System::Windows::Forms::Label^ adderLabel;
		System::Windows::Forms::Label^ accepterLabel;
		System::Windows::Forms::Label^ reviewerLabel;
		System::Windows::Forms::FlowLayoutPanel^ itemsPanel;
		System::Windows::Forms::Label^ itemCountLabel;
	private: System::Windows::Forms::Button^ reviewBtn;

	private: System::Windows::Forms::Button^ acceptBtn;
	private: System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::Label^ statusLabel;
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
			System::Windows::Forms::FlowLayoutPanel^ btnsPanel;
			System::Windows::Forms::Button^ returnBtn;
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Label^ label5;
			System::Windows::Forms::Label^ label7;
			System::Windows::Forms::Label^ label9;
			System::Windows::Forms::Panel^ panel1;
			System::Windows::Forms::Label^ label3;
			this->reviewBtn = (gcnew System::Windows::Forms::Button());
			this->acceptBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->statusLabel = (gcnew System::Windows::Forms::Label());
			this->itemCountLabel = (gcnew System::Windows::Forms::Label());
			this->accepterLabel = (gcnew System::Windows::Forms::Label());
			this->reviewerLabel = (gcnew System::Windows::Forms::Label());
			this->adderLabel = (gcnew System::Windows::Forms::Label());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->arrivalTimeLabel = (gcnew System::Windows::Forms::Label());
			this->supplierLabel = (gcnew System::Windows::Forms::Label());
			this->itemsPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			label1 = (gcnew System::Windows::Forms::Label());
			btnsPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			returnBtn = (gcnew System::Windows::Forms::Button());
			label2 = (gcnew System::Windows::Forms::Label());
			label4 = (gcnew System::Windows::Forms::Label());
			label5 = (gcnew System::Windows::Forms::Label());
			label7 = (gcnew System::Windows::Forms::Label());
			label9 = (gcnew System::Windows::Forms::Label());
			panel1 = (gcnew System::Windows::Forms::Panel());
			label3 = (gcnew System::Windows::Forms::Label());
			btnsPanel->SuspendLayout();
			panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(14, 17);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(241, 39);
			label1->TabIndex = 0;
			label1->Text = L"Import Details";
			// 
			// btnsPanel
			// 
			btnsPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			btnsPanel->Controls->Add(returnBtn);
			btnsPanel->Controls->Add(this->reviewBtn);
			btnsPanel->Controls->Add(this->acceptBtn);
			btnsPanel->Controls->Add(this->deleteBtn);
			btnsPanel->Location = System::Drawing::Point(881, 3);
			btnsPanel->Name = L"btnsPanel";
			btnsPanel->Size = System::Drawing::Size(224, 339);
			btnsPanel->TabIndex = 2;
			// 
			// returnBtn
			// 
			returnBtn->BackColor = System::Drawing::Color::MidnightBlue;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::SystemColors::Control;
			returnBtn->Location = System::Drawing::Point(3, 3);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(221, 47);
			returnBtn->TabIndex = 3;
			returnBtn->Text = L"Return";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &ImportViewPage::returnBtn_Click);
			// 
			// reviewBtn
			// 
			this->reviewBtn->BackColor = System::Drawing::Color::DarkOrange;
			this->reviewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reviewBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->reviewBtn->Location = System::Drawing::Point(3, 56);
			this->reviewBtn->Name = L"reviewBtn";
			this->reviewBtn->Size = System::Drawing::Size(221, 47);
			this->reviewBtn->TabIndex = 0;
			this->reviewBtn->Text = L"Review Import";
			this->reviewBtn->UseVisualStyleBackColor = false;
			this->reviewBtn->Click += gcnew System::EventHandler(this, &ImportViewPage::reviewBtn_Click);
			// 
			// acceptBtn
			// 
			this->acceptBtn->BackColor = System::Drawing::Color::LimeGreen;
			this->acceptBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acceptBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->acceptBtn->Location = System::Drawing::Point(3, 109);
			this->acceptBtn->Name = L"acceptBtn";
			this->acceptBtn->Size = System::Drawing::Size(221, 47);
			this->acceptBtn->TabIndex = 1;
			this->acceptBtn->Text = L"Accept Import";
			this->acceptBtn->UseVisualStyleBackColor = false;
			this->acceptBtn->Click += gcnew System::EventHandler(this, &ImportViewPage::acceptBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->BackColor = System::Drawing::Color::DarkRed;
			this->deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->deleteBtn->Location = System::Drawing::Point(3, 162);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(221, 47);
			this->deleteBtn->TabIndex = 2;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &ImportViewPage::deleteBtn_Click);
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(21, 75);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(90, 25);
			label2->TabIndex = 3;
			label2->Text = L"Supplier:";
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->Location = System::Drawing::Point(21, 118);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(127, 25);
			label4->TabIndex = 5;
			label4->Text = L"Arrival Time: ";
			// 
			// label5
			// 
			label5->AutoSize = true;
			label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label5->Location = System::Drawing::Point(21, 157);
			label5->Name = L"label5";
			label5->Size = System::Drawing::Size(104, 25);
			label5->TabIndex = 7;
			label5->Text = L"Added By:";
			// 
			// label7
			// 
			label7->AutoSize = true;
			label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label7->Location = System::Drawing::Point(21, 195);
			label7->Name = L"label7";
			label7->Size = System::Drawing::Size(131, 25);
			label7->TabIndex = 9;
			label7->Text = L"Reviewed By:";
			// 
			// label9
			// 
			label9->AutoSize = true;
			label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label9->Location = System::Drawing::Point(21, 230);
			label9->Name = L"label9";
			label9->Size = System::Drawing::Size(129, 25);
			label9->TabIndex = 11;
			label9->Text = L"Accepted By:";
			// 
			// panel1
			// 
			panel1->Controls->Add(this->statusLabel);
			panel1->Controls->Add(label3);
			panel1->Controls->Add(this->itemCountLabel);
			panel1->Controls->Add(this->accepterLabel);
			panel1->Controls->Add(label9);
			panel1->Controls->Add(this->reviewerLabel);
			panel1->Controls->Add(label7);
			panel1->Controls->Add(btnsPanel);
			panel1->Controls->Add(label1);
			panel1->Controls->Add(this->adderLabel);
			panel1->Controls->Add(this->idLabel);
			panel1->Controls->Add(label5);
			panel1->Controls->Add(label2);
			panel1->Controls->Add(this->arrivalTimeLabel);
			panel1->Controls->Add(this->supplierLabel);
			panel1->Controls->Add(label4);
			panel1->Dock = System::Windows::Forms::DockStyle::Top;
			panel1->Location = System::Drawing::Point(30, 30);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(1108, 348);
			panel1->TabIndex = 9;
			// 
			// statusLabel
			// 
			this->statusLabel->AutoSize = true;
			this->statusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->statusLabel->Location = System::Drawing::Point(117, 265);
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(124, 25);
			this->statusLabel->TabIndex = 15;
			this->statusLabel->Text = L"Status Value";
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->Location = System::Drawing::Point(23, 265);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(74, 25);
			label3->TabIndex = 14;
			label3->Text = L"Status:";
			// 
			// itemCountLabel
			// 
			this->itemCountLabel->AutoSize = true;
			this->itemCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemCountLabel->Location = System::Drawing::Point(22, 301);
			this->itemCountLabel->Name = L"itemCountLabel";
			this->itemCountLabel->Size = System::Drawing::Size(404, 24);
			this->itemCountLabel->TabIndex = 13;
			this->itemCountLabel->Text = L"This Import incluldes 99 items listed below";
			// 
			// accepterLabel
			// 
			this->accepterLabel->AutoSize = true;
			this->accepterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accepterLabel->ForeColor = System::Drawing::Color::Peru;
			this->accepterLabel->Location = System::Drawing::Point(168, 230);
			this->accepterLabel->Name = L"accepterLabel";
			this->accepterLabel->Size = System::Drawing::Size(212, 25);
			this->accepterLabel->TabIndex = 12;
			this->accepterLabel->Text = L"Accepter Name Here";
			// 
			// reviewerLabel
			// 
			this->reviewerLabel->AutoSize = true;
			this->reviewerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reviewerLabel->ForeColor = System::Drawing::Color::Peru;
			this->reviewerLabel->Location = System::Drawing::Point(168, 195);
			this->reviewerLabel->Name = L"reviewerLabel";
			this->reviewerLabel->Size = System::Drawing::Size(214, 25);
			this->reviewerLabel->TabIndex = 10;
			this->reviewerLabel->Text = L"Reviewer Name Here";
			// 
			// adderLabel
			// 
			this->adderLabel->AutoSize = true;
			this->adderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adderLabel->ForeColor = System::Drawing::Color::Peru;
			this->adderLabel->Location = System::Drawing::Point(139, 157);
			this->adderLabel->Name = L"adderLabel";
			this->adderLabel->Size = System::Drawing::Size(184, 25);
			this->adderLabel->TabIndex = 8;
			this->adderLabel->Text = L"Adder Name Here";
			this->adderLabel->Click += gcnew System::EventHandler(this, &ImportViewPage::adderLabel_Click);
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
			// arrivalTimeLabel
			// 
			this->arrivalTimeLabel->AutoSize = true;
			this->arrivalTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrivalTimeLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->arrivalTimeLabel->Location = System::Drawing::Point(168, 118);
			this->arrivalTimeLabel->Name = L"arrivalTimeLabel";
			this->arrivalTimeLabel->Size = System::Drawing::Size(53, 25);
			this->arrivalTimeLabel->TabIndex = 6;
			this->arrivalTimeLabel->Text = L"Date";
			// 
			// supplierLabel
			// 
			this->supplierLabel->AutoSize = true;
			this->supplierLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->supplierLabel->ForeColor = System::Drawing::Color::RoyalBlue;
			this->supplierLabel->Location = System::Drawing::Point(117, 75);
			this->supplierLabel->Name = L"supplierLabel";
			this->supplierLabel->Size = System::Drawing::Size(206, 25);
			this->supplierLabel->TabIndex = 4;
			this->supplierLabel->Text = L"Supplier Name Here";
			this->supplierLabel->Click += gcnew System::EventHandler(this, &ImportViewPage::supplierLabel_Click);
			// 
			// itemsPanel
			// 
			this->itemsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->itemsPanel->Location = System::Drawing::Point(30, 378);
			this->itemsPanel->Name = L"itemsPanel";
			this->itemsPanel->Size = System::Drawing::Size(1108, 423);
			this->itemsPanel->TabIndex = 10;
			// 
			// ImportViewPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->itemsPanel);
			this->Controls->Add(panel1);
			this->Name = L"ImportViewPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1168, 831);
			btnsPanel->ResumeLayout(false);
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void SetData(Import^ import);
		System::Void supplierLabel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void adderLabel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void reviewerLabel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void accepterLabel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void reviewBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void acceptBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

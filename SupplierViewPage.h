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
	/// Summary for SupplierViewPage
	/// </summary>
	public ref class SupplierViewPage : public System::Windows::Forms::UserControl
	{
	public:
		SupplierViewPage(int id);
		SupplierViewPage(Supplier^ supplier);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SupplierViewPage()
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
		System::Windows::Forms::Label^ contractDateLabel;
		System::Windows::Forms::Label^ noItemsLabel;
		System::Windows::Forms::Label^ idLabel;
		System::Windows::Forms::Label^ nameLabel;
		Supplier^ supplier;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ itemsLabel;
			System::Windows::Forms::Button^ deleteBtn;
			System::Windows::Forms::Button^ editBtn;
			System::Windows::Forms::Button^ returnBtn;
			this->contractDateLabel = (gcnew System::Windows::Forms::Label());
			this->noItemsLabel = (gcnew System::Windows::Forms::Label());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			itemsLabel = (gcnew System::Windows::Forms::Label());
			deleteBtn = (gcnew System::Windows::Forms::Button());
			editBtn = (gcnew System::Windows::Forms::Button());
			returnBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(68, 158);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(177, 29);
			label1->TabIndex = 23;
			label1->Text = L"Contracted At:";
			// 
			// itemsLabel
			// 
			itemsLabel->AutoSize = true;
			itemsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			itemsLabel->Location = System::Drawing::Point(66, 260);
			itemsLabel->Name = L"itemsLabel";
			itemsLabel->Size = System::Drawing::Size(403, 29);
			itemsLabel->TabIndex = 21;
			itemsLabel->Text = L"Imports belonging to this supplier";
			// 
			// deleteBtn
			// 
			deleteBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			deleteBtn->BackColor = System::Drawing::Color::Crimson;
			deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			deleteBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			deleteBtn->Location = System::Drawing::Point(907, 210);
			deleteBtn->Name = L"deleteBtn";
			deleteBtn->Size = System::Drawing::Size(174, 51);
			deleteBtn->TabIndex = 20;
			deleteBtn->Text = L"Delete";
			deleteBtn->UseVisualStyleBackColor = false;
			deleteBtn->Click += gcnew System::EventHandler(this, &SupplierViewPage::deleteBtn_Click);
			// 
			// editBtn
			// 
			editBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			editBtn->BackColor = System::Drawing::Color::ForestGreen;
			editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			editBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			editBtn->Location = System::Drawing::Point(907, 136);
			editBtn->Name = L"editBtn";
			editBtn->Size = System::Drawing::Size(174, 51);
			editBtn->TabIndex = 19;
			editBtn->Text = L"Edit";
			editBtn->UseVisualStyleBackColor = false;
			editBtn->Click += gcnew System::EventHandler(this, &SupplierViewPage::editBtn_Click);
			// 
			// returnBtn
			// 
			returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			returnBtn->BackColor = System::Drawing::Color::CornflowerBlue;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			returnBtn->Location = System::Drawing::Point(907, 65);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(174, 51);
			returnBtn->TabIndex = 18;
			returnBtn->Text = L"Return Back";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &SupplierViewPage::returnBtn_Click);
			// 
			// contractDateLabel
			// 
			this->contractDateLabel->AutoSize = true;
			this->contractDateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contractDateLabel->Location = System::Drawing::Point(251, 158);
			this->contractDateLabel->Name = L"contractDateLabel";
			this->contractDateLabel->Size = System::Drawing::Size(237, 29);
			this->contractDateLabel->TabIndex = 24;
			this->contractDateLabel->Text = L"Contract date value";
			// 
			// noItemsLabel
			// 
			this->noItemsLabel->AutoSize = true;
			this->noItemsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noItemsLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->noItemsLabel->Location = System::Drawing::Point(91, 325);
			this->noItemsLabel->Name = L"noItemsLabel";
			this->noItemsLabel->Size = System::Drawing::Size(164, 25);
			this->noItemsLabel->TabIndex = 22;
			this->noItemsLabel->Text = L"No Items Found";
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->idLabel->Location = System::Drawing::Point(68, 113);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(111, 29);
			this->idLabel->TabIndex = 17;
			this->idLabel->Text = L"Id: value";
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->Location = System::Drawing::Point(66, 64);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(256, 39);
			this->nameLabel->TabIndex = 16;
			this->nameLabel->Text = L"Supplier Name";
			// 
			// SupplierViewPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->contractDateLabel);
			this->Controls->Add(label1);
			this->Controls->Add(this->noItemsLabel);
			this->Controls->Add(itemsLabel);
			this->Controls->Add(deleteBtn);
			this->Controls->Add(editBtn);
			this->Controls->Add(returnBtn);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(this->nameLabel);
			this->Name = L"SupplierViewPage";
			this->Size = System::Drawing::Size(1150, 836);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e);
		void SetData(Supplier^ supplier);
	};
}

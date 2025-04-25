#pragma once
#include "Category.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Models;

namespace Views {

	/// <summary>
	/// Summary for ViewCategory
	/// </summary>
	public ref class ViewCategoryPage : public System::Windows::Forms::UserControl
	{
	public:
		ViewCategoryPage(int Id);
		ViewCategoryPage(Category^ category);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewCategoryPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ nameLabel;
		System::Windows::Forms::Label^ idLabel;

		Category^ category;
	private: System::Windows::Forms::Label^ noItemsLabel;


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
			System::Windows::Forms::Button^ returnBtn;
			System::Windows::Forms::Button^ editBtn;
			System::Windows::Forms::Button^ deleteBtn;
			System::Windows::Forms::Label^ itemsLabel;
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->noItemsLabel = (gcnew System::Windows::Forms::Label());
			returnBtn = (gcnew System::Windows::Forms::Button());
			editBtn = (gcnew System::Windows::Forms::Button());
			deleteBtn = (gcnew System::Windows::Forms::Button());
			itemsLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// returnBtn
			// 
			returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			returnBtn->BackColor = System::Drawing::Color::CornflowerBlue;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			returnBtn->Location = System::Drawing::Point(916, 54);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(174, 51);
			returnBtn->TabIndex = 2;
			returnBtn->Text = L"Return Back";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &ViewCategoryPage::returnBtn_Click);
			// 
			// editBtn
			// 
			editBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			editBtn->BackColor = System::Drawing::Color::ForestGreen;
			editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			editBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			editBtn->Location = System::Drawing::Point(916, 125);
			editBtn->Name = L"editBtn";
			editBtn->Size = System::Drawing::Size(174, 51);
			editBtn->TabIndex = 3;
			editBtn->Text = L"Edit";
			editBtn->UseVisualStyleBackColor = false;
			editBtn->Click += gcnew System::EventHandler(this, &ViewCategoryPage::editBtn_Click);
			// 
			// deleteBtn
			// 
			deleteBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			deleteBtn->BackColor = System::Drawing::Color::Crimson;
			deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			deleteBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			deleteBtn->Location = System::Drawing::Point(916, 199);
			deleteBtn->Name = L"deleteBtn";
			deleteBtn->Size = System::Drawing::Size(174, 51);
			deleteBtn->TabIndex = 4;
			deleteBtn->Text = L"Delete";
			deleteBtn->UseVisualStyleBackColor = false;
			deleteBtn->Click += gcnew System::EventHandler(this, &ViewCategoryPage::deleteBtn_Click);
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->Location = System::Drawing::Point(53, 54);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(268, 39);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"Category Name";
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idLabel->Location = System::Drawing::Point(55, 103);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(147, 29);
			this->idLabel->TabIndex = 1;
			this->idLabel->Text = L"Category Id";
			// 
			// itemsLabel
			// 
			itemsLabel->AutoSize = true;
			itemsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			itemsLabel->Location = System::Drawing::Point(55, 231);
			itemsLabel->Name = L"itemsLabel";
			itemsLabel->Size = System::Drawing::Size(348, 29);
			itemsLabel->TabIndex = 5;
			itemsLabel->Text = L"Items belong to this category";
			// 
			// noItemsLabel
			// 
			this->noItemsLabel->AutoSize = true;
			this->noItemsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noItemsLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->noItemsLabel->Location = System::Drawing::Point(80, 296);
			this->noItemsLabel->Name = L"noItemsLabel";
			this->noItemsLabel->Size = System::Drawing::Size(164, 25);
			this->noItemsLabel->TabIndex = 6;
			this->noItemsLabel->Text = L"No Items Found";
			// 
			// ViewCategoryPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->noItemsLabel);
			this->Controls->Add(itemsLabel);
			this->Controls->Add(deleteBtn);
			this->Controls->Add(editBtn);
			this->Controls->Add(returnBtn);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(this->nameLabel);
			this->Name = L"ViewCategoryPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1149, 820);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		void SetCategory(Category^ category) {
			this->category = category;
			this->nameLabel->Text = category->Name;
			this->idLabel->Text = "ID: " + category->Id.ToString();
		}
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

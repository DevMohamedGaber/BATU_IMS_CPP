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
	/// Summary for EditCategoryPage
	/// </summary>
	public ref class EditCategoryPage : public System::Windows::Forms::UserControl
	{
	public:
		EditCategoryPage(Category^ category)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->category = category;
			this->nameInput->Text = category->Name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditCategoryPage()
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
		System::Windows::Forms::TextBox^ nameInput;
		System::Windows::Forms::Label^ errorMsg;
		Category^ category;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ headerLabel;
			System::Windows::Forms::Button^ returnBtn;
			System::Windows::Forms::Label^ nameLabel;
			System::Windows::Forms::Button^ confirmBtn;
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->errorMsg = (gcnew System::Windows::Forms::Label());
			headerLabel = (gcnew System::Windows::Forms::Label());
			returnBtn = (gcnew System::Windows::Forms::Button());
			nameLabel = (gcnew System::Windows::Forms::Label());
			confirmBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// headerLabel
			// 
			headerLabel->AutoSize = true;
			headerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			headerLabel->Location = System::Drawing::Point(69, 66);
			headerLabel->Name = L"headerLabel";
			headerLabel->Size = System::Drawing::Size(236, 39);
			headerLabel->TabIndex = 0;
			headerLabel->Text = L"Edit Category";
			// 
			// returnBtn
			// 
			returnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			returnBtn->BackColor = System::Drawing::Color::DarkRed;
			returnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			returnBtn->ForeColor = System::Drawing::Color::Gainsboro;
			returnBtn->Location = System::Drawing::Point(657, 55);
			returnBtn->Name = L"returnBtn";
			returnBtn->Size = System::Drawing::Size(188, 50);
			returnBtn->TabIndex = 1;
			returnBtn->Text = L"Return Back";
			returnBtn->UseVisualStyleBackColor = false;
			returnBtn->Click += gcnew System::EventHandler(this, &EditCategoryPage::returnBtn_Click);
			// 
			// nameLabel
			// 
			nameLabel->AutoSize = true;
			nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			nameLabel->Location = System::Drawing::Point(83, 153);
			nameLabel->Name = L"nameLabel";
			nameLabel->Size = System::Drawing::Size(68, 25);
			nameLabel->TabIndex = 2;
			nameLabel->Text = L"Name";
			// 
			// confirmBtn
			// 
			confirmBtn->BackColor = System::Drawing::Color::CornflowerBlue;
			confirmBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			confirmBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			confirmBtn->Location = System::Drawing::Point(574, 237);
			confirmBtn->Name = L"confirmBtn";
			confirmBtn->Size = System::Drawing::Size(155, 48);
			confirmBtn->TabIndex = 4;
			confirmBtn->Text = L"Confirm";
			confirmBtn->UseVisualStyleBackColor = false;
			confirmBtn->Click += gcnew System::EventHandler(this, &EditCategoryPage::confirmBtn_Click);
			// 
			// nameInput
			// 
			this->nameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameInput->Location = System::Drawing::Point(186, 147);
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(383, 34);
			this->nameInput->TabIndex = 3;
			// 
			// errorMsg
			// 
			this->errorMsg->AutoSize = true;
			this->errorMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMsg->ForeColor = System::Drawing::Color::Red;
			this->errorMsg->Location = System::Drawing::Point(88, 237);
			this->errorMsg->MaximumSize = System::Drawing::Size(400, 0);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(0, 25);
			this->errorMsg->TabIndex = 5;
			// 
			// EditCategoryPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->errorMsg);
			this->Controls->Add(confirmBtn);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(nameLabel);
			this->Controls->Add(returnBtn);
			this->Controls->Add(headerLabel);
			this->Name = L"EditCategoryPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(923, 655);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void returnBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void confirmBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}

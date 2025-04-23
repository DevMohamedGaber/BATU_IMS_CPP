#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Views {

	/// <summary>
	/// Summary for AddItemPage
	/// </summary>
	public ref class AddItemPage : public System::Windows::Forms::UserControl
	{
	public:
		AddItemPage(void)
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
		~AddItemPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ nameInput;
	private: System::Windows::Forms::TextBox^ priceInput;
	private: System::Windows::Forms::ComboBox^ categoryInput;
	private: System::Windows::Forms::Label^ errorBox;
	protected:

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
			System::Windows::Forms::Label^ nameLabel;
			System::Windows::Forms::Label^ priceLabel;
			System::Windows::Forms::Label^ categoryLabel;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Button^ addBtn;
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->priceInput = (gcnew System::Windows::Forms::TextBox());
			this->categoryInput = (gcnew System::Windows::Forms::ComboBox());
			this->errorBox = (gcnew System::Windows::Forms::Label());
			nameLabel = (gcnew System::Windows::Forms::Label());
			priceLabel = (gcnew System::Windows::Forms::Label());
			categoryLabel = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			addBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			nameLabel->AutoSize = true;
			nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			nameLabel->Location = System::Drawing::Point(64, 120);
			nameLabel->Name = L"nameLabel";
			nameLabel->Size = System::Drawing::Size(86, 31);
			nameLabel->TabIndex = 1;
			nameLabel->Text = L"Name";
			// 
			// priceLabel
			// 
			priceLabel->AutoSize = true;
			priceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			priceLabel->Location = System::Drawing::Point(64, 193);
			priceLabel->Name = L"priceLabel";
			priceLabel->Size = System::Drawing::Size(76, 31);
			priceLabel->TabIndex = 3;
			priceLabel->Text = L"Price";
			// 
			// categoryLabel
			// 
			categoryLabel->AutoSize = true;
			categoryLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			categoryLabel->Location = System::Drawing::Point(64, 263);
			categoryLabel->Name = L"categoryLabel";
			categoryLabel->Size = System::Drawing::Size(125, 31);
			categoryLabel->TabIndex = 5;
			categoryLabel->Text = L"Category";
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(33, 30);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(243, 39);
			label1->TabIndex = 0;
			label1->Text = L"Add New Item";
			// 
			// addBtn
			// 
			addBtn->BackColor = System::Drawing::Color::ForestGreen;
			addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			addBtn->Location = System::Drawing::Point(679, 346);
			addBtn->Name = L"addBtn";
			addBtn->Size = System::Drawing::Size(181, 55);
			addBtn->TabIndex = 8;
			addBtn->Text = L"Add";
			addBtn->UseVisualStyleBackColor = false;
			addBtn->Click += gcnew System::EventHandler(this, &AddItemPage::addBtn_Click);
			// 
			// nameInput
			// 
			this->nameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameInput->Location = System::Drawing::Point(205, 120);
			this->nameInput->MaximumSize = System::Drawing::Size(410, 40);
			this->nameInput->MinimumSize = System::Drawing::Size(410, 40);
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(410, 34);
			this->nameInput->TabIndex = 2;
			// 
			// priceInput
			// 
			this->priceInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->priceInput->Location = System::Drawing::Point(205, 193);
			this->priceInput->MaximumSize = System::Drawing::Size(410, 40);
			this->priceInput->MinimumSize = System::Drawing::Size(410, 40);
			this->priceInput->Name = L"priceInput";
			this->priceInput->Size = System::Drawing::Size(410, 34);
			this->priceInput->TabIndex = 4;
			// 
			// categoryInput
			// 
			this->categoryInput->DisplayMember = L"Name";
			this->categoryInput->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->categoryInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->categoryInput->FormattingEnabled = true;
			this->categoryInput->ItemHeight = 29;
			this->categoryInput->Location = System::Drawing::Point(205, 263);
			this->categoryInput->Name = L"categoryInput";
			this->categoryInput->Size = System::Drawing::Size(380, 37);
			this->categoryInput->TabIndex = 7;
			this->categoryInput->Text = L"Select a category";
			this->categoryInput->ValueMember = L"Id";
			// 
			// errorBox
			// 
			this->errorBox->AutoSize = true;
			this->errorBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorBox->ForeColor = System::Drawing::Color::Maroon;
			this->errorBox->Location = System::Drawing::Point(65, 349);
			this->errorBox->MaximumSize = System::Drawing::Size(550, 0);
			this->errorBox->MinimumSize = System::Drawing::Size(300, 0);
			this->errorBox->Name = L"errorBox";
			this->errorBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->errorBox->Size = System::Drawing::Size(300, 26);
			this->errorBox->TabIndex = 9;
			// 
			// AddItemPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->errorBox);
			this->Controls->Add(addBtn);
			this->Controls->Add(this->categoryInput);
			this->Controls->Add(categoryLabel);
			this->Controls->Add(this->priceInput);
			this->Controls->Add(priceLabel);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(nameLabel);
			this->Controls->Add(label1);
			this->Name = L"AddItemPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1256, 826);
			this->Load += gcnew System::EventHandler(this, &AddItemPage::AddItemPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void AddItemPage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Views {

	/// <summary>
	/// Summary for AddCategoryPage
	/// </summary>
	public ref class AddCategoryPage : public System::Windows::Forms::UserControl
	{
	public:
		AddCategoryPage(void)
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
		~AddCategoryPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ nameInput;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ errorBox;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->errorBox = (gcnew System::Windows::Forms::Label());
			nameLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			nameLabel->AutoSize = true;
			nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			nameLabel->Location = System::Drawing::Point(78, 151);
			nameLabel->Name = L"nameLabel";
			nameLabel->Size = System::Drawing::Size(82, 29);
			nameLabel->TabIndex = 1;
			nameLabel->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(71, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add New Category";
			// 
			// nameInput
			// 
			this->nameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameInput->Location = System::Drawing::Point(191, 148);
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(454, 34);
			this->nameInput->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(683, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 54);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddCategoryPage::button1_Click);
			// 
			// errorBox
			// 
			this->errorBox->AutoSize = true;
			this->errorBox->BackColor = System::Drawing::Color::Transparent;
			this->errorBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorBox->ForeColor = System::Drawing::Color::Maroon;
			this->errorBox->Location = System::Drawing::Point(78, 240);
			this->errorBox->MaximumSize = System::Drawing::Size(400, 0);
			this->errorBox->Name = L"errorBox";
			this->errorBox->Size = System::Drawing::Size(0, 25);
			this->errorBox->TabIndex = 4;
			// 
			// AddCategoryPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->errorBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(nameLabel);
			this->Controls->Add(this->label1);
			this->Name = L"AddCategoryPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1152, 699);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: 
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

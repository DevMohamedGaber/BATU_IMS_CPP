#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Views {

	/// <summary>
	/// Summary for AddSupplierPage
	/// </summary>
	public ref class AddSupplierPage : public System::Windows::Forms::UserControl
	{
	public:
		AddSupplierPage(void)
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
		~AddSupplierPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ errorMsg;
		System::Windows::Forms::TextBox^ nameInput;
		System::Windows::Forms::DateTimePicker^ contractDateInput;
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
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Button^ addBtn;
			System::Windows::Forms::Label^ nameLabel;
			System::Windows::Forms::Label^ label1;
			this->errorMsg = (gcnew System::Windows::Forms::Label());
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->contractDateInput = (gcnew System::Windows::Forms::DateTimePicker());
			label2 = (gcnew System::Windows::Forms::Label());
			addBtn = (gcnew System::Windows::Forms::Button());
			nameLabel = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(76, 224);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(171, 29);
			label2->TabIndex = 19;
			label2->Text = L"Contract Date";
			// 
			// addBtn
			// 
			addBtn->BackColor = System::Drawing::Color::DarkGreen;
			addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			addBtn->Location = System::Drawing::Point(693, 325);
			addBtn->Name = L"addBtn";
			addBtn->Size = System::Drawing::Size(142, 54);
			addBtn->TabIndex = 17;
			addBtn->Text = L"Add";
			addBtn->UseVisualStyleBackColor = false;
			addBtn->Click += gcnew System::EventHandler(this, &AddSupplierPage::addBtn_Click);
			// 
			// nameLabel
			// 
			nameLabel->AutoSize = true;
			nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			nameLabel->Location = System::Drawing::Point(76, 153);
			nameLabel->Name = L"nameLabel";
			nameLabel->Size = System::Drawing::Size(82, 29);
			nameLabel->TabIndex = 15;
			nameLabel->Text = L"Name";
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(69, 56);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(307, 39);
			label1->TabIndex = 14;
			label1->Text = L"Add New Supplier";
			// 
			// errorMsg
			// 
			this->errorMsg->AutoSize = true;
			this->errorMsg->BackColor = System::Drawing::Color::Transparent;
			this->errorMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMsg->ForeColor = System::Drawing::Color::Maroon;
			this->errorMsg->Location = System::Drawing::Point(88, 325);
			this->errorMsg->MaximumSize = System::Drawing::Size(400, 0);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(0, 25);
			this->errorMsg->TabIndex = 18;
			// 
			// nameInput
			// 
			this->nameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameInput->Location = System::Drawing::Point(282, 148);
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(454, 34);
			this->nameInput->TabIndex = 16;
			// 
			// contractDateInput
			// 
			this->contractDateInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contractDateInput->Location = System::Drawing::Point(282, 224);
			this->contractDateInput->Name = L"contractDateInput";
			this->contractDateInput->Size = System::Drawing::Size(454, 34);
			this->contractDateInput->TabIndex = 20;
			// 
			// AddSupplierPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->contractDateInput);
			this->Controls->Add(label2);
			this->Controls->Add(this->errorMsg);
			this->Controls->Add(addBtn);
			this->Controls->Add(this->nameInput);
			this->Controls->Add(nameLabel);
			this->Controls->Add(label1);
			this->Name = L"AddSupplierPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1037, 486);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

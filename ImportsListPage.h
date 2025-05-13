#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Views {

	/// <summary>
	/// Summary for ImportsListPage
	/// </summary>
	public ref class ImportsListPage : public System::Windows::Forms::UserControl
	{
	public:
		ImportsListPage(void)
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
		~ImportsListPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 


	private: System::Windows::Forms::Label^ noDataLabel;
		   System::ComponentModel::Container^ components;
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ header;
			System::Windows::Forms::Panel^ panel1;
			System::Windows::Forms::Button^ addNewBtn;
			this->noDataLabel = (gcnew System::Windows::Forms::Label());
			header = (gcnew System::Windows::Forms::Label());
			panel1 = (gcnew System::Windows::Forms::Panel());
			addNewBtn = (gcnew System::Windows::Forms::Button());
			panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// header
			// 
			header->AutoSize = true;
			header->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			header->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			header->Location = System::Drawing::Point(17, 15);
			header->Name = L"header";
			header->Size = System::Drawing::Size(204, 39);
			header->TabIndex = 0;
			header->Text = L"Imports List";
			// 
			// panel1
			// 
			panel1->Controls->Add(addNewBtn);
			panel1->Controls->Add(header);
			panel1->Dock = System::Windows::Forms::DockStyle::Top;
			panel1->Location = System::Drawing::Point(30, 30);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(1027, 74);
			panel1->TabIndex = 2;
			// 
			// addNewBtn
			// 
			addNewBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			addNewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			addNewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addNewBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			addNewBtn->Location = System::Drawing::Point(885, 17);
			addNewBtn->Name = L"addNewBtn";
			addNewBtn->Size = System::Drawing::Size(121, 37);
			addNewBtn->TabIndex = 1;
			addNewBtn->Text = L"Add New";
			addNewBtn->UseVisualStyleBackColor = false;
			addNewBtn->Click += gcnew System::EventHandler(this, &ImportsListPage::addNewBtn_Click);
			// 
			// noDataLabel
			// 
			this->noDataLabel->AutoSize = true;
			this->noDataLabel->BackColor = System::Drawing::Color::Transparent;
			this->noDataLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noDataLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->noDataLabel->Location = System::Drawing::Point(95, 166);
			this->noDataLabel->Name = L"noDataLabel";
			this->noDataLabel->Size = System::Drawing::Size(264, 31);
			this->noDataLabel->TabIndex = 13;
			this->noDataLabel->Text = L"No Data Found Here";
			this->noDataLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->noDataLabel->Visible = false;
			// 
			// ImportsListPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->noDataLabel);
			this->Controls->Add(panel1);
			this->Name = L"ImportsListPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1087, 801);
			this->Load += gcnew System::EventHandler(this, &ImportsListPage::ImportsListPage_Load);
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void ImportsListPage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void addNewBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ViewButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Views {

	/// <summary>
	/// Summary for CategoriesListPage
	/// </summary>
	public ref class CategoriesListPage : public System::Windows::Forms::UserControl
	{
	public:
		CategoriesListPage(void)
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
		~CategoriesListPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;




	private: System::Windows::Forms::Label^ noDataLabel;
	private: System::Windows::Forms::Button^ addNewBtn;
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
			System::Windows::Forms::Label^ headerlabel;
			this->addNewBtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->noDataLabel = (gcnew System::Windows::Forms::Label());
			headerlabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// headerlabel
			// 
			headerlabel->AutoSize = true;
			headerlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			headerlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			headerlabel->Location = System::Drawing::Point(23, 29);
			headerlabel->Name = L"headerlabel";
			headerlabel->Size = System::Drawing::Size(192, 39);
			headerlabel->TabIndex = 0;
			headerlabel->Text = L"Categories";
			// 
			// addNewBtn
			// 
			this->addNewBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addNewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->addNewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->addNewBtn->Location = System::Drawing::Point(606, 35);
			this->addNewBtn->Name = L"addNewBtn";
			this->addNewBtn->Size = System::Drawing::Size(121, 39);
			this->addNewBtn->TabIndex = 1;
			this->addNewBtn->Text = L"Add New";
			this->addNewBtn->UseVisualStyleBackColor = false;
			this->addNewBtn->Click += gcnew System::EventHandler(this, &CategoriesListPage::addNewBtn_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->addNewBtn);
			this->panel1->Controls->Add(headerlabel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(30, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(741, 100);
			this->panel1->TabIndex = 0;
			// 
			// noDataLabel
			// 
			this->noDataLabel->AutoSize = true;
			this->noDataLabel->BackColor = System::Drawing::Color::Transparent;
			this->noDataLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noDataLabel->ForeColor = System::Drawing::Color::Gray;
			this->noDataLabel->Location = System::Drawing::Point(109, 175);
			this->noDataLabel->Name = L"noDataLabel";
			this->noDataLabel->Size = System::Drawing::Size(264, 31);
			this->noDataLabel->TabIndex = 2;
			this->noDataLabel->Text = L"No Data Found Here";
			this->noDataLabel->Visible = false;
			// 
			// CategoriesListPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->noDataLabel);
			this->Controls->Add(this->panel1);
			this->Name = L"CategoriesListPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(801, 457);
			this->Load += gcnew System::EventHandler(this, &CategoriesListPage::CategoriesListPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void addNewBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void CategoriesListPage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void ActionButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}

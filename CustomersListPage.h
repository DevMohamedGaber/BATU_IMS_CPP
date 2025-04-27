#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Views {

	/// <summary>
	/// Summary for CustomersListPage
	/// </summary>
	public ref class CustomersListPage : public System::Windows::Forms::UserControl
	{
	public:
		CustomersListPage(void)
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
		~CustomersListPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ noDataLabel;
		System::Windows::Forms::DataGridView^ dataTable;

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
			System::Windows::Forms::Button^ addNewBtn;
			System::Windows::Forms::Label^ headerlabel;
			System::Windows::Forms::Panel^ panel1;
			this->noDataLabel = (gcnew System::Windows::Forms::Label());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			addNewBtn = (gcnew System::Windows::Forms::Button());
			headerlabel = (gcnew System::Windows::Forms::Label());
			panel1 = (gcnew System::Windows::Forms::Panel());
			panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->SuspendLayout();
			// 
			// addNewBtn
			// 
			addNewBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			addNewBtn->BackColor = System::Drawing::Color::Navy;
			addNewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addNewBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			addNewBtn->Location = System::Drawing::Point(794, 18);
			addNewBtn->Name = L"addNewBtn";
			addNewBtn->Size = System::Drawing::Size(227, 68);
			addNewBtn->TabIndex = 1;
			addNewBtn->Text = L"Add New Customer";
			addNewBtn->UseVisualStyleBackColor = false;
			addNewBtn->Click += gcnew System::EventHandler(this, &CustomersListPage::addNewBtn_Click);
			// 
			// headerlabel
			// 
			headerlabel->AutoSize = true;
			headerlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			headerlabel->Location = System::Drawing::Point(23, 29);
			headerlabel->Name = L"headerlabel";
			headerlabel->Size = System::Drawing::Size(172, 39);
			headerlabel->TabIndex = 0;
			headerlabel->Text = L"Customer";
			// 
			// panel1
			// 
			panel1->Controls->Add(addNewBtn);
			panel1->Controls->Add(headerlabel);
			panel1->Dock = System::Windows::Forms::DockStyle::Top;
			panel1->Location = System::Drawing::Point(30, 30);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(1035, 100);
			panel1->TabIndex = 3;
			// 
			// noDataLabel
			// 
			this->noDataLabel->AutoSize = true;
			this->noDataLabel->BackColor = System::Drawing::Color::Transparent;
			this->noDataLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noDataLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->noDataLabel->Location = System::Drawing::Point(85, 174);
			this->noDataLabel->Name = L"noDataLabel";
			this->noDataLabel->Size = System::Drawing::Size(264, 31);
			this->noDataLabel->TabIndex = 5;
			this->noDataLabel->Text = L"No Data Found Here";
			this->noDataLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->noDataLabel->Visible = false;
			// 
			// dataTable
			// 
			this->dataTable->AllowUserToAddRows = false;
			this->dataTable->AllowUserToDeleteRows = false;
			this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataTable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataTable->Location = System::Drawing::Point(30, 130);
			this->dataTable->Name = L"dataTable";
			this->dataTable->RowHeadersVisible = false;
			this->dataTable->RowHeadersWidth = 51;
			this->dataTable->RowTemplate->Height = 24;
			this->dataTable->ShowEditingIcon = false;
			this->dataTable->Size = System::Drawing::Size(1035, 643);
			this->dataTable->TabIndex = 4;
			this->dataTable->Visible = false;
			this->dataTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomersListPage::dataTable_CellClick);
			// 
			// CustomersListPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->noDataLabel);
			this->Controls->Add(this->dataTable);
			this->Controls->Add(panel1);
			this->Name = L"CustomersListPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1095, 803);
			this->Load += gcnew System::EventHandler(this, &CustomersListPage::CustomersListPage_Load);
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void addNewBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void CustomersListPage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void dataTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}

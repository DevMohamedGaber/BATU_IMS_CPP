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
		System::Windows::Forms::DataGridView^ dataTable;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->noDataLabel = (gcnew System::Windows::Forms::Label());
			header = (gcnew System::Windows::Forms::Label());
			panel1 = (gcnew System::Windows::Forms::Panel());
			addNewBtn = (gcnew System::Windows::Forms::Button());
			panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// header
			// 
			header->AutoSize = true;
			header->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			header->Location = System::Drawing::Point(3, 18);
			header->Name = L"header";
			header->Size = System::Drawing::Size(237, 46);
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
			panel1->Size = System::Drawing::Size(1027, 89);
			panel1->TabIndex = 2;
			// 
			// addNewBtn
			// 
			addNewBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			addNewBtn->BackColor = System::Drawing::Color::BlueViolet;
			addNewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addNewBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			addNewBtn->Location = System::Drawing::Point(738, 15);
			addNewBtn->Name = L"addNewBtn";
			addNewBtn->Size = System::Drawing::Size(275, 58);
			addNewBtn->TabIndex = 1;
			addNewBtn->Text = L"Add New Import";
			addNewBtn->UseVisualStyleBackColor = false;
			addNewBtn->Click += gcnew System::EventHandler(this, &ImportsListPage::addNewBtn_Click);
			// 
			// dataTable
			// 
			this->dataTable->AllowUserToAddRows = false;
			this->dataTable->AllowUserToDeleteRows = false;
			this->dataTable->AllowUserToOrderColumns = true;
			this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataTable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataTable->Location = System::Drawing::Point(30, 119);
			this->dataTable->Name = L"dataTable";
			this->dataTable->RowHeadersVisible = false;
			this->dataTable->RowHeadersWidth = 51;
			this->dataTable->RowTemplate->Height = 24;
			this->dataTable->ShowEditingIcon = false;
			this->dataTable->Size = System::Drawing::Size(1027, 652);
			this->dataTable->TabIndex = 3;
			this->dataTable->Visible = false;
			this->dataTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ImportsListPage::dataTable_CellClick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(30, 119);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->Size = System::Drawing::Size(1027, 652);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->Visible = false;
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
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->noDataLabel);
			this->Controls->Add(this->dataTable);
			this->Controls->Add(panel1);
			this->Name = L"ImportsListPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1087, 801);
			this->Load += gcnew System::EventHandler(this, &ImportsListPage::ImportsListPage_Load);
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void ImportsListPage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void addNewBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void dataTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	};
}

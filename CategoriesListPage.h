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
	private: System::Windows::Forms::DataGridView^ dataTable;



	private: System::Windows::Forms::Label^ noDataLabel;
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
			System::Windows::Forms::Button^ addNewBtn;
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->noDataLabel = (gcnew System::Windows::Forms::Label());
			headerlabel = (gcnew System::Windows::Forms::Label());
			addNewBtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->SuspendLayout();
			// 
			// headerlabel
			// 
			headerlabel->AutoSize = true;
			headerlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			headerlabel->Location = System::Drawing::Point(23, 29);
			headerlabel->Name = L"headerlabel";
			headerlabel->Size = System::Drawing::Size(192, 39);
			headerlabel->TabIndex = 0;
			headerlabel->Text = L"Categories";
			// 
			// addNewBtn
			// 
			addNewBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			addNewBtn->BackColor = System::Drawing::Color::Navy;
			addNewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addNewBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			addNewBtn->Location = System::Drawing::Point(882, 18);
			addNewBtn->Name = L"addNewBtn";
			addNewBtn->Size = System::Drawing::Size(227, 68);
			addNewBtn->TabIndex = 1;
			addNewBtn->Text = L"Add New Category";
			addNewBtn->UseVisualStyleBackColor = false;
			addNewBtn->Click += gcnew System::EventHandler(this, &CategoriesListPage::addNewBtn_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(addNewBtn);
			this->panel1->Controls->Add(headerlabel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(30, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1123, 100);
			this->panel1->TabIndex = 0;
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
			this->dataTable->Size = System::Drawing::Size(1123, 555);
			this->dataTable->TabIndex = 1;
			this->dataTable->Visible = false;
			this->dataTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CategoriesListPage::dataTable_CellClick);
			// 
			// noDataLabel
			// 
			this->noDataLabel->AutoSize = true;
			this->noDataLabel->BackColor = System::Drawing::Color::Transparent;
			this->noDataLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->noDataLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noDataLabel->Location = System::Drawing::Point(30, 130);
			this->noDataLabel->Name = L"noDataLabel";
			this->noDataLabel->Size = System::Drawing::Size(331, 39);
			this->noDataLabel->TabIndex = 2;
			this->noDataLabel->Text = L"No Data Found Here";
			this->noDataLabel->Visible = false;
			// 
			// CategoriesListPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->noDataLabel);
			this->Controls->Add(this->dataTable);
			this->Controls->Add(this->panel1);
			this->Name = L"CategoriesListPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1183, 715);
			this->Load += gcnew System::EventHandler(this, &CategoriesListPage::CategoriesListPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void addNewBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void CategoriesListPage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void dataTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	};
}

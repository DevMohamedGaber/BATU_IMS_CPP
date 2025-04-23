#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Views {

	/// <summary>
	/// Summary for ItemListPage
	/// </summary>
	public ref class ItemListPage : public System::Windows::Forms::UserControl
	{
	public:
		ItemListPage(void)
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
		~ItemListPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ addNewBtn;
	private: System::Windows::Forms::DataGridView^ dataTable;







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
			System::Windows::Forms::Label^ header;
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->addNewBtn = (gcnew System::Windows::Forms::Button());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			header = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->SuspendLayout();
			// 
			// header
			// 
			header->AutoSize = true;
			header->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			header->Location = System::Drawing::Point(3, 18);
			header->Name = L"header";
			header->Size = System::Drawing::Size(191, 46);
			header->TabIndex = 0;
			header->Text = L"Inventory";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->addNewBtn);
			this->panel1->Controls->Add(header);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(30, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1091, 89);
			this->panel1->TabIndex = 0;
			// 
			// addNewBtn
			// 
			this->addNewBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addNewBtn->BackColor = System::Drawing::Color::RoyalBlue;
			this->addNewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->addNewBtn->Location = System::Drawing::Point(846, 15);
			this->addNewBtn->Name = L"addNewBtn";
			this->addNewBtn->Size = System::Drawing::Size(231, 58);
			this->addNewBtn->TabIndex = 1;
			this->addNewBtn->Text = L"Add New Item";
			this->addNewBtn->UseVisualStyleBackColor = false;
			this->addNewBtn->Click += gcnew System::EventHandler(this, &ItemListPage::addNewBtn_Click);
			// 
			// dataTable
			// 
			this->dataTable->AllowUserToAddRows = false;
			this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataTable->Location = System::Drawing::Point(30, 119);
			this->dataTable->Name = L"dataTable";
			this->dataTable->RowHeadersVisible = false;
			this->dataTable->RowHeadersWidth = 51;
			this->dataTable->RowTemplate->Height = 24;
			this->dataTable->Size = System::Drawing::Size(1091, 665);
			this->dataTable->TabIndex = 1;
			// 
			// ItemListPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dataTable);
			this->Controls->Add(this->panel1);
			this->Name = L"ItemListPage";
			this->Padding = System::Windows::Forms::Padding(30);
			this->Size = System::Drawing::Size(1151, 814);
			this->Load += gcnew System::EventHandler(this, &ItemListPage::ItemListPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		System::Void ItemListPage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void addNewBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}

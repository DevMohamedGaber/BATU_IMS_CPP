#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Collections::Generic;


namespace Views {

	/// <summary>
	/// Summary for CustomTable
	/// </summary>
	public ref class CustomTable : public System::Windows::Forms::UserControl
	{
	public:
		CustomTable(void)
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
		~CustomTable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::FlowLayoutPanel^ headerPanel;
		System::Windows::Forms::FlowLayoutPanel^ bodyPanel;
		int currentRowIndex = 0;
		List<int>^ columnWidths = gcnew List<int>();
		List<String^>^ columnNames = gcnew List<String^>();

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
			this->headerPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->bodyPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// headerPanel
			// 
			this->headerPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->headerPanel->Location = System::Drawing::Point(0, 0);
			this->headerPanel->Name = L"headerPanel";
			this->headerPanel->Padding = System::Windows::Forms::Padding(30, 15, 30, 15);
			this->headerPanel->Size = System::Drawing::Size(1049, 82);
			this->headerPanel->TabIndex = 0;
			// 
			// bodyPanel
			// 
			this->bodyPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bodyPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->bodyPanel->Location = System::Drawing::Point(0, 82);
			this->bodyPanel->Name = L"bodyPanel";
			this->bodyPanel->Padding = System::Windows::Forms::Padding(30, 15, 30, 15);
			this->bodyPanel->Size = System::Drawing::Size(1049, 333);
			this->bodyPanel->TabIndex = 1;
			// 
			// CustomTable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->bodyPanel);
			this->Controls->Add(this->headerPanel);
			this->Name = L"CustomTable";
			this->Size = System::Drawing::Size(1049, 415);
			this->Load += gcnew System::EventHandler(this, &CustomTable::CustomTable_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		System::Void CustomTable_Load(System::Object^ sender, System::EventArgs^ e);
		void AddColumn(String^ name, int width);
		void AddRow();
		void AddCell(String^ name, int rowIndex, int columnIndex);
		Control^ AddButtonCell(String^ name, int rowIndex, int columnIndex);
		int GetRowCount();
	};
}

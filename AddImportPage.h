#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Views {

	/// <summary>
	/// Summary for AddImportPage
	/// </summary>
	public ref class AddImportPage : public System::Windows::Forms::UserControl
	{
	public:
		AddImportPage(void)
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
		~AddImportPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		System::Windows::Forms::ComboBox^ supplierInput;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;


	private: System::Windows::Forms::Label^ errorMsg;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;




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
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Panel^ panel1;
			System::Windows::Forms::Button^ addItemBtn;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Button^ addBtn;
			this->supplierInput = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->errorMsg = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			label1 = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			panel1 = (gcnew System::Windows::Forms::Panel());
			addItemBtn = (gcnew System::Windows::Forms::Button());
			label4 = (gcnew System::Windows::Forms::Label());
			addBtn = (gcnew System::Windows::Forms::Button());
			panel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(23, 16);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(314, 39);
			label1->TabIndex = 0;
			label1->Text = L"Register an Import";
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(30, 106);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(119, 29);
			label2->TabIndex = 1;
			label2->Text = L"Supplier:";
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->Location = System::Drawing::Point(30, 170);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(161, 29);
			label3->TabIndex = 3;
			label3->Text = L"Arrival Time:";
			// 
			// panel1
			// 
			panel1->Controls->Add(addItemBtn);
			panel1->Controls->Add(label4);
			panel1->Controls->Add(this->supplierInput);
			panel1->Controls->Add(this->dateTimePicker1);
			panel1->Controls->Add(label1);
			panel1->Controls->Add(label3);
			panel1->Controls->Add(label2);
			panel1->Dock = System::Windows::Forms::DockStyle::Top;
			panel1->Location = System::Drawing::Point(30, 30);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(1068, 290);
			panel1->TabIndex = 5;
			// 
			// addItemBtn
			// 
			addItemBtn->BackColor = System::Drawing::Color::SaddleBrown;
			addItemBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addItemBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			addItemBtn->Location = System::Drawing::Point(228, 227);
			addItemBtn->Margin = System::Windows::Forms::Padding(0);
			addItemBtn->Name = L"addItemBtn";
			addItemBtn->Size = System::Drawing::Size(151, 43);
			addItemBtn->TabIndex = 0;
			addItemBtn->Text = L"+ Add Item";
			addItemBtn->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->Location = System::Drawing::Point(16, 234);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(197, 29);
			label4->TabIndex = 5;
			label4->Text = L"Import Contents";
			// 
			// supplierInput
			// 
			this->supplierInput->DisplayMember = L"Name";
			this->supplierInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->supplierInput->FormattingEnabled = true;
			this->supplierInput->Location = System::Drawing::Point(260, 103);
			this->supplierInput->Name = L"supplierInput";
			this->supplierInput->Size = System::Drawing::Size(573, 37);
			this->supplierInput->TabIndex = 2;
			this->supplierInput->ValueMember = L"Id";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(260, 169);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(573, 30);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// addBtn
			// 
			addBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			addBtn->BackColor = System::Drawing::Color::OrangeRed;
			addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			addBtn->ForeColor = System::Drawing::SystemColors::Control;
			addBtn->Location = System::Drawing::Point(852, 755);
			addBtn->Name = L"addBtn";
			addBtn->Size = System::Drawing::Size(246, 52);
			addBtn->TabIndex = 1;
			addBtn->Text = L"Confirm Import";
			addBtn->UseVisualStyleBackColor = false;
			// 
			// errorMsg
			// 
			this->errorMsg->AutoSize = true;
			this->errorMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMsg->ForeColor = System::Drawing::Color::DarkRed;
			this->errorMsg->Location = System::Drawing::Point(25, 770);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(205, 25);
			this->errorMsg->TabIndex = 7;
			this->errorMsg->Text = L"Error Message Here";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->Controls->Add(this->flowLayoutPanel1);
			this->flowLayoutPanel2->Controls->Add(this->flowLayoutPanel3);
			this->flowLayoutPanel2->Controls->Add(this->flowLayoutPanel4);
			this->flowLayoutPanel2->Controls->Add(this->flowLayoutPanel5);
			this->flowLayoutPanel2->Controls->Add(this->flowLayoutPanel6);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->Location = System::Drawing::Point(30, 320);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(30, 10, 30, 10);
			this->flowLayoutPanel2->Size = System::Drawing::Size(1068, 409);
			this->flowLayoutPanel2->TabIndex = 9;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(33, 13);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(997, 100);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Location = System::Drawing::Point(33, 119);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(997, 100);
			this->flowLayoutPanel3->TabIndex = 1;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Location = System::Drawing::Point(33, 225);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(997, 100);
			this->flowLayoutPanel4->TabIndex = 1;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->Location = System::Drawing::Point(33, 331);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(997, 100);
			this->flowLayoutPanel5->TabIndex = 2;
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->Location = System::Drawing::Point(33, 437);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(997, 100);
			this->flowLayoutPanel6->TabIndex = 3;
			// 
			// AddImportPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->errorMsg);
			this->Controls->Add(addBtn);
			this->Controls->Add(panel1);
			this->Name = L"AddImportPage";
			this->Padding = System::Windows::Forms::Padding(30, 30, 30, 100);
			this->Size = System::Drawing::Size(1128, 829);
			this->Load += gcnew System::EventHandler(this, &AddImportPage::AddImportPage_Load);
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void AddImportPage_Load(System::Object^ sender, System::EventArgs^ e);
		Void supplierInput_KeyUp(Object^ sender, KeyEventArgs^ e);
	};
}

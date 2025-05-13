#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Views
{
	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public UserControl
	{
	public:
		HomePage(void)
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
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	protected:




	protected:

	protected:

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
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Panel^ panel1;
			System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Label^ label5;
			System::Windows::Forms::Label^ label6;
			System::Windows::Forms::Label^ label9;
			System::Windows::Forms::Label^ label10;
			System::Windows::Forms::Label^ label7;
			System::Windows::Forms::Label^ label8;
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			label1 = (gcnew System::Windows::Forms::Label());
			panel1 = (gcnew System::Windows::Forms::Panel());
			flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			label4 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			label5 = (gcnew System::Windows::Forms::Label());
			label6 = (gcnew System::Windows::Forms::Label());
			label9 = (gcnew System::Windows::Forms::Label());
			label10 = (gcnew System::Windows::Forms::Label());
			label7 = (gcnew System::Windows::Forms::Label());
			label8 = (gcnew System::Windows::Forms::Label());
			panel1->SuspendLayout();
			flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Dock = System::Windows::Forms::DockStyle::Top;
			label1->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			label1->Location = System::Drawing::Point(30, 30);
			label1->Name = L"label1";
			label1->Padding = System::Windows::Forms::Padding(0, 0, 0, 20);
			label1->Size = System::Drawing::Size(163, 57);
			label1->TabIndex = 0;
			label1->Text = L"Dashboard";
			// 
			// panel1
			// 
			panel1->BackColor = System::Drawing::Color::Transparent;
			panel1->Controls->Add(flowLayoutPanel1);
			panel1->Controls->Add(label1);
			panel1->Dock = System::Windows::Forms::DockStyle::Top;
			panel1->Location = System::Drawing::Point(0, 0);
			panel1->Name = L"panel1";
			panel1->Padding = System::Windows::Forms::Padding(30);
			panel1->Size = System::Drawing::Size(1885, 330);
			panel1->TabIndex = 1;
			// 
			// flowLayoutPanel1
			// 
			flowLayoutPanel1->Controls->Add(this->panel2);
			flowLayoutPanel1->Controls->Add(this->panel4);
			flowLayoutPanel1->Controls->Add(this->panel8);
			flowLayoutPanel1->Controls->Add(this->panel6);
			flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			flowLayoutPanel1->Location = System::Drawing::Point(30, 87);
			flowLayoutPanel1->Name = L"flowLayoutPanel1";
			flowLayoutPanel1->Padding = System::Windows::Forms::Padding(20);
			flowLayoutPanel1->Size = System::Drawing::Size(1825, 213);
			flowLayoutPanel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(label4);
			this->panel2->Controls->Add(label3);
			this->panel2->Location = System::Drawing::Point(23, 23);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(330, 150);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(20, 49);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(50, 50);
			this->panel3->TabIndex = 2;
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->BackColor = System::Drawing::Color::Transparent;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->ForeColor = System::Drawing::Color::White;
			label4->Location = System::Drawing::Point(90, 83);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(94, 31);
			label4->TabIndex = 1;
			label4->Text = L"99999";
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->BackColor = System::Drawing::Color::Transparent;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->ForeColor = System::Drawing::Color::White;
			label3->Location = System::Drawing::Point(91, 32);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(183, 29);
			label3->TabIndex = 0;
			label3->Text = L"Total Products";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(label5);
			this->panel4->Controls->Add(label6);
			this->panel4->Location = System::Drawing::Point(396, 23);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(330, 150);
			this->panel4->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(20, 49);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(50, 50);
			this->panel5->TabIndex = 2;
			// 
			// label5
			// 
			label5->AutoSize = true;
			label5->BackColor = System::Drawing::Color::Transparent;
			label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label5->ForeColor = System::Drawing::Color::White;
			label5->Location = System::Drawing::Point(90, 83);
			label5->Name = L"label5";
			label5->Size = System::Drawing::Size(94, 31);
			label5->TabIndex = 1;
			label5->Text = L"99999";
			// 
			// label6
			// 
			label6->AutoSize = true;
			label6->BackColor = System::Drawing::Color::Transparent;
			label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label6->ForeColor = System::Drawing::Color::White;
			label6->Location = System::Drawing::Point(91, 32);
			label6->Name = L"label6";
			label6->Size = System::Drawing::Size(183, 29);
			label6->TabIndex = 0;
			label6->Text = L"Total Products";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Controls->Add(label9);
			this->panel8->Controls->Add(label10);
			this->panel8->Location = System::Drawing::Point(769, 23);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(330, 150);
			this->panel8->TabIndex = 5;
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel9->Location = System::Drawing::Point(20, 49);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(50, 50);
			this->panel9->TabIndex = 2;
			// 
			// label9
			// 
			label9->AutoSize = true;
			label9->BackColor = System::Drawing::Color::Transparent;
			label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label9->ForeColor = System::Drawing::Color::White;
			label9->Location = System::Drawing::Point(90, 83);
			label9->Name = L"label9";
			label9->Size = System::Drawing::Size(94, 31);
			label9->TabIndex = 1;
			label9->Text = L"99999";
			// 
			// label10
			// 
			label10->AutoSize = true;
			label10->BackColor = System::Drawing::Color::Transparent;
			label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label10->ForeColor = System::Drawing::Color::White;
			label10->Location = System::Drawing::Point(91, 32);
			label10->Name = L"label10";
			label10->Size = System::Drawing::Size(183, 29);
			label10->TabIndex = 0;
			label10->Text = L"Total Products";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(label7);
			this->panel6->Controls->Add(label8);
			this->panel6->Location = System::Drawing::Point(1142, 23);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(330, 150);
			this->panel6->TabIndex = 4;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Location = System::Drawing::Point(20, 49);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(50, 50);
			this->panel7->TabIndex = 2;
			// 
			// label7
			// 
			label7->AutoSize = true;
			label7->BackColor = System::Drawing::Color::Transparent;
			label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label7->ForeColor = System::Drawing::Color::White;
			label7->Location = System::Drawing::Point(90, 83);
			label7->Name = L"label7";
			label7->Size = System::Drawing::Size(94, 31);
			label7->TabIndex = 1;
			label7->Text = L"99999";
			// 
			// label8
			// 
			label8->AutoSize = true;
			label8->BackColor = System::Drawing::Color::Transparent;
			label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label8->ForeColor = System::Drawing::Color::White;
			label8->Location = System::Drawing::Point(91, 32);
			label8->Name = L"label8";
			label8->Size = System::Drawing::Size(183, 29);
			label8->TabIndex = 0;
			label8->Text = L"Total Products";
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(panel1);
			this->Name = L"HomePage";
			this->Size = System::Drawing::Size(1885, 781);
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

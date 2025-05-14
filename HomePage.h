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
	private: 
		System::Windows::Forms::Label^ totalProductsCountLabel;
		System::Windows::Forms::Label^ lowStockCountLabel;
		System::Windows::Forms::Label^ outOfStockCountLabel;
		System::Windows::Forms::Label^ suppliersCountLabel;
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
			System::Windows::Forms::Panel^ panel2;
			System::Windows::Forms::Panel^ panel3;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Panel^ panel4;
			System::Windows::Forms::Panel^ panel5;
			System::Windows::Forms::Label^ label6;
			System::Windows::Forms::Panel^ panel8;
			System::Windows::Forms::Panel^ panel9;
			System::Windows::Forms::Label^ label10;
			System::Windows::Forms::Panel^ panel6;
			System::Windows::Forms::Panel^ panel7;
			System::Windows::Forms::Label^ label8;
			this->totalProductsCountLabel = (gcnew System::Windows::Forms::Label());
			this->lowStockCountLabel = (gcnew System::Windows::Forms::Label());
			this->outOfStockCountLabel = (gcnew System::Windows::Forms::Label());
			this->suppliersCountLabel = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			panel1 = (gcnew System::Windows::Forms::Panel());
			flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			panel2 = (gcnew System::Windows::Forms::Panel());
			panel3 = (gcnew System::Windows::Forms::Panel());
			label3 = (gcnew System::Windows::Forms::Label());
			panel4 = (gcnew System::Windows::Forms::Panel());
			panel5 = (gcnew System::Windows::Forms::Panel());
			label6 = (gcnew System::Windows::Forms::Label());
			panel8 = (gcnew System::Windows::Forms::Panel());
			panel9 = (gcnew System::Windows::Forms::Panel());
			label10 = (gcnew System::Windows::Forms::Label());
			panel6 = (gcnew System::Windows::Forms::Panel());
			panel7 = (gcnew System::Windows::Forms::Panel());
			label8 = (gcnew System::Windows::Forms::Label());
			panel1->SuspendLayout();
			flowLayoutPanel1->SuspendLayout();
			panel2->SuspendLayout();
			panel4->SuspendLayout();
			panel8->SuspendLayout();
			panel6->SuspendLayout();
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
			flowLayoutPanel1->Controls->Add(panel2);
			flowLayoutPanel1->Controls->Add(panel4);
			flowLayoutPanel1->Controls->Add(panel8);
			flowLayoutPanel1->Controls->Add(panel6);
			flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			flowLayoutPanel1->Location = System::Drawing::Point(30, 87);
			flowLayoutPanel1->Name = L"flowLayoutPanel1";
			flowLayoutPanel1->Padding = System::Windows::Forms::Padding(20);
			flowLayoutPanel1->Size = System::Drawing::Size(1825, 213);
			flowLayoutPanel1->TabIndex = 1;
			// 
			// panel2
			// 
			panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			panel2->Controls->Add(panel3);
			panel2->Controls->Add(this->totalProductsCountLabel);
			panel2->Controls->Add(label3);
			panel2->Location = System::Drawing::Point(23, 23);
			panel2->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			panel2->Name = L"panel2";
			panel2->Size = System::Drawing::Size(330, 150);
			panel2->TabIndex = 0;
			// 
			// panel3
			// 
			panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel3->Location = System::Drawing::Point(20, 49);
			panel3->Name = L"panel3";
			panel3->Size = System::Drawing::Size(50, 50);
			panel3->TabIndex = 2;
			// 
			// totalProductsCountLabel
			// 
			this->totalProductsCountLabel->AutoSize = true;
			this->totalProductsCountLabel->BackColor = System::Drawing::Color::Transparent;
			this->totalProductsCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->totalProductsCountLabel->ForeColor = System::Drawing::Color::White;
			this->totalProductsCountLabel->Location = System::Drawing::Point(90, 83);
			this->totalProductsCountLabel->Name = L"totalProductsCountLabel";
			this->totalProductsCountLabel->Size = System::Drawing::Size(46, 31);
			this->totalProductsCountLabel->TabIndex = 1;
			this->totalProductsCountLabel->Text = L"10";
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
			panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			panel4->Controls->Add(panel5);
			panel4->Controls->Add(this->lowStockCountLabel);
			panel4->Controls->Add(label6);
			panel4->Location = System::Drawing::Point(396, 23);
			panel4->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			panel4->Name = L"panel4";
			panel4->Size = System::Drawing::Size(330, 150);
			panel4->TabIndex = 3;
			// 
			// panel5
			// 
			panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel5->Location = System::Drawing::Point(20, 49);
			panel5->Name = L"panel5";
			panel5->Size = System::Drawing::Size(50, 50);
			panel5->TabIndex = 2;
			// 
			// lowStockCountLabel
			// 
			this->lowStockCountLabel->AutoSize = true;
			this->lowStockCountLabel->BackColor = System::Drawing::Color::Transparent;
			this->lowStockCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lowStockCountLabel->ForeColor = System::Drawing::Color::Coral;
			this->lowStockCountLabel->Location = System::Drawing::Point(90, 83);
			this->lowStockCountLabel->Name = L"lowStockCountLabel";
			this->lowStockCountLabel->Size = System::Drawing::Size(30, 31);
			this->lowStockCountLabel->TabIndex = 1;
			this->lowStockCountLabel->Text = L"2";
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
			label6->Size = System::Drawing::Size(133, 29);
			label6->TabIndex = 0;
			label6->Text = L"Low Stock";
			// 
			// panel8
			// 
			panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			panel8->Controls->Add(panel9);
			panel8->Controls->Add(this->outOfStockCountLabel);
			panel8->Controls->Add(label10);
			panel8->Location = System::Drawing::Point(769, 23);
			panel8->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			panel8->Name = L"panel8";
			panel8->Size = System::Drawing::Size(330, 150);
			panel8->TabIndex = 5;
			// 
			// panel9
			// 
			panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel9->Location = System::Drawing::Point(20, 49);
			panel9->Name = L"panel9";
			panel9->Size = System::Drawing::Size(50, 50);
			panel9->TabIndex = 2;
			// 
			// outOfStockCountLabel
			// 
			this->outOfStockCountLabel->AutoSize = true;
			this->outOfStockCountLabel->BackColor = System::Drawing::Color::Transparent;
			this->outOfStockCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outOfStockCountLabel->ForeColor = System::Drawing::Color::Brown;
			this->outOfStockCountLabel->Location = System::Drawing::Point(90, 83);
			this->outOfStockCountLabel->Name = L"outOfStockCountLabel";
			this->outOfStockCountLabel->Size = System::Drawing::Size(30, 31);
			this->outOfStockCountLabel->TabIndex = 1;
			this->outOfStockCountLabel->Text = L"5";
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
			label10->Size = System::Drawing::Size(155, 29);
			label10->TabIndex = 0;
			label10->Text = L"Out of Stock";
			// 
			// panel6
			// 
			panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			panel6->Controls->Add(panel7);
			panel6->Controls->Add(this->suppliersCountLabel);
			panel6->Controls->Add(label8);
			panel6->Location = System::Drawing::Point(1142, 23);
			panel6->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			panel6->Name = L"panel6";
			panel6->Size = System::Drawing::Size(330, 150);
			panel6->TabIndex = 4;
			// 
			// panel7
			// 
			panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			panel7->Location = System::Drawing::Point(20, 49);
			panel7->Name = L"panel7";
			panel7->Size = System::Drawing::Size(50, 50);
			panel7->TabIndex = 2;
			// 
			// suppliersCountLabel
			// 
			this->suppliersCountLabel->AutoSize = true;
			this->suppliersCountLabel->BackColor = System::Drawing::Color::Transparent;
			this->suppliersCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->suppliersCountLabel->ForeColor = System::Drawing::Color::White;
			this->suppliersCountLabel->Location = System::Drawing::Point(90, 83);
			this->suppliersCountLabel->Name = L"suppliersCountLabel";
			this->suppliersCountLabel->Size = System::Drawing::Size(30, 31);
			this->suppliersCountLabel->TabIndex = 1;
			this->suppliersCountLabel->Text = L"2";
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
			label8->Size = System::Drawing::Size(125, 29);
			label8->TabIndex = 0;
			label8->Text = L"Suppliers";
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(panel1);
			this->Name = L"HomePage";
			this->Size = System::Drawing::Size(1885, 781);
			this->Load += gcnew System::EventHandler(this, &HomePage::HomePage_Load);
			panel1->ResumeLayout(false);
			panel1->PerformLayout();
			flowLayoutPanel1->ResumeLayout(false);
			panel2->ResumeLayout(false);
			panel2->PerformLayout();
			panel4->ResumeLayout(false);
			panel4->PerformLayout();
			panel8->ResumeLayout(false);
			panel8->PerformLayout();
			panel6->ResumeLayout(false);
			panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Void HomePage_Load(System::Object^ sender, System::EventArgs^ e);
	};
}

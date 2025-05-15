#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Windows::Forms::DataVisualization::Charting;

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
		System::Windows::Forms::Label^ valueOfStockLabel;
		Chart^ transactionsChart;

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
			System::Windows::Forms::Panel^ panel10;
			System::Windows::Forms::Panel^ panel12;
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::Panel^ panel13;
			System::Windows::Forms::ComboBox^ Sales;
			System::Windows::Forms::Label^ label5;
			System::Windows::Forms::Panel^ panel11;
			System::Windows::Forms::Panel^ panel14;
			System::Windows::Forms::Label^ label2;
			this->totalProductsCountLabel = (gcnew System::Windows::Forms::Label());
			this->lowStockCountLabel = (gcnew System::Windows::Forms::Label());
			this->outOfStockCountLabel = (gcnew System::Windows::Forms::Label());
			this->suppliersCountLabel = (gcnew System::Windows::Forms::Label());
			this->transactionsChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->valueOfStockLabel = (gcnew System::Windows::Forms::Label());
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
			panel10 = (gcnew System::Windows::Forms::Panel());
			panel12 = (gcnew System::Windows::Forms::Panel());
			panel13 = (gcnew System::Windows::Forms::Panel());
			Sales = (gcnew System::Windows::Forms::ComboBox());
			label5 = (gcnew System::Windows::Forms::Label());
			panel11 = (gcnew System::Windows::Forms::Panel());
			panel14 = (gcnew System::Windows::Forms::Panel());
			label2 = (gcnew System::Windows::Forms::Label());
			panel1->SuspendLayout();
			flowLayoutPanel1->SuspendLayout();
			panel2->SuspendLayout();
			panel4->SuspendLayout();
			panel8->SuspendLayout();
			panel6->SuspendLayout();
			panel10->SuspendLayout();
			panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->transactionsChart))->BeginInit();
			panel13->SuspendLayout();
			panel11->SuspendLayout();
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
			panel1->Size = System::Drawing::Size(1711, 330);
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
			flowLayoutPanel1->Size = System::Drawing::Size(1651, 213);
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
			panel2->Size = System::Drawing::Size(340, 150);
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
			panel4->Location = System::Drawing::Point(406, 23);
			panel4->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			panel4->Name = L"panel4";
			panel4->Size = System::Drawing::Size(340, 150);
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
			panel8->Location = System::Drawing::Point(789, 23);
			panel8->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			panel8->Name = L"panel8";
			panel8->Size = System::Drawing::Size(340, 150);
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
			panel6->Location = System::Drawing::Point(1172, 23);
			panel6->Margin = System::Windows::Forms::Padding(3, 3, 40, 3);
			panel6->Name = L"panel6";
			panel6->Size = System::Drawing::Size(340, 150);
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
			// panel10
			// 
			panel10->Controls->Add(panel12);
			panel10->Controls->Add(panel11);
			panel10->Dock = System::Windows::Forms::DockStyle::Top;
			panel10->Location = System::Drawing::Point(0, 330);
			panel10->Name = L"panel10";
			panel10->Padding = System::Windows::Forms::Padding(30);
			panel10->Size = System::Drawing::Size(1711, 654);
			panel10->TabIndex = 2;
			// 
			// panel12
			// 
			panel12->Controls->Add(this->transactionsChart);
			panel12->Controls->Add(panel13);
			panel12->Dock = System::Windows::Forms::DockStyle::Fill;
			panel12->Location = System::Drawing::Point(430, 30);
			panel12->Name = L"panel12";
			panel12->Padding = System::Windows::Forms::Padding(20, 0, 20, 0);
			panel12->Size = System::Drawing::Size(1251, 594);
			panel12->TabIndex = 2;
			// 
			// transactionsChart
			// 
			this->transactionsChart->BackColor = System::Drawing::Color::Transparent;
			this->transactionsChart->BorderlineColor = System::Drawing::Color::SlateBlue;
			chartArea1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			chartArea1->Name = L"ChartArea1";
			this->transactionsChart->ChartAreas->Add(chartArea1);
			this->transactionsChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->transactionsChart->Legends->Add(legend1);
			this->transactionsChart->Location = System::Drawing::Point(20, 100);
			this->transactionsChart->Name = L"transactionsChart";
			this->transactionsChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->transactionsChart->Series->Add(series1);
			this->transactionsChart->Size = System::Drawing::Size(1211, 494);
			this->transactionsChart->TabIndex = 1;
			// 
			// panel13
			// 
			panel13->Controls->Add(Sales);
			panel13->Controls->Add(label5);
			panel13->Dock = System::Windows::Forms::DockStyle::Top;
			panel13->Location = System::Drawing::Point(20, 0);
			panel13->Name = L"panel13";
			panel13->Size = System::Drawing::Size(1211, 100);
			panel13->TabIndex = 2;
			// 
			// Sales
			// 
			Sales->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			Sales->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			Sales->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			Sales->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			Sales->FormattingEnabled = true;
			Sales->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Annually", L"Biannual", L"Quarterly", L"Monthly", L"Weekly" });
			Sales->Location = System::Drawing::Point(1005, 34);
			Sales->Name = L"Sales";
			Sales->Size = System::Drawing::Size(175, 28);
			Sales->TabIndex = 4;
			Sales->Text = L"Annually";
			Sales->SelectedIndexChanged += gcnew System::EventHandler(this, &HomePage::Sales_SelectedIndexChanged);
			// 
			// label5
			// 
			label5->AutoSize = true;
			label5->BackColor = System::Drawing::Color::Transparent;
			label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			label5->Location = System::Drawing::Point(29, 34);
			label5->Name = L"label5";
			label5->Size = System::Drawing::Size(283, 31);
			label5->TabIndex = 3;
			label5->Text = L"Transactions Statistics";
			// 
			// panel11
			// 
			panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			panel11->Controls->Add(panel14);
			panel11->Controls->Add(this->valueOfStockLabel);
			panel11->Controls->Add(label2);
			panel11->Dock = System::Windows::Forms::DockStyle::Left;
			panel11->Location = System::Drawing::Point(30, 30);
			panel11->Name = L"panel11";
			panel11->Size = System::Drawing::Size(400, 594);
			panel11->TabIndex = 0;
			// 
			// panel14
			// 
			panel14->BackColor = System::Drawing::Color::White;
			panel14->Location = System::Drawing::Point(25, 179);
			panel14->Name = L"panel14";
			panel14->Size = System::Drawing::Size(350, 3);
			panel14->TabIndex = 2;
			// 
			// valueOfStockLabel
			// 
			this->valueOfStockLabel->AutoSize = true;
			this->valueOfStockLabel->BackColor = System::Drawing::Color::Transparent;
			this->valueOfStockLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->valueOfStockLabel->ForeColor = System::Drawing::Color::White;
			this->valueOfStockLabel->Location = System::Drawing::Point(50, 95);
			this->valueOfStockLabel->Name = L"valueOfStockLabel";
			this->valueOfStockLabel->Size = System::Drawing::Size(142, 36);
			this->valueOfStockLabel->TabIndex = 1;
			this->valueOfStockLabel->Text = L"$ 999999";
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->BackColor = System::Drawing::Color::Transparent;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->ForeColor = System::Drawing::Color::White;
			label2->Location = System::Drawing::Point(50, 44);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(188, 31);
			label2->TabIndex = 0;
			label2->Text = L"Value of Stock";
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(panel10);
			this->Controls->Add(panel1);
			this->Name = L"HomePage";
			this->Size = System::Drawing::Size(1711, 1072);
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
			panel10->ResumeLayout(false);
			panel12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->transactionsChart))->EndInit();
			panel13->ResumeLayout(false);
			panel13->PerformLayout();
			panel11->ResumeLayout(false);
			panel11->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Void HomePage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void UpdateChart(System::Collections::Generic::Dictionary<System::String^, System::Tuple<int, int>^>^ data);
		System::Void Sales_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	};
}

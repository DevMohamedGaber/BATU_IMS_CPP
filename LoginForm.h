#pragma once
#include "LoginController.h"
#include "DashboardForm.h"
#include "Utilities.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Controllers;
using namespace Core;

namespace Views {
	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: 
		System::Windows::Forms::TextBox^ usernameInput;
		System::Windows::Forms::TextBox^ passwordInput;
		System::Windows::Forms::Label^ errorBox;
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
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Button^ LoginBtn;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Button^ ExitBtn;
			System::Windows::Forms::Label^ label4;
			this->usernameInput = (gcnew System::Windows::Forms::TextBox());
			this->errorBox = (gcnew System::Windows::Forms::Label());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			label2 = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			LoginBtn = (gcnew System::Windows::Forms::Button());
			label3 = (gcnew System::Windows::Forms::Label());
			ExitBtn = (gcnew System::Windows::Forms::Button());
			label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->BackColor = System::Drawing::Color::Transparent;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			label2->Location = System::Drawing::Point(186, 215);
			label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(110, 25);
			label2->TabIndex = 1;
			label2->Text = L"Username";
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->BackColor = System::Drawing::Color::Transparent;
			label1->Font = (gcnew System::Drawing::Font(L"Montserrat Subrayada", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			label1->Location = System::Drawing::Point(13, 27);
			label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(594, 33);
			label1->TabIndex = 0;
			label1->Text = L"BATU Inventory Management System";
			// 
			// LoginBtn
			// 
			LoginBtn->BackColor = System::Drawing::Color::Maroon;
			LoginBtn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			LoginBtn->FlatAppearance->BorderSize = 0;
			LoginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			LoginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			LoginBtn->Location = System::Drawing::Point(191, 473);
			LoginBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			LoginBtn->Name = L"LoginBtn";
			LoginBtn->Size = System::Drawing::Size(205, 55);
			LoginBtn->TabIndex = 6;
			LoginBtn->Text = L"Sign In";
			LoginBtn->UseVisualStyleBackColor = false;
			LoginBtn->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->BackColor = System::Drawing::Color::Transparent;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			label3->Location = System::Drawing::Point(186, 343);
			label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(106, 25);
			label3->TabIndex = 9;
			label3->Text = L"Password";
			// 
			// ExitBtn
			// 
			ExitBtn->BackColor = System::Drawing::Color::Transparent;
			ExitBtn->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			ExitBtn->FlatAppearance->BorderSize = 2;
			ExitBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			ExitBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			ExitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			ExitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			ExitBtn->ForeColor = System::Drawing::Color::Maroon;
			ExitBtn->Location = System::Drawing::Point(424, 473);
			ExitBtn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			ExitBtn->Name = L"ExitBtn";
			ExitBtn->Size = System::Drawing::Size(205, 55);
			ExitBtn->TabIndex = 12;
			ExitBtn->Text = L"Exit";
			ExitBtn->UseVisualStyleBackColor = false;
			ExitBtn->Click += gcnew System::EventHandler(this, &LoginForm::ExitBtn_Click);
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->BackColor = System::Drawing::Color::Transparent;
			label4->Font = (gcnew System::Drawing::Font(L"Orbitron", 20, System::Drawing::FontStyle::Bold));
			label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			label4->Location = System::Drawing::Point(179, 147);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(142, 41);
			label4->TabIndex = 7;
			label4->Text = L"Sign In";
			// 
			// usernameInput
			// 
			this->usernameInput->BackColor = System::Drawing::Color::SlateGray;
			this->usernameInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameInput->ForeColor = System::Drawing::Color::White;
			this->usernameInput->Location = System::Drawing::Point(191, 261);
			this->usernameInput->Margin = System::Windows::Forms::Padding(0);
			this->usernameInput->MaximumSize = System::Drawing::Size(438, 50);
			this->usernameInput->MinimumSize = System::Drawing::Size(438, 50);
			this->usernameInput->Name = L"usernameInput";
			this->usernameInput->Size = System::Drawing::Size(438, 50);
			this->usernameInput->TabIndex = 2;
			this->usernameInput->Text = L"admin";
			this->usernameInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// errorBox
			// 
			this->errorBox->AutoSize = true;
			this->errorBox->BackColor = System::Drawing::Color::Transparent;
			this->errorBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorBox->ForeColor = System::Drawing::Color::Maroon;
			this->errorBox->Location = System::Drawing::Point(187, 552);
			this->errorBox->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->errorBox->MaximumSize = System::Drawing::Size(688, 0);
			this->errorBox->Name = L"errorBox";
			this->errorBox->Size = System::Drawing::Size(180, 20);
			this->errorBox->TabIndex = 5;
			this->errorBox->Text = L"Error Message Here";
			// 
			// passwordInput
			// 
			this->passwordInput->BackColor = System::Drawing::Color::SlateGray;
			this->passwordInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordInput->ForeColor = System::Drawing::Color::White;
			this->passwordInput->Location = System::Drawing::Point(191, 380);
			this->passwordInput->Margin = System::Windows::Forms::Padding(0);
			this->passwordInput->MaximumSize = System::Drawing::Size(438, 50);
			this->passwordInput->MinimumSize = System::Drawing::Size(438, 50);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->PasswordChar = '*';
			this->passwordInput->Size = System::Drawing::Size(438, 50);
			this->passwordInput->TabIndex = 10;
			this->passwordInput->Text = L"admin";
			this->passwordInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(848, 634);
			this->Controls->Add(ExitBtn);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(label3);
			this->Controls->Add(label4);
			this->Controls->Add(LoginBtn);
			this->Controls->Add(this->errorBox);
			this->Controls->Add(this->usernameInput);
			this->Controls->Add(label2);
			this->Controls->Add(label1);
			this->Font = (gcnew System::Drawing::Font(L"Orbitron", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BATU - Inventory Management System";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = usernameInput->Text;
		String^ password = passwordInput->Text;

		String^ result = LoginController::Login(username, password);

		if (result != nullptr)
		{
			errorBox->ForeColor = System::Drawing::Color::IndianRed;
			errorBox->Text = result;
		}

		// close this form and show DashboardForm
		this->Hide();
		DashboardForm::Start();
		this->Close();
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		errorBox->Text = "";

	}
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}

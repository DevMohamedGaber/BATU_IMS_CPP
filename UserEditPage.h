#pragma once
#include "User.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Models;

namespace Views {

	/// <summary>
	/// Summary for UserEditPage
	/// </summary>
	public ref class UserEditPage : public System::Windows::Forms::UserControl
	{
	public:
		UserEditPage(User^ user);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserEditPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		User^ user;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// UserEditPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"UserEditPage";
			this->Size = System::Drawing::Size(1120, 823);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

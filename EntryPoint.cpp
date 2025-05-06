#include "LoginForm.h"
#include "DatabaseConnection.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Models;
using namespace std;

namespace Views
{
	void EntryPoint()
	{
		DatabaseConnection::Start("IMS_SQLite_Database.db");

		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		LoginForm form;
		Application::Run(% form);
	}
}


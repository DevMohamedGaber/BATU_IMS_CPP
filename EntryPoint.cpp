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
		DatabaseConnection::Start("Database_IMS_SQLite.db");

		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		LoginForm form;
		Application::Run(% form);
	}
}


#include "DatabaseConnection.h"
#include "Utilities.h"
#include "Role.h"
#include <vector>
using namespace System;
using namespace Core;
using namespace std;

namespace Models
{
	public ref class User
	{
	public: static User^ CurrentUser = nullptr;

	public:
		// properties
		long Id;
		String^ FirstName;
		String^ LastName;
		String^ Username;
		String^ Password;
		String^ Email;
		Role^ Role;

		// methods
		static User^ GetUserByUsername(String^ username)
		{
			string sql = "SELECT * FROM Users WHERE Username = '" + Utilities::GetNativeString(username) + "'";
			vector<vector<string>> rows = DatabaseConnection::Instance->Query(sql);

			if (rows.empty() || rows[0].empty()) {
				return nullptr;
			}

			return Map(rows[0]);
		}

		// helper methods
	private:
		static User^ Map(const vector<string>& row)
		{
			User^ user = gcnew User();
			user->Id = row[0].empty() ? 0 : stol(row[0]);
			user->Username = gcnew String(row[1].c_str());
			user->FirstName = gcnew String(row[2].c_str());
			user->LastName = gcnew String(row[3].c_str());
			user->Password = gcnew String(row[4].c_str());
			user->Email = gcnew String(row[5].c_str());
			user->Role = static_cast<Core::Role>(stoi(row[6]));
			return user;
		}

	};
}
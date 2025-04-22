#include "DatabaseConnection.h"
#include "Utilities.h"
#include "User.h"
#include <vector>
using namespace System;
using namespace std;

namespace Models
{
	public ref class Users sealed
	{
	public: static User^ CurrentUser = nullptr;

	public:

		// methods
		static User^ GetUserByUsername(String^ username)
		{
			string sql = "SELECT * FROM Users WHERE Username = '" + Utilities::GetNativeString(username) + "'";
			auto rows = DatabaseConnection::Instance->Query(sql);

			if (rows.empty() || rows[0].empty()) {
				return nullptr;
			}

			return User::Map(rows[0]);
		}
	};
}
#include "Users.h"
#include "DatabaseConnection.h"
#include "Utilities.h"
using namespace System;
using namespace std;

namespace Models
{
	List<User^>^ Users::GetAll() {
		string sql = "SELECT * FROM Users";
		auto rows = DatabaseConnection::Instance->Query(sql);
		List<User^>^ users = gcnew List<User^>();
		for (auto row : rows) {
			if (row.empty()) {
				continue;
			}
			users->Add(User::Map(row));
		}
		return users;
	}
	User^ Users::GetByUsername(String^ username)
	{
		string sql = "SELECT * FROM Users WHERE Username = '" + Utilities::GetNativeString(username) + "'";
		auto rows = DatabaseConnection::Instance->Query(sql);

		if (rows.empty() || rows[0].empty()) {
			return nullptr;
		}

		return User::Map(rows[0]);
	}
	User^ Users::GetById(int id)
	{
		string sql = "SELECT * FROM Users WHERE Id = " + to_string(id);
		auto rows = DatabaseConnection::Instance->Query(sql);
		if (rows.empty() || rows[0].empty()) {
			return nullptr;
		}
		return User::Map(rows[0]);
	}
	// implement insert method
	bool Users::Insert(String^ FirstName, String^ LastName, String^ Username, String^ Password, String^ Email, int RoleId)
	{
		string sql = "INSERT INTO Users (FirstName, LastName, Username, Password, Email, Role) VALUES ('" +
			Utilities::GetNativeString(FirstName) + "', '" +
			Utilities::GetNativeString(LastName) + "', '" +
			Utilities::GetNativeString(Username) + "', '" +
			Utilities::GetNativeString(Password) + "', '" +
			Utilities::GetNativeString(Email) + "', " +
            to_string(RoleId) + ")";
		return DatabaseConnection::Instance->Execute(sql);
	}
	bool Users::Update(User^ user)
	{
		int roleValue = Convert::ToInt32(user->Role);
		string sql = "UPDATE Users SET FirstName = '" + Utilities::GetNativeString(user->FirstName) +
			"', LastName = '" + Utilities::GetNativeString(user->LastName) +
			"', Username = '" + Utilities::GetNativeString(user->Username) +
			"', Email = '" + Utilities::GetNativeString(user->Email) +
			"', Role = " + to_string(roleValue) +
			" WHERE Id = " + to_string(user->Id);
		return DatabaseConnection::Instance->Execute(sql);
	}
	void Users::Delete(int id)
	{
		string sql = "DELETE FROM Users WHERE Id = " + to_string(id);
		DatabaseConnection::Instance->Execute(sql);
	}
	bool Users::Exists(String^ Name)
	{
		string sql = "SELECT COUNT(*) FROM Users WHERE Username = '" + Utilities::GetNativeString(Name) + "'";
		auto rows = DatabaseConnection::Instance->Query(sql);
		return !rows.empty() && !rows[0].empty();
	}
}
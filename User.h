#pragma once
#include "UserRole.h"
#include <string>
#include <vector>
using namespace System;
using namespace Core;
using namespace std;

namespace Models
{
	public ref struct User
	{
		long Id;
		String^ FirstName;
		String^ LastName;
		String^ Username;
		String^ Password;
		String^ Email;
		UserRole^ Role;

		static User^ Map(const vector<string>& row)
		{
			User^ user = gcnew User();
			user->Id = row[0].empty() ? 0 : stol(row[0]);
			user->Username = gcnew String(row[1].c_str());
			user->FirstName = gcnew String(row[2].c_str());
			user->LastName = gcnew String(row[3].c_str());
			user->Password = gcnew String(row[4].c_str());
			user->Email = gcnew String(row[5].c_str());
			user->Role = static_cast<Core::UserRole>(stoi(row[6]));
			return user;
		}
		static User^ MapWithoutPassword(const vector<string>& row)
		{
			User^ user = gcnew User();
			user->Id = row[0].empty() ? 0 : stol(row[0]);
			user->Username = gcnew String(row[1].c_str());
			user->FirstName = gcnew String(row[2].c_str());
			user->LastName = gcnew String(row[3].c_str());
			user->Email = gcnew String(row[4].c_str());
			user->Role = static_cast<Core::UserRole>(stoi(row[5]));
			return user;
		}
		static User^ MapForOrder(const vector<string>& row)
		{
			User^ user = gcnew User();
			user->Id = row[0].empty() ? 0 : stol(row[0]);
			user->FirstName = gcnew String(row[1].c_str());
			user->LastName = gcnew String(row[2].c_str());
			return user;
		}
	};
}
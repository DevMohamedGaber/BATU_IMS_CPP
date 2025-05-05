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

		String^ GetFullName()
		{
			String^ result = nullptr;
			if (FirstName != nullptr)
			{
				result = FirstName;
			}
			if (LastName != nullptr)
			{
				if (!result->IsNullOrEmpty(result))
				{
					result += " ";
				}
				result += LastName;
			}
			if (result == nullptr) {
				result = Role->ToString() + " #" + Id;
			}
			return result;
		}

		static User^ Map(const vector<string>& row)
		{
			User^ user = gcnew User();
			user->Id = row[0].empty() ? 0 : stol(row[0]);
			user->Username = gcnew String(row[1].c_str());
			user->SetName(row[2], row[3]);
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
			user->SetName(row[2], row[3]);
			user->Email = gcnew String(row[4].c_str());
			user->Role = static_cast<Core::UserRole>(stoi(row[5]));
			return user;
		}
		static User^ MapForOrder(const vector<string>& row)
		{
			User^ user = gcnew User();
			user->Id = row[0].empty() ? 0 : stol(row[0]);
			user->SetName(row[1], row[2]);
			return user;
		}
	private:
		void SetName(string firstname, string lastname) {
			this->FirstName = firstname == "NULL" ? nullptr : gcnew String(firstname.c_str());
			this->LastName = lastname == "NULL" ? nullptr : gcnew String(lastname.c_str());
		}
	};
}
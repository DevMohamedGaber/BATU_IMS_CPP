#pragma once
#include "User.h"
#include "Utilities.h"
using namespace System;
using namespace Models;
using namespace Core;

namespace Controllers
{
	public ref class LoginController
	{
	public:
		static String^ Login(String^ username, String^ password)
		{
			if (String::IsNullOrWhiteSpace(username)) {
				return "Username cannot be empty.";
			}
			if (String::IsNullOrWhiteSpace(password)) {
				return "Password cannot be empty.";
			}

			User^ user = User::GetUserByUsername(username);

			if (user == nullptr) {
				return "Username not found";
			}
			
			// TODO: check hashed password
			if (user->Password != password) {
				return "Incorrect Password";
			}
			
			return nullptr;
		}
	};
}

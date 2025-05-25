#pragma once
#include "AuthenticationController.h"
#include "User.h"
#include "Users.h"
#include "Utilities.h"
#include "PasswordHasher.h"

using namespace System;
using namespace Models;
using namespace Core;
using namespace SecurityManager;

namespace Controllers
{
	String^ AuthenticationController::Login(String^ username, String^ password)
	{
		if (String::IsNullOrWhiteSpace(username)) {
			return "Username cannot be empty.";
		}
		if (String::IsNullOrWhiteSpace(password)) {
			return "Password cannot be empty.";
		}

		User^ user = Users::GetByUsername(username);

		if (user == nullptr) {
			return "Username not found";
		}
		
		if (!PasswordHasher::VerifyPassword(password, user->Password)) {
			return "Incorrect Password";
		}
		CurrentUser = user;
		return nullptr;
	}
	void AuthenticationController::Logout()
	{
		CurrentUser = nullptr;
	}
}

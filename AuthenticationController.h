#pragma once
#include "User.h"
using namespace System;
using namespace Models;

namespace Controllers
{
	public ref class AuthenticationController sealed
	{
	public:
		static User^ CurrentUser = nullptr;
		static String^ Login(String^ username, String^ password);
		static void Logout();
	};
}

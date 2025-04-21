#pragma once
using namespace System;

namespace Controllers
{
	public ref class LoginController
	{
	public:
		static String^ Login(String^ username, String^ password);
	};
}

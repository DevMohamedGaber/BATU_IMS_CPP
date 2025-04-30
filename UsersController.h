#pragma once
#include "Users.h"
using namespace Models;

namespace Controllers
{
	public ref class UsersController
	{
	public:
		static List<User^>^ GetAllUsers();
		static String^ RegisterNewUser(String^ FirstName, String^ LastName, String^ Username, String^ Password, String^ Email, int RoleId);
		static User^ GetUserById(int id);
		static void DeleteUser(int id);
		static String^ EditUserInfo(User^ user);
	};
}
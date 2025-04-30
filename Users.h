#pragma once
#include "User.h"
using namespace System::Collections::Generic;
using namespace std;

namespace Models
{
	public ref class Users sealed
	{
	public:
		static List<User^>^ GetAll();
		static User^ GetByUsername(String^ username);
		static User^ GetById(int id);
		static bool Insert(String^ FirstName, String^ LastName, String^ Username, String^ Password, String^ Email, int RoleId);
		static bool Update(User^ user);
		static void Delete(int id);
		static bool Exists(String^ Name);
	};
}
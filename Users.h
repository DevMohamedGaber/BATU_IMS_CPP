#include "User.h"
#include <string>
#include <vector>
using namespace System;
using namespace std;

namespace Models
{
	public ref class Users sealed
	{
	public: 
		static User^ CurrentUser = nullptr;
		static User^ GetUserByUsername(String^ username);
	};
}
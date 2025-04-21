#include "Role.h"
#include <string>
#include <vector>
using namespace System;
using namespace Core;
using namespace std;

namespace Models
{
	public ref class User
	{
	public:
		long Id;
		String^ FirstName;
		String^ LastName;
		String^ Username;
		String^ Password;
		String^ Email;
		Role^ Role;

		static User^ GetUserByUsername(String^ username);

	private:
		static User^ Map(const vector<string>& row);
	};
}
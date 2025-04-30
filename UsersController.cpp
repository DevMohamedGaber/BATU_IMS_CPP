#include "UsersController.h"  
#include "Users.h"  

using namespace Models;  

namespace Controllers  
{  
	List<User^>^ UsersController::GetAllUsers()  
	{  
		return Models::Users::GetAll(); // Specify the namespace explicitly to resolve ambiguity  
	}
	String^ UsersController::RegisterNewUser(String^ FirstName, String^ LastName, String^ Username, String^ Password, String^ Email, int RoleId)  
	{
		if (String::IsNullOrEmpty(FirstName))
		{
			return "First name is required";
		}
		if (String::IsNullOrEmpty(LastName))
		{
			return "Last name is required";
		}
		if (String::IsNullOrEmpty(Username))
		{
			return "Username is required";
		}
		if (String::IsNullOrEmpty(Password))
		{
			return "Password is required";
		}
		if (String::IsNullOrEmpty(Email))
		{
			return "Email is required";
		}
		if (!System::Text::RegularExpressions::Regex::IsMatch(Email, "^[^@\\s]+@[^@\\s]+\\.[^@\\s]+$"))
		{
			return "Invalid email format";
		}
		if (RoleId < 0 || RoleId > 3)
		{
			return "Role is required";
		}
		// todo: fix username exists check
		/*if (Models::Users::Exists(Username))
		{
			return "Username already exists";
		}*/
		// todo: hash password here
		if (!Models::Users::Insert(FirstName, LastName, Username, Password, Email, RoleId)) {
			return "Faild to register new user";
		}
		return nullptr;
	}  
	User^ UsersController::GetUserById(int id)
	{
		return Models::Users::GetById(id);
	}
	void UsersController::DeleteUser(int id)
	{
		Users::Delete(id);
	}
	String^ UsersController::EditUserInfo(User^ user)
	{
		if (String::IsNullOrEmpty(user->FirstName))
		{
			return "First name is required";
		}
		if (String::IsNullOrEmpty(user->LastName))
		{
			return "Last name is required";
		}
		if (String::IsNullOrEmpty(user->Username))
		{
			return "Username is required";
		}
		if (String::IsNullOrEmpty(user->Email))
		{
			return "Email is required";
		}
		if (!System::Text::RegularExpressions::Regex::IsMatch(user->Email, "^[^@\\s]+@[^@\\s]+\\.[^@\\s]+$"))
		{
			return "Invalid email format";
		}
		if (!Users::Update(user)) {
			return "Failed to update user info";
		}

		return nullptr;
	}
}
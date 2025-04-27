#include "CustomersController.h"
#include "Customers.h"

using namespace Models;

namespace Controllers {
	List<Customer^>^ CustomersController::GetCustomersList()
	{
		return Customers::GetAll();
	}
	String^ CustomersController::AddNewCustomer(String^ firstName, String^ lastName, String^ email)
	{
		if (String::IsNullOrEmpty(firstName))
		{
			return "First Name is required.";
		}
		if (String::IsNullOrEmpty(lastName))
		{
			return "Last Name required.";
		}
		if (String::IsNullOrEmpty(email))
		{
			return "Email is required.";
		}
		if (!System::Text::RegularExpressions::Regex::IsMatch(email, "^[^@\s]+@[^@\s]+\.[^@\s]+$"))
		{
			return "Invalid email format.";
		}

		if (!Customers::Insert(firstName, lastName, email))
		{
			return "Failed to add customer.";
		}
		return nullptr;
	}
}
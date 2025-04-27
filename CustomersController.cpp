#include "CustomersController.h"
#include "Customers.h"

using namespace Models;

namespace Controllers
{
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
	Customer^ CustomersController::GetCustomerById(int id)
	{
		return Customers::GetById(id);
	}
	void CustomersController::DeleteCustomer(int id)
	{
		Customers::Delete(id);
	}
	String^ CustomersController::EditCustomer(Customer^ customer)
	{
		if (customer == nullptr)
		{
			return "Customer cannot be null.";
		}
		if (customer->Id <= 0)
		{
			return "Invalid customer ID.";
		}
		if (String::IsNullOrEmpty(customer->FirstName))
		{
			return "First Name is required.";
		}
		if (String::IsNullOrEmpty(customer->LastName))
		{
			return "Last Name required.";
		}
		if (String::IsNullOrEmpty(customer->Email))
		{
			return "Email is required.";
		}
		if (!System::Text::RegularExpressions::Regex::IsMatch(customer->Email, "^[^@\s]+@[^@\s]+\.[^@\s]+$"))
		{
			return "Invalid email format.";
		}
		/*if (Customers::ExistsByName(customer->FirstName, customer->LastName))
		{
			return "Customer with this name already exists.";
		}
		if (Customers::ExistsByEmail(customer->Email))
		{
			return "Customer with this email already exists.";
		}*/

		if (!Customers::Update(customer))
		{
			return "Failed to update customer.";
		}
		return nullptr;
	}
}
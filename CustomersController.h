#pragma once
#include "Customer.h"

using namespace System::Collections::Generic;
using namespace System;
using namespace Models;

namespace Controllers
{
    public ref class CustomersController sealed  
    {  
    public:  
		static List<Customer^>^ GetCustomersList();  
		static String^ AddNewCustomer(String^ firstName, String^ lastName, String^ email);  
		static Customer^ GetCustomerById(int id);  
		static void DeleteCustomer(int id);  
		static String^ EditCustomer(Customer^ customer);
    };
}
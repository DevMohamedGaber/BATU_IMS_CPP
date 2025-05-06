#pragma once
#include "Customer.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Models
{
	public ref class Customers sealed
	{
	public:
		static List<Customer^>^ GetAll();
		static Customer^ GetById(int id);
		static bool Insert(String^ FirstName, String^ LastName, String^ Email);
		static bool Update(Customer^ item);
		static void Delete(int id);
		static bool ExistsByName(String^ firstName, String^ lastName);
		static bool ExistsByEmail(String^ email);
		static List<Customer^>^ GetLikeName(String^ name);
	};
}
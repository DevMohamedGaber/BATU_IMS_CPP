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
	};
}
#pragma once
#include "Supplier.h"

using namespace System::Collections::Generic;
using namespace System;

namespace Models {
	public ref class Suppliers sealed
	{
	public:
		static List<Supplier^>^ GetAll();
		static Supplier^ GetById(int id);
		static bool Insert(String^ Name, String^ ContractAt);
		static bool Update(Supplier^ supplier);
		static void Delete(int id);
		static bool Exists(String^ Name);
	};
}
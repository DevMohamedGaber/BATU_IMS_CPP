#pragma once
#include "Supplier.h"

using namespace System::Collections::Generic;
using namespace Models;

namespace Controllers
{
	public ref class SuppliersController sealed
	{
	public:
		static List<Supplier^>^ GetSuppliersList();
		static String^ AddNewSupplier(String^ name, DateTime^ contractDate);
		static Supplier^ GetSupplierById(int id);
		static void DeleteSupplier(int id);
		static String^ EditSupplier(Supplier^ supplier);
		static List<Supplier^>^ GetSuppliersByName(String^ name);
	};
}
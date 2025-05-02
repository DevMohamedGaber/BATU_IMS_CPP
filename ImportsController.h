#pragma once
#include "Import.h"

using namespace Models;

namespace Controllers
{
	public ref class ImportsController sealed
	{
	public:
		static List<Import^>^ GetImportsList();
		static Import^ GetImportById(int id);
		static String^ AddImport(int SupplierId, String^ ArrivalDate, List<OrderItem^>^ Items);
	};
}
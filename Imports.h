#pragma once
#include "Import.h"

namespace Models
{
	public ref class Imports sealed {
	public:
		static List<Import^>^ GetAll();
		static Import^ GetById(int id);
		static bool Add(int SupplierId, int Status, String^ ArrivalDate, List<OrderItem^>^ Items);

	private:
		static void FetchImportData(Import^ import);
	};
}
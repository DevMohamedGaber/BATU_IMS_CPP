#pragma once
#include "Inventory.h"

using namespace System::Collections::Generic;
using namespace Models;

namespace Controllers
{
	public ref class InventoryController sealed
	{
	public:
		static List<Item^>^ GetListViewData();
		static String^ AddNewItem(System::String^ name, System::String^ price, int categoryId);
	};
}
#pragma once
#include "Item.h"

using namespace Collections::Generic;
using namespace Models;

namespace Controllers
{
	public ref class InventoryController sealed
	{
	public:
		static List<Item^>^ GetListViewData();
		static Item^ GetItemById(int id);
		static String^ AddNewItem(String^ name, String^ price, int categoryId);
		static void DeleteItem(int id);
		static String^ EditItem(Item^ item);
	};
}
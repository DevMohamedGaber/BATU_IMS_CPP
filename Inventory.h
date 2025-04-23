#pragma once
#include "Item.h"

namespace Models
{
	public ref class Inventory sealed
	{
	public:
		static bool AddItem(System::String^ Name, double Price, int categoryId);
		static Item^ GetItemById(int id);
		static System::Collections::Generic::List<Item^>^ GetAllItems();
		static bool UpdateItem(Item^ item);
		static void DeleteItem(int id);
	};
}
#pragma once
#include "Item.h"

using namespace System::Collections::Generic;

namespace Models
{
	public ref class Inventory sealed
	{
	public:
		static bool AddItem(String^ Name, double Price, int categoryId);
		static Item^ GetItemById(int id);
		static List<Item^>^ GetAllItems();
		static bool UpdateItem(Item^ item);
		static void DeleteItem(int id);
		static List<Item^>^ GetLikeName(String^ name);
		static void IncreaseStock(int id, int quantity);
		static void DecreaseStock(int id, int quantity);
	};
}
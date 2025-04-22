#include "Item.h"
#include <string>
#include <vector>
using namespace System;
using namespace std;

namespace Models
{
	public ref class Inventory sealed
	{
	public:
		static bool AddItem(String^ Name, double Price, int categoryId);
		static Item^ GetItemById(int id);
		static vector<Item> GetAllItems();
		static bool UpdateItem(Item^ item);
		static void DeleteItem(int id);
	};
}
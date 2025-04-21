#include "Category.h"
#include <string>
#include <vector>
using namespace System;
using namespace std;

namespace Models
{
	public ref class Inventory sealed
	{
	public:
		// properties
		int Id;
		String^ Name;
		int Stock;
		double Price;
		Category^ Category;

		// methods
		static bool AddItem(String^ Name, double Price, int categoryId);
		static Inventory^ GetItemById(int id);
		static vector<Inventory> GetAllItems();
		static bool UpdateItem(Inventory^ item);
		static void DeleteItem(int id);

	private:
		static Inventory^ Map(const vector<string>& row)
	};
}
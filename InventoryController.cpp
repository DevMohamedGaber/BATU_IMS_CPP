#include "InventoryController.h"

namespace Controllers
{
	System::Collections::Generic::List<Item^>^ InventoryController::GetListViewData()
	{
		return Models::Inventory::GetAllItems();
	}

	System::String^ InventoryController::AddNewItem(System::String^ name, System::String^ price, int categoryId) {
		if (name->Length == 0) {
			return "Name field can't be empty";
		}
		if (price->Length == 0) {
			return "Price field can't be empty";
		}
		if (categoryId == 0) {
			return "Category field can't be empty";
		}

		double parsedPrice = System::Convert::ToDouble(price);
		if (parsedPrice <= 0) {
			return "Price must be greater than 0";
		}

		if (!Models::Inventory::AddItem(name, parsedPrice, categoryId)) {
			return "Failed to add item";
		}

		return nullptr;
	}
}
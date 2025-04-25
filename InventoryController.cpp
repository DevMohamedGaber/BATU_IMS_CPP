#include "InventoryController.h"
#include "Inventory.h"

namespace Controllers
{
	List<Item^>^ InventoryController::GetListViewData()
	{
		return Inventory::GetAllItems();
	}
	Item^ InventoryController::GetItemById(int id) {
		return Inventory::GetItemById(id);
	}
	String^ InventoryController::AddNewItem(String^ name, String^ price, int categoryId) {
		if (name->Length == 0) {
			return "Name field can't be empty";
		}
		if (price->Length == 0) {
			return "Price field can't be empty";
		}
		if (categoryId == 0) {
			return "Category field can't be empty";
		}

		double parsedPrice = Convert::ToDouble(price);
		if (parsedPrice <= 0) {
			return "Price must be greater than 0";
		}

		if (!Inventory::AddItem(name, parsedPrice, categoryId)) {
			return "Failed to add item";
		}

		return nullptr;
	}
	void InventoryController::DeleteItem(int id) {
		Inventory::DeleteItem(id);
	}
	String^ InventoryController::EditItem(Item^ item) {
		if (item->Name->Length == 0) {
			return "Name field can't be empty";
		}
		if (item->Price <= 0) {
			return "Price must be greater than 0";
		}
		if (item->Category->Id == 0) {
			return "Category field can't be empty";
		}
		if (!Inventory::UpdateItem(item)) {
			return "Failed to update item";
		}
		return nullptr;
	}
}
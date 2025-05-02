#include "AddOrderItem.h"
#include "InventoryController.h"

using namespace Controllers;
using namespace Core;
namespace Views
{
	Void AddOrderItem::AddOrderItem_Load(Object^ sender, EventArgs^ e) {
		itemInput->KeyUp += gcnew KeyEventHandler(this, &AddOrderItem::itemInput_KeyUp);
		amountInput->LostFocus += gcnew EventHandler(this, &AddOrderItem::amountInput_LostFocus);
	}
	Void AddOrderItem::itemInput_KeyUp(Object^ sender, KeyEventArgs^ e) {
		// Skip navigation keys
		if (e->KeyCode == Keys::Up || e->KeyCode == Keys::Down ||
			e->KeyCode == Keys::Left || e->KeyCode == Keys::Right ||
			e->KeyCode == Keys::PageUp || e->KeyCode == Keys::PageDown) {
			return;
		}
		// Skip if empty or too short
		if (String::IsNullOrEmpty(itemInput->Text) || itemInput->Text->Length < 2) {
			itemInput->DroppedDown = false;
			return;
		}
		// Store current text and cursor position
		String^ currentText = itemInput->Text;
		int cursorPosition = itemInput->SelectionStart;
		// Get items
		auto items = InventoryController::GetItemsByName(currentText);
		// Update items
		itemInput->BeginUpdate();
		try {
			itemInput->Items->Clear();
			if (items->Count > 0) {
				for each (auto item in items) {
					itemInput->Items->Add(item->Name);
				}
			}
		}
		finally {
			itemInput->DroppedDown = itemInput->Items->Count > 0 && items->Count > 0;
			itemInput->EndUpdate();
		}

		itemInput->Text = currentText;
		itemInput->SelectionStart = cursorPosition;
	}
	Void AddOrderItem::amountInput_LostFocus(Object^ sender, EventArgs^ e) {
		if (!String::IsNullOrEmpty(amountInput->Text) && itemInput->SelectedItem == nullptr) {
			MessageBox::Show("Please select a valid item first", "Invalid Item Selection", MessageBoxButtons::OK, MessageBoxIcon::Error);
			amountInput->Text = String::Empty;
			return;
		}

		// Parse the entered amount
		int amountSelected;
		try {
			amountSelected = Convert::ToInt32(amountInput->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Please enter a valid numeric amount", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
			amountInput->Text = String::Empty;
			return;
		}

		// Retrieve the selected item's data from the Items list
		auto selectedItem = itemInput->SelectedItem;

		// Assuming the items in the ComboBox are objects with a `Stock` property
		auto selectedItemData = dynamic_cast<Models::Item^>(selectedItem);
		if (selectedItemData == nullptr) {
			MessageBox::Show("Invalid item data", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			amountInput->Text = String::Empty;
			itemInput->Focus();
			return;
		}

		// Validate the entered amount against the available stock
		int availableStock = selectedItemData->Stock; // Assuming `Stock` is a property of the item
		if (amountSelected > availableStock) {
			MessageBox::Show("The entered amount exceeds the available stock", "Stock Exceeded", MessageBoxButtons::OK, MessageBoxIcon::Error);
			amountInput->Text = availableStock.ToString();
			return;
		}
	}
	OrderItem^ AddOrderItem::GetItem() {
		auto item = gcnew OrderItem();
		item->Name = itemInput->Text;
		item->Count = Convert::ToInt32(amountInput->Text);
		return item;
	}
}
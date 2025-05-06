#include "AddExportPage.h"
#include "ExportsController.h"
#include "CustomersController.h"

using namespace Controllers;

namespace Views
{
	Void AddExportPage::AddExportPage_Load(Object^ sender, EventArgs^ e) {
		customerInput->KeyUp += gcnew KeyEventHandler(this, &AddExportPage::customerInput_KeyUp);
		itemsList = gcnew List<AddOrderItem^>();
	}
	Void AddExportPage::customerInput_KeyUp(Object^ sender, KeyEventArgs^ e) {
		// Skip navigation keys
		if (e->KeyCode == Keys::Up || e->KeyCode == Keys::Down ||
			e->KeyCode == Keys::Left || e->KeyCode == Keys::Right ||
			e->KeyCode == Keys::PageUp || e->KeyCode == Keys::PageDown) {
			return;
		}
		// Skip if empty or too short
		if (String::IsNullOrEmpty(customerInput->Text) || customerInput->Text->Length < 2) {
			customerInput->DroppedDown = false;
			return;
		}
		// Store current text and cursor position
		String^ currentText = customerInput->Text;
		int cursorPosition = customerInput->SelectionStart;
		// Get customers
		auto customers = CustomersController::GetCustomersByName(currentText);
		// Update items
		customerInput->BeginUpdate();
		try {
			customerInput->Items->Clear();
			if (customers->Count > 0) {
				for each (auto customer in customers) {
					customerInput->Items->Add(customer->GetFullName());
				}
			}
			customerInput->Tag = customers;
		}
		finally {
			customerInput->DroppedDown = customerInput->Items->Count > 0 && customers->Count > 0;
			customerInput->EndUpdate();
		}

		customerInput->Text = currentText;
		customerInput->SelectionStart = cursorPosition;
	}
	Void AddExportPage::addItemBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		auto item = gcnew AddOrderItem();
		item->Dock = DockStyle::Top;
		item->Parent = itemsPanel;
		item->deleteBtn->Click += gcnew EventHandler(this, &AddExportPage::deleteItemBtn_Click);
		itemsPanel->Controls->Add(item);
		itemsList->Add(item);
		noItemsMsg->Visible = false;
	}
	Void AddExportPage::addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// get supplier info
		auto customers = dynamic_cast<List<Customer^>^>(customerInput->Tag);
		if (customers == nullptr || customers->Count == 0) {
			errorMsg->Text = "Please select a valid customer.";
			return;
		}
		auto customer = customers[customerInput->SelectedIndex];

		if (itemsList->Count == 0) {
			errorMsg->Text = "Please add at least one item to submit an import.";
			return;
		}
		auto items = gcnew List<OrderItem^>();
		for each (auto item in itemsList) {
			auto orderItem = item->GetItem();
			if (orderItem == nullptr) {
				errorMsg->Text = "Please select a valid item.";
				return;
			}
			items->Add(orderItem);
		}

		// Create the import
		String^ result = ExportsController::AddExport(customer->Id, dateInput->Value.ToString(), items);

		if (result != nullptr) {
			errorMsg->ForeColor = System::Drawing::Color::Red;
			errorMsg->Text = result;
			return;
		}
		// Clear the form
		customerInput->Text = "";
		dateInput->Value = DateTime::Now;
		for each (AddOrderItem^ item in itemsList) {
			itemsPanel->Controls->Remove(item);
			delete item;
		}
		itemsList->Clear();
		noItemsMsg->Visible = true;
		errorMsg->ForeColor = System::Drawing::Color::Green;
		errorMsg->Text = "Export added successfully!";

	}
	Void AddExportPage::deleteItemBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		auto item = dynamic_cast<AddOrderItem^>(((Control^)sender)->Parent);
		if (item == nullptr) {
			throw gcnew InvalidCastException("Failed to cast to AddOrderItem.");
		}
		itemsPanel->Controls->Remove(item);
		itemsList->Remove(item);
		delete item;
		noItemsMsg->Visible = itemsList->Count == 0;
	}
}
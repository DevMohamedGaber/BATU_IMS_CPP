#include "AddImportPage.h"
#include "ImportsController.h"
#include "SuppliersController.h"

using namespace Controllers;

namespace Views
{
	Void AddImportPage::AddImportPage_Load(Object^ sender, EventArgs^ e) {
		supplierInput->KeyUp += gcnew KeyEventHandler(this, &AddImportPage::supplierInput_KeyUp);
		itemsList = gcnew List<AddOrderItem^>();
	}
    Void AddImportPage::supplierInput_KeyUp(Object^ sender, KeyEventArgs^ e) {
        // Skip navigation keys
        if (e->KeyCode == Keys::Up || e->KeyCode == Keys::Down ||
            e->KeyCode == Keys::Left || e->KeyCode == Keys::Right ||
            e->KeyCode == Keys::PageUp || e->KeyCode == Keys::PageDown) {
            return;
        }

        // Skip if empty or too short
        if (String::IsNullOrEmpty(supplierInput->Text) || supplierInput->Text->Length < 2) {
            supplierInput->DroppedDown = false;
            return;
        }

        // Store current text and cursor position
        String^ currentText = supplierInput->Text;
        int cursorPosition = supplierInput->SelectionStart;

        // Get suppliers
        auto suppliers = SuppliersController::GetSuppliersByName(currentText);

        // Update items
        supplierInput->BeginUpdate();
        try {
            supplierInput->Items->Clear();
            if (suppliers->Count > 0) {
                for each (auto supplier in suppliers) {
                    supplierInput->Items->Add(supplier->Name);
                }
            }
			supplierInput->Tag = suppliers;
        }
        finally {
            // Always show dropdown when we have results
            supplierInput->DroppedDown = supplierInput->Items->Count > 0 && suppliers->Count > 0;
            supplierInput->EndUpdate();
        }
        // Restore text and cursor position only if there are results
        supplierInput->Text = currentText;
        supplierInput->SelectionStart = cursorPosition;
    }
	Void AddImportPage::addItemBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create a new AddOrderItem instance
		auto item = gcnew AddOrderItem();
		item->Dock = DockStyle::Top;
		item->Parent = itemsPanel;
		item->deleteBtn->Click += gcnew EventHandler(this, &AddImportPage::deleteItemBtn_Click);
		itemsPanel->Controls->Add(item);
		itemsList->Add(item);
		noItemsMsg->Visible = false;
	}
	Void AddImportPage::deleteItemBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        auto item = dynamic_cast<AddOrderItem^>(((Control^)sender)->Parent);  
        if (item == nullptr) {  
           throw gcnew InvalidCastException("Failed to cast to AddOrderItem.");  
        }  
        itemsPanel->Controls->Remove(item);  
        itemsList->Remove(item);  
        delete item;  
        noItemsMsg->Visible = itemsList->Count == 0;
	}
	Void AddImportPage::addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        // get supplier info
		auto suppliers = dynamic_cast<List<Supplier^>^>(supplierInput->Tag);
		if (suppliers == nullptr || suppliers->Count == 0) {
            errorMsg->Text = "Please select a valid supplier.";
			return;
		}
        auto supplier = suppliers[supplierInput->SelectedIndex];

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
		String^ result = ImportsController::AddImport(supplier->Id, arrivalTimeInput->Value.ToString(), items);

		if (result != nullptr) {
			errorMsg->ForeColor = System::Drawing::Color::Red;
			errorMsg->Text = result;
			return;
		}
		// Clear the form
		supplierInput->Text = "";
		arrivalTimeInput->Value = DateTime::Now;
		for each (auto item in itemsList) {
			itemsPanel->Controls->Remove(item);
			delete item;
		}
		itemsList->Clear();
		noItemsMsg->Visible = true;
		errorMsg->ForeColor = System::Drawing::Color::Green;
		errorMsg->Text = "Import added successfully!";

	}
}
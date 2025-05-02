#include "AddImportPage.h"
#include "ImportsController.h"
#include "SuppliersController.h"
#include "AddOrderItem.h"

using namespace Controllers;

/*
	BUG: when a valid suplier name is typed, and then an invalid one is typed, that results in an error
*/
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
}
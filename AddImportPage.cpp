#include "AddImportPage.h"
#include "ImportsController.h"
#include "SuppliersController.h"

using namespace Controllers;

/*
	BUG: when a valid suplier name is typed, and then an invalid one is typed, that results in an error
*/
namespace Views
{
	Void AddImportPage::AddImportPage_Load(Object^ sender, EventArgs^ e) {
		supplierInput->KeyUp += gcnew KeyEventHandler(this, &AddImportPage::supplierInput_KeyUp);
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
}
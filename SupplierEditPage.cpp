#include "SuppliersController.h"  
#include "SupplierEditPage.h"  
#include "SupplierViewPage.h"  
#include "DashboardForm.h"  

using namespace Controllers;  

namespace Views
{  
   SupplierEditPage::SupplierEditPage(Supplier^ supplier)  
   {  
       InitializeComponent();  
       this->supplier = supplier;  
       nameInput->Text = supplier->Name;  
       contractDateInput->Value = DateTime(supplier->ContractedAt->Ticks);
   }
   Void SupplierEditPage::returnBtn_Click(Object^ sender, EventArgs^ e) {
       DashboardForm::SwitchView(gcnew SupplierViewPage(supplier));
   }
   Void SupplierEditPage::confirmBtn_Click(Object^ sender, EventArgs^ e) {
	   Supplier^ newSupplier = gcnew Supplier();
	   newSupplier->Id = supplier->Id;
	   newSupplier->Name = nameInput->Text;
	   newSupplier->ContractedAt = contractDateInput->Value;

	   String^ result = SuppliersController::EditSupplier(newSupplier);

	   if (result != nullptr) {
		   this->errorMsg->ForeColor = Drawing::Color::Red;
		   this->errorMsg->Text = result;
	   }
	   this->errorMsg->ForeColor = Drawing::Color::Green;
	   this->errorMsg->Text = "Supplier updated successfully!";
	   this->supplier = newSupplier;
   }
}
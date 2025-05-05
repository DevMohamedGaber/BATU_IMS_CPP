#include "ViewOrderItem.h"
#include "DashboardForm.h"
#include "ViewItemPage.h"

namespace Views {
	ViewOrderItem::ViewOrderItem(OrderItem^ Item) {
		InitializeComponent();
		this->Item = Item;
		itemLabel->Text = Item->Name;
		amountLabel->Text = Item->Count.ToString();
	}
	Void ViewOrderItem::itemLabel_Click(Object^ sender, EventArgs^ e) {
		DashboardForm::SwitchView(gcnew ViewItemPage(Item->Id));
	}
}
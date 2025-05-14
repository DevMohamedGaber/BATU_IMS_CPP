#include "HomePage.h"
#include "HomeController.h"

using namespace Controllers;

namespace Views {
	Void HomePage::HomePage_Load(Object^ sender, EventArgs^ e) {
		HomeController^ homeController = gcnew HomeController();
		HomeDTO^ homeData = homeController->GetHomeData();
		this->totalProductsCountLabel->Text = homeData->TotalProductsCount.ToString();
		this->lowStockCountLabel->Text = homeData->LowStockCount.ToString();
		this->outOfStockCountLabel->Text = homeData->OutOfStockCount.ToString();
		this->suppliersCountLabel->Text = homeData->SuppliersCount.ToString();
	}
}
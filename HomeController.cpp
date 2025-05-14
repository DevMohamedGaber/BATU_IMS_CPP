#include "HomeController.h"
#include "Suppliers.h"
#include "Inventory.h"

namespace Controllers
{
	HomeDTO^ HomeController::GetHomeData()
	{
		HomeDTO^ homeData = gcnew HomeDTO();
		homeData->TotalProductsCount = Models::Inventory::Count();
		homeData->LowStockCount = Models::Inventory::LowStockCount();
		homeData->OutOfStockCount = Models::Inventory::OutOfStockCount();
		homeData->SuppliersCount = Models::Suppliers::Count();
		return homeData;
	}
}
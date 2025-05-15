#include "HomeController.h"
#include "Suppliers.h"
#include "Inventory.h"
#include "Exports.h"
#include "Imports.h"
using namespace Models;
using namespace System::Collections::Generic;

namespace Controllers
{
	HomeDTO^ HomeController::GetHomeData()
	{
		HomeDTO^ homeData = gcnew HomeDTO();
		homeData->TotalProductsCount = Inventory::Count();
		homeData->LowStockCount = Inventory::LowStockCount();
		homeData->OutOfStockCount = Inventory::OutOfStockCount();
		homeData->SuppliersCount = Suppliers::Count();
		homeData->ValueOfStock = Inventory::StockValue();
		homeData->TransactionsChartData = GetTransactionsChartData("Annually");
		return homeData;
	}
    Dictionary<String^, Tuple<int, int>^>^ HomeController::GetTransactionsChartData(String^ period)
    {
        Dictionary<String^, Tuple<int, int>^>^ result = gcnew Dictionary<String^, Tuple<int, int>^>();

        // Get counts from database grouped by period
        Dictionary<String^, int>^ imports = Imports::GetCountByPeriod(period);
        Dictionary<String^, int>^ exports = Exports::GetCountByPeriod(period);

        // Get all unique periods from both imports and exports
        List<String^>^ allPeriods = gcnew List<String^>();

        // Add all import periods
        for each(String ^ periodKey in imports->Keys)
        {
            if (!allPeriods->Contains(periodKey))
            {
                allPeriods->Add(periodKey);
            }
        }

        // Add all export periods
        for each(String ^ periodKey in exports->Keys)
        {
            if (!allPeriods->Contains(periodKey))
            {
                allPeriods->Add(periodKey);
            }
        }

        // Create combined result
        for each(String ^ periodKey in allPeriods)
        {
            int importCount = imports->ContainsKey(periodKey) ? imports[periodKey] : 0;
            int exportCount = exports->ContainsKey(periodKey) ? exports[periodKey] : 0;
            result[periodKey] = gcnew Tuple<int, int>(importCount, exportCount);
        }

        return result;
    }
}
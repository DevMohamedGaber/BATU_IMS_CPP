#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace Core
{
	public ref struct HomeDTO
	{
	public:
		int TotalProductsCount;
		int LowStockCount;
		int OutOfStockCount;
		int SuppliersCount;
		double ValueOfStock;
		Dictionary<String^, Tuple<int, int>^>^ TransactionsChartData; // Key: Period, Value: <Imports, Exports>
	};
}
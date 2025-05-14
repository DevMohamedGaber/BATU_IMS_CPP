#pragma once
namespace Core
{
	public ref struct HomeDTO
	{
	public:
		int TotalProductsCount;
		int LowStockCount;
		int OutOfStockCount;
		int SuppliersCount;
	};
}
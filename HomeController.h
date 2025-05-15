#pragma once
#include "HomeDTO.h"
using namespace Core;
using namespace System::Collections::Generic;

namespace Controllers
{
	public ref class HomeController sealed {
	public:
		static HomeDTO^ GetHomeData();
		static Dictionary<String^, Tuple<int, int>^>^ GetTransactionsChartData(String^ period);
	};
}
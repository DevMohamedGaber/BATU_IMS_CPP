#pragma once
#include "HomeDTO.h"
using namespace Core;

namespace Controllers
{
	public ref class HomeController sealed {
	public:
		static HomeDTO^ GetHomeData();
	};
}
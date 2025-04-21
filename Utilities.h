#pragma once
#include <string>
using namespace System;
using namespace std;

namespace Core
{
	public ref class Utilities sealed
	{
	public:
		static string GetNativeString(String^ managedString);
		static bool IsNullOrWhiteSpace(const string& str);
	};
}
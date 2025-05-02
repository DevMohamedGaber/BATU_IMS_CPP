#pragma once
using namespace System;
namespace Core
{
	public ref struct OrderItem
	{
	public:
		int Id;
		String^ Name;
		int Count;
	};
}
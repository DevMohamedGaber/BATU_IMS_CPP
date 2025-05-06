#pragma once
#include "OrderStatus.h"
#include "OrderItem.h"
#include "Customer.h"
#include "User.h"

using namespace System::Collections::Generic;
using namespace System;
using namespace Core;

namespace Models
{
	public ref struct Export
	{
	public:
		int Id;
		DateTime Date;
		OrderStatus Status;
		Customer^ Customer;
		User^ Retailer;

		int ItemCount;
		List<OrderItem^>^ Items;
	};
}
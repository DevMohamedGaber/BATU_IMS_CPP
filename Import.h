#pragma once
#include "OrderStatus.h"
#include "OrderItem.h"
#include "Supplier.h"
#include "User.h"

using namespace System::Collections::Generic;
using namespace System;
using namespace Core;

namespace Models {
	public ref struct Import
	{
	public:
		int Id;
		DateTime ArrivalDate;
		OrderStatus Status;
		Supplier^ Supplier;

		User^ Adder;
		User^ Reviewer;
		User^ Accepter;

		int ItemCount;
		List<OrderItem^>^ Items;
	};
}
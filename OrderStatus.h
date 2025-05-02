#pragma once
namespace Core
{
	public enum class OrderStatus : int
	{
		InProgress,
		OnHold,
		Completed,
		Cancelled,
		Returned
	};
}
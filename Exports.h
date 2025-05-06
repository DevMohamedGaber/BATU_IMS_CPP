#pragma once
#include "Export.h"
#include "OrderItem.h"

namespace Models
{
	public ref class Exports sealed {
	public:
		static List<Export^>^ GetAll();
		static Export^ GetById(int id);
		static bool Insert(int SupplierId, String^ ArrivalDate, List<OrderItem^>^ Items);
		static void Delete(int ImportId);
		static bool ChangeStatus(int ImportId, int Status);
		static List<OrderItem^>^ GetItems(int ImportId);

	private:
		static Customer^ FetchCustomerData(string& id);
		static User^ FetchUserData(string& id);
		static List<OrderItem^>^ FetchItemsData(string& id);
	};
}
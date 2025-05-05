#pragma once
#include "Import.h"

namespace Models
{
	public ref class Imports sealed {
	public:
		static List<Import^>^ GetAll();
		static Import^ GetById(int id);
		static bool Insert(int SupplierId, String^ ArrivalDate, List<OrderItem^>^ Items);
		static bool IsReviewed(int ImportId);
		static bool IsAccepted(int ImportId);
		static bool Review(int ImportId, int ReviewerId);
		static bool Accept(int ImportId, int AccepterId);
		static void Delete(int ImportId);

	private:
		static Supplier^ FetchSupplierData(string& id);
		static User^ FetchUserData(string& id);
		static List<OrderItem^>^ FetchItemsData(string& id);
	};
}
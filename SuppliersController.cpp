#include "SuppliersController.h"
#include "Suppliers.h"
using namespace Models;

namespace Controllers
{
	List<Supplier^>^ SuppliersController::GetSuppliersList() {
		return Suppliers::GetAll();
	}
	Supplier^ SuppliersController::GetSupplierById(int id) {
		return Suppliers::GetById(id);
	}
	void SuppliersController::DeleteSupplier(int id) {
		Suppliers::Delete(id);
	}
	String^ SuppliersController::AddNewSupplier(String^ name, DateTime^ contractDate) {
		if (String::IsNullOrEmpty(name))
		{
			return "Name is required.";
		}
		if (contractDate == nullptr)
		{
			return "Contract Date is required.";
		}
		if (contractDate->Year < 2000 || contractDate->Year > DateTime::Now.Year)
		{
			return "Contract Date must be between 2000 and the current year.";
		}

		if (!Suppliers::Insert(name, contractDate->ToString()))
		{
			return "Failed to add customer.";
		}

		return nullptr;
	}
	String^ SuppliersController::EditSupplier(Supplier^ supplier) {
		if (supplier == nullptr)
		{
			return "Supplier cannot be null.";
		}
		if (supplier->Id <= 0)
		{
			return "Invalid supplier ID.";
		}
		if (String::IsNullOrEmpty(supplier->Name))
		{
			return "Name is required.";
		}
		if (supplier->ContractedAt == nullptr)
		{
			return "Contract Date is required.";
		}
		if (supplier->ContractedAt->Year < 2000 || supplier->ContractedAt->Year > DateTime::Now.Year)
		{
			return "Contract Date must be between 2000 and the current year.";
		}
		if (!Suppliers::Update(supplier))
		{
			return "Failed to update supplier.";
		}
		return nullptr;
	}
	List<Supplier^>^ SuppliersController::GetSuppliersByName(String^ name) {
		return Suppliers::GetLikeName(name);
	}
}
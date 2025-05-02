#include "ImportsController.h"
#include "Imports.h"

namespace Controllers
{
	List<Import^>^ ImportsController::GetImportsList() {
		return Imports::GetAll();
	}

	Import^ ImportsController::GetImportById(int id) {
		return Imports::GetById(id);
	}

	String^ ImportsController::AddImport(int SupplierId, String^ ArrivalDate, List<OrderItem^>^ Items) {
		// todo: add more checks if needed
		if (!Imports::Insert(SupplierId, ArrivalDate, Items)) {
			return "failed to insert the import.";
		}
		return nullptr;
	}
}
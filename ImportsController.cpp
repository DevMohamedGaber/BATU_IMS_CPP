#include "ImportsController.h"
#include "Imports.h"

namespace Controllers {
	List<Import^>^ ImportsController::GetImportsList() {
		return Imports::GetAll();
	}
	Import^ ImportsController::GetImportById(int id) {
		return Imports::GetById(id);
	}
}
#include "ImportsController.h"
#include "Imports.h"
#include "AuthenticationController.h"

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

	String^ ImportsController::ReviewImport(int ImportId) {
		if (ImportId == 0) {
			return "Invalid import id.";
		}
		if (AuthenticationController::CurrentUser == nullptr) {
			return "You need to be logged in to review an import.";
		}

		//
		// todo: add role checks
		//

		if (Imports::IsReviewed(ImportId)) {
			return "This import is already reviewed.";
		}
		if (!Imports::Review(ImportId, AuthenticationController::CurrentUser->Id)) {
			return "failed to review the import.";
		}
		return nullptr;
	}
	String^ ImportsController::AcceptImport(int ImportId) {
		if (ImportId == 0) {
			return "Invalid import id.";
		}
		if (AuthenticationController::CurrentUser == nullptr) {
			return "You need to be logged in to review an import.";
		}

		//
		// todo: add role checks
		//
		if (!Imports::IsReviewed(ImportId)) {
			return "Import hasn't been reviewed first, please confirm reviewing to procced.";
		}
		if (Imports::IsAccepted(ImportId)) {
			return "This import is already reviewed.";
		}
		if (!Imports::Accept(ImportId, AuthenticationController::CurrentUser->Id)) {
			return "failed to review the import.";
		}
		return nullptr;
	}
	// implement delete import
	String^ ImportsController::DeleteImport(int ImportId) {
		if (ImportId == 0) {
			return "Invalid import id.";
		}
		if (AuthenticationController::CurrentUser == nullptr) {
			return "You need to be logged in to review an import.";
		}
		Imports::Delete(ImportId);
		return nullptr;
	}
}
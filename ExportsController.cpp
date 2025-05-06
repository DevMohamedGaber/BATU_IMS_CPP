#include "ExportsController.h"
#include "Exports.h"

namespace Controllers
{
	List<Export^>^ ExportsController::GetExportsList() {
		return Exports::GetAll();
	}
	Export^ ExportsController::GetExportById(int id) {
		return Exports::GetById(id);
	}
	String^ ExportsController::AddExport(int CustomerId, String^ Date, List<OrderItem^>^ Items) {
		if (!Exports::Insert(CustomerId, Date, Items)) {
			return "failed to insert the export.";
		}
		return nullptr;
	}
	String^ ExportsController::ChangeExportStatus(int ExportId, int Status) {
		if (ExportId == 0) {
			return "Invalid export id.";
		}
		if (!Exports::ChangeStatus(ExportId, Status)) {
			return "failed to change the export status.";
		}
		return nullptr;
	}
	String^ ExportsController::DeleteExport(int ExportId) {
		if (ExportId == 0) {
			return "Invalid export id.";
		}
		Exports::Delete(ExportId);
		return nullptr;
	}
}
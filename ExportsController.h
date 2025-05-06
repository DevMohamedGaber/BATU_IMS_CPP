#pragma once
#include "Export.h"

using namespace Models;

namespace Controllers
{
	public ref class ExportsController sealed
	{
	public:
		static List<Export^>^ GetExportsList();
		static Export^ GetExportById(int id);
		static String^ AddExport(int SupplierId, String^ ArrivalDate, List<OrderItem^>^ Items);
		static String^ ChangeExportStatus(int ExportId, int Status);
		static String^ DeleteExport(int ExportId);
	};
}
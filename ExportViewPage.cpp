#include "ExportViewPage.h"
#include "ExportsController.h"

namespace Views
{
	ExportViewPage::ExportViewPage(int Id) {
		InitializeComponent();
	}
	ExportViewPage::ExportViewPage(Export^ exportData) {
		InitializeComponent();
	}
}
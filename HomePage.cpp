#include "HomePage.h"
#include "HomeController.h"

using namespace Controllers;

namespace Views
{
	Void HomePage::HomePage_Load(Object^ sender, EventArgs^ e) {
		HomeDTO^ homeData = HomeController::GetHomeData();
		this->totalProductsCountLabel->Text = homeData->TotalProductsCount.ToString();
		this->lowStockCountLabel->Text = homeData->LowStockCount.ToString();
		this->outOfStockCountLabel->Text = homeData->OutOfStockCount.ToString();
		this->suppliersCountLabel->Text = homeData->SuppliersCount.ToString();
        this->valueOfStockLabel->Text = String::Format("$ {0:N2}", homeData->ValueOfStock);
        UpdateChart(homeData->TransactionsChartData);

	}
    Void HomePage::UpdateChart(Dictionary<String^, Tuple<int, int>^>^ data)
    {
        // Clear existing data
        transactionsChart->Series->Clear();

        // Create and configure series
        Series^ importsSeries = gcnew Series("Imports");
        importsSeries->ChartType = SeriesChartType::Column;
        importsSeries->Color = Color::FromArgb(100, 149, 237); // Cornflower blue

        Series^ exportsSeries = gcnew Series("Exports");
        exportsSeries->ChartType = SeriesChartType::Column;
        exportsSeries->Color = Color::FromArgb(220, 20, 60); // Crimson red

        // Sort periods for proper display
        List<String^>^ sortedPeriods = gcnew List<String^>();
        for each(KeyValuePair<String^, Tuple<int, int>^> ^ pair in data)
        {
            if (!String::IsNullOrEmpty(pair->Key)) {
                sortedPeriods->Add(pair->Key);
            }
        }
        sortedPeriods->Sort();

        // Add data points
        for each(String ^ period in sortedPeriods)
        {
            if (!String::IsNullOrEmpty(period) && data->ContainsKey(period))
            {
                importsSeries->Points->AddXY(period, data[period]->Item1);
                exportsSeries->Points->AddXY(period, data[period]->Item2);
            }
        }

        // Add series to chart
        transactionsChart->Series->Add(importsSeries);
        transactionsChart->Series->Add(exportsSeries);

        // Configure chart appearance
        transactionsChart->ChartAreas[0]->AxisX->Title = "Period";
        transactionsChart->ChartAreas[0]->AxisY->Title = "Count";
        transactionsChart->ChartAreas[0]->AxisX->Interval = 1;
        transactionsChart->ChartAreas[0]->RecalculateAxesScale();

        // Enable legend
        transactionsChart->Legends[0]->Enabled = true;
    }
    Void HomePage::Sales_SelectedIndexChanged(Object^ sender, EventArgs^ e)
    {
        try
        {
            String^ selectedPeriod = dynamic_cast<ComboBox^>(sender)->SelectedItem->ToString();
            Dictionary<String^, Tuple<int, int>^>^ chartData = HomeController::GetTransactionsChartData(selectedPeriod);

            UpdateChart(chartData);
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Error loading chart data: " + ex->Message, "Error",
                MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
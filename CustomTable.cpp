#include "CustomTable.h"

namespace Views {
	Void CustomTable::CustomTable_Load(System::Object^ sender, System::EventArgs^ e) {
		Dock = DockStyle::Fill;
	}

    void CustomTable::AddColumn(String^ name, int width) {
        // Store column info for row creation
        columnNames->Add(name);
        columnWidths->Add(width);

        // Existing header creation code
        Panel^ headerCell = gcnew Panel();
        Label^ headerLabel = gcnew Label();

        headerLabel->Text = name;
        headerLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, FontStyle::Bold);
        headerLabel->ForeColor = Color::FromArgb(124, 124, 124);
        headerLabel->TextAlign = ContentAlignment::MiddleLeft;
        headerLabel->Dock = DockStyle::Fill;

        headerCell->Size = System::Drawing::Size(width, 49);
        headerCell->Controls->Add(headerLabel);

        headerPanel->Controls->Add(headerCell);
    }

    void CustomTable::AddRow() {
        FlowLayoutPanel^ rowPanel = gcnew FlowLayoutPanel();
        rowPanel->Margin = System::Windows::Forms::Padding::Empty;
        rowPanel->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
        rowPanel->AutoSize = true;
        rowPanel->WrapContents = false;

        // Create cells for each column
        for (int i = 0; i < columnWidths->Count; i++) {
            Panel^ cell = gcnew Panel();
            cell->Size = System::Drawing::Size(columnWidths[i], 49);
            cell->Margin = System::Windows::Forms::Padding::Empty;
            cell->BackColor = (currentRowIndex % 2 == 0) ? Color::White : Color::WhiteSmoke;

            rowPanel->Controls->Add(cell);
        }

        bodyPanel->Controls->Add(rowPanel);
        currentRowIndex++;
    }
    void CustomTable::AddCell(String^ text, int rowIndex, int columnIndex) {
        if (rowIndex >= bodyPanel->Controls->Count || columnIndex >= columnWidths->Count)
            return;

        FlowLayoutPanel^ row = safe_cast<FlowLayoutPanel^>(bodyPanel->Controls[rowIndex]);
        if (row == nullptr || columnIndex >= row->Controls->Count)
            return;

        Panel^ cell = safe_cast<Panel^>(row->Controls[columnIndex]);
        Label^ label = gcnew Label();

        label->Text = text;
        label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10);
        label->ForeColor = Color::FromArgb(124, 124, 124);
        label->TextAlign = ContentAlignment::MiddleLeft;
        label->Dock = DockStyle::Fill;

        cell->Controls->Add(label);
    }
    Control^ CustomTable::AddButtonCell(String^ text, int rowIndex, int columnIndex) {
    if (rowIndex >= bodyPanel->Controls->Count || columnIndex >= columnWidths->Count)
        return nullptr;

    FlowLayoutPanel^ row = safe_cast<FlowLayoutPanel^>(bodyPanel->Controls[rowIndex]);
    if (row == nullptr || columnIndex >= row->Controls->Count)
        return nullptr;

    Panel^ cell = safe_cast<Panel^>(row->Controls[columnIndex]);
    
    // Clear any existing controls
    cell->Controls->Clear();
    
    // Create a container panel for padding
    Panel^ paddingPanel = gcnew Panel();
    paddingPanel->Dock = DockStyle::Fill;
    paddingPanel->Padding = System::Windows::Forms::Padding(5); // 5px padding on all sides
    
    // Create the button
    Button^ button = gcnew Button();
    button->Text = text;
    button->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9);
    button->BackColor = Color::RoyalBlue;
    button->ForeColor = Color::White;
    button->FlatStyle = FlatStyle::Flat;
    button->Dock = DockStyle::Fill;
    button->Margin = System::Windows::Forms::Padding::Empty; // No margin since we're using the paddingPanel
    
    // Add button to padding panel, and padding panel to cell
    paddingPanel->Controls->Add(button);
    cell->Controls->Add(paddingPanel);
    
    return button;
}
    int CustomTable::GetRowCount() {
        return bodyPanel->Controls->Count;
    }
}
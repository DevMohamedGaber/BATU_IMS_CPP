#pragma once
#include "Category.h"
#include <string>
#include <vector>

namespace Models
{
	public ref struct Item
	{
	public:
		property int Id;
		property System::String^ Name;
		property int Stock;
		property double Price;
		property Models::Category^ Category;

		static Item^ Map(const std::vector<std::string>& row)
		{
			Item^ item = gcnew Item();
			item->Id = row[0].empty() ? 0 : stol(row[0]);
			item->Name = gcnew System::String(row[1].c_str());
			item->Stock = std::stoi(row[2].c_str());
			item->Price = std::stod(row[3].c_str());
			item->Category = gcnew Models::Category();
			item->Category->Id = stoi(row[4]);
			item->Category->Name = gcnew System::String(row[5].c_str());
			return item;
		}
	};
}
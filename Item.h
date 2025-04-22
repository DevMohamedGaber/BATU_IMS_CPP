#pragma once
#include "Category.h"
#include <string>
#include <vector>
using namespace System;
using namespace std;

namespace Models
{
	public ref struct Item
	{
		int Id;
		String^ Name;
		int Stock;
		double Price;
		Category^ Category;

		static Item^ Map(const vector<string>& row)
		{
			Item^ item = gcnew Item();
			item->Id = row[0].empty() ? 0 : stol(row[0]);
			item->Name = gcnew String(row[1].c_str());
			item->Stock = stoi(row[2].c_str());
			item->Price = stod(row[3].c_str());
			item->Category = gcnew Models::Category();
			item->Category->Id = stoi(row[4]);
			item->Category->Name = gcnew String(row[5].c_str());
			return item;
		}
	};
}
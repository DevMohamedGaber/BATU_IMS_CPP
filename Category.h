#pragma once
#include <string>
#include <vector>

using namespace System;
using namespace std;

namespace Models
{
	public ref struct Category
	{
	public:
		property int Id;
		property String^ Name;

		static Category^ Map(const vector<string>& row)
		{
			Category^ category = gcnew Category();
			category->Id = stoi(row[0]);
			category->Name = gcnew String(row[1].c_str());
			return category;
		}
	};
}
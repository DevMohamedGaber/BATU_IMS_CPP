#pragma once
#include <string>
#include <vector>
using namespace System;
using namespace std;

namespace Models
{
	public ref struct Customer
	{
	public:
		property int Id;
		property String^ FirstName;
		property String^ LastName;
		property String^ Email;

		static Customer^ Map(const vector<string>& row)
		{
			Customer^ item = gcnew Customer();
			item->Id = row[0].empty() ? 0 : stol(row[0]);
			item->FirstName = gcnew String(row[1].c_str());
			item->LastName = gcnew String(row[2].c_str());
			item->Email = gcnew String(row[3].c_str());
			return item;
		}
	};
}
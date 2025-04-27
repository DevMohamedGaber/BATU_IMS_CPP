#pragma once
#include <string>
#include <vector>
using namespace System;
using namespace std;

namespace Models
{
	public ref struct Supplier
	{
	public:
		int Id;
		String^ Name;
		DateTime^ ContractedAt;

		static Supplier^ Map(const vector<string>& row)
		{
			Supplier^ supplier = gcnew Supplier();
			supplier->Id = row[0].empty() ? 0 : stoi(row[0]);
			supplier->Name = gcnew String(row[1].c_str());
			supplier->ContractedAt = DateTime::Parse(gcnew String(row[2].c_str()));
			return supplier;
		}
	};
}
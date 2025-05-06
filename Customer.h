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
			item->SetName(row[1], row[2]);
			item->Email = gcnew String(row[3].c_str());
			return item;
		}
		String^ GetFullName()
		{
			String^ result = nullptr;
			if (FirstName != nullptr)
			{
				result = FirstName;
			}
			if (LastName != nullptr)
			{
				if (!result->IsNullOrEmpty(result))
				{
					result += " ";
				}
				result += LastName;
			}
			if (result == nullptr) {
				result = "Customer #" + Id;
			}
			return result;
		}

	private:
		void SetName(string firstname, string lastname) {
			this->FirstName = firstname == "NULL" ? nullptr : gcnew String(firstname.c_str());
			this->LastName = lastname == "NULL" ? nullptr : gcnew String(lastname.c_str());
		}
	};
}
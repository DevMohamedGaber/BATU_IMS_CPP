#pragma once
namespace Models
{
	public ref struct Category
	{
		int Id;
		String^ Name;

		static Category^ Map(const vector<string>& row)
		{
			Category^ category = gcnew Category();
			category->Id = stoi(row[0]);
			category->Name = gcnew String(row[1].c_str());
			return category;
		}
	};
}
#pragma once
using namespace System;
namespace Core {
	public ref struct RoleItem
	{
	public:
		int Id;
		String^ Name;

		RoleItem(int Id, String^ Name)
		{
			this->Id = Id;
			this->Name = Name;
		}
	};
}
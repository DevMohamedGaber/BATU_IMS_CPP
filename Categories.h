#pragma once
#include "Category.h"
using namespace System::Collections::Generic;
using namespace System;

namespace Models
{
	public ref class Categories sealed
	{
	public:
		static List<Category^>^ GetAll();
		static Category^ GetById(int id);
		static bool Insert(String^ Name);
		static bool Update(Category^ category);
		static void Delete(int id);
		static bool Exists(String^ Name);
	};
}
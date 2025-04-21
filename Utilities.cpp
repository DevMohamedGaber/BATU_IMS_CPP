#include <string>
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace std;
namespace Core
{
	public ref class Utilities sealed
	{
	public:
		static string GetNativeString(String^ managedString)
		{
			return msclr::interop::marshal_as<string>(managedString);
		}

		static bool IsNullOrWhiteSpace(const string& str) {
			if (str.empty()) return true;

			for (char c : str) {
				if (!isspace(static_cast<unsigned char>(c)))
					return false;
			}
			return true;
		}
	};
}
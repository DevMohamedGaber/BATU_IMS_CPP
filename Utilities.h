#pragma once
#include <string>

using namespace System;

namespace Core
{
    public ref class Utilities sealed
    {
    public:
        static std::string GetNativeString(String^ managedString);
        static bool IsNullOrWhiteSpace(const std::string& str);
    };
}

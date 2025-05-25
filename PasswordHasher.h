#pragma once
#include <string>

namespace SecurityManager {
    public ref class PasswordHasher sealed
    {
    public:
        static System::String^ HashPassword(System::String^ password);
        static bool VerifyPassword(System::String^ password, System::String^ hash);
    };
}
//#pragma once
//
//namespace Security {
//    public ref class PasswordHasher sealed
//    {
//    public:
//        static System::String^ HashPassword(System::String^ password);
//        static bool VerifyPassword(System::String^ password, System::String^ hash);
//        static System::String^ GenerateSalt(int length = 32);
//
//    private:
//        static array<System::Byte>^ ComputeSHA256(System::String^ input);
//        static array<System::Byte>^ GenerateRandomBytes(int count);
//        static System::String^ BytesToHex(array<System::Byte>^ bytes);
//        
//        PasswordHasher() {} // Static class
//    };
//}
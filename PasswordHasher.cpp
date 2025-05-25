#include "PasswordHasher.h"

using namespace System;
using namespace System::Text;

namespace SecurityManager {
	// implement HashPassword method with string return type
    String^ PasswordHasher::HashPassword(String^ password)
    {
        // Use a simple hashing algorithm for demonstration purposes
        // In production, use a secure hashing algorithm like bcrypt or Argon2
        StringBuilder^ sb = gcnew StringBuilder();
        for (int i = 0; i < password->Length; i++) {
            sb->Append((wchar_t)(password[i] + 3)); // Simple Caesar cipher for demonstration
        }
        return sb->ToString();
    }
	bool PasswordHasher::VerifyPassword(String^ password, String^ hash) {
		// Hash the input password and compare it with the stored hash
		String^ hashedInput = HashPassword(password);
		return hashedInput == hash;
	}
}
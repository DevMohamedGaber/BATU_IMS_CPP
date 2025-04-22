//#include "PasswordHasher.h"
//#include "openssl/sha.h"
//#include <openssl/rand.h>
//#include <sstream>
//#include <iomanip>
//#include <random>
//
//using namespace std;
//
//namespace Helpers
//{
//    public ref class PasswordHasher sealed
//    {
//        string HashPassword(const string& password, const string& salt) {
//            std::string actualSalt = salt.empty() ? GenerateSalt() : salt;
//            return "$sha256$" + actualSalt + "$" + SHA256(actualSalt + password);
//        }
//    };
//}
//
//
//
//bool SimplePasswordHasher::verifyPassword(const std::string& password, const std::string& hash) {
//    if (hash.find("$sha256$") != 0) return false;
//
//    size_t saltEnd = hash.find('$', 8);
//    if (saltEnd == std::string::npos) return false;
//
//    std::string salt = hash.substr(8, saltEnd - 8);
//    std::string newHash = "$sha256$" + salt + "$" + sha256(salt + password);
//
//    return newHash == hash;
//}
//
//std::string SimplePasswordHasher::generateSalt(size_t length) {
//    return bytesToHex(generateRandomBytes(length));
//}
//
//std::string SimplePasswordHasher::sha256(const std::string& input) {
//    unsigned char hash[SHA256_DIGEST_LENGTH];
//    SHA256_CTX sha256;
//    SHA256_Init(&sha256);
//    SHA256_Update(&sha256, input.c_str(), input.size());
//    SHA256_Final(hash, &sha256);
//
//    std::ostringstream oss;
//    oss << std::hex << std::setfill('0');
//    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
//        oss << std::setw(2) << static_cast<int>(hash[i]);
//    }
//    return oss.str();
//}
//
//std::vector<unsigned char> SimplePasswordHasher::generateRandomBytes(size_t count) {
//    std::vector<unsigned char> bytes(count);
//
//    // Try OpenSSL's secure random first
//    if (RAND_bytes(bytes.data(), static_cast<int>(count)) == 1) {
//        return bytes;
//    }
//
//    // Fallback to standard random (less secure)
//    std::random_device rd;
//    std::mt19937 gen(rd());
//    std::uniform_int_distribution<> dis(0, 255);
//
//    for (auto& byte : bytes) {
//        byte = static_cast<unsigned char>(dis(gen));
//    }
//
//    return bytes;
//}
//
//std::string SimplePasswordHasher::bytesToHex(const std::vector<unsigned char>& bytes) {
//    std::ostringstream oss;
//    oss << std::hex << std::setfill('0');
//    for (unsigned char byte : bytes) {
//        oss << std::setw(2) << static_cast<int>(byte);
//    }
//    return oss.str();
//}
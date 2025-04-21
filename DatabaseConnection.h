#pragma once
#include <string>
#include <vector>
#pragma managed(push, off)  // Disable /clr for native code
#include "sqlite/sqlite3.h"
#pragma managed(pop)        // Re-enable /clr

using namespace std;

namespace Models
{
    public ref class DatabaseConnection sealed
    {
    public: static DatabaseConnection^ Instance = nullptr;
    private:
        sqlite3* _db;
        char* _errMsg;
        int _rc;

        DatabaseConnection(const string& dbName);
        ~DatabaseConnection();

    public:
        static void Start(const string& dbName);
        bool Execute(const string& sql);
        vector<vector<string>> Query(const string& sql);

        long long LastInsertId();
        bool TableExists(const string& tableName);
    };
}
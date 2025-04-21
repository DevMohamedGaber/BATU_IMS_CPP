#include "sqlite/sqlite3.h"
#include <iostream>
#include <string>
#include <vector>

using namespace System;
using namespace std;

namespace Models
{
    public ref class DatabaseConnection sealed
    {
    public: static DatabaseConnection^ Instance = nullptr;
    private:
        sqlite3* _db;
        char* _errMsg = 0;
        int _rc;

        // constractor - set up database on launch
        DatabaseConnection(const string& dbName)
        {
            pin_ptr<sqlite3*> dbPinned = &_db;
            _rc = sqlite3_open(dbName.c_str(), dbPinned);
            if (_rc) {
                string errorMsg = "Can't open database: ";
                errorMsg += sqlite3_errmsg(_db);
                _errMsg = _strdup(errorMsg.c_str());
                sqlite3_close(_db);
                _db = nullptr;
                return;
            }
        }
        // deconstractor - clean up and close db connection
        ~DatabaseConnection() {
            if (_db) {
                sqlite3_close(_db);
                cout << "Closed database connection" << endl;
            }
        }

    public:
        static void Start(const string& dbName)
        {
            if(Instance != nullptr)
            {
                return;
            }

            Instance = gcnew DatabaseConnection(dbName);

            // ensure all tables are created
            if (!Instance->TableExists("Users")) {
                Instance->Execute("CREATE TABLE Users (Id INTEGER PRIMARY KEY AUTOINCREMENT, Username TEXT NOT NULL UNIQUE, FirstName TEXT, LastName TEXT, Password TEXT NOT NULL, Email TEXT NOT NULL, Role INTEGER NOT NULL)");
                Instance->Execute("INSERT INTO Users VALUES (null, 'admin', 'Administrator', null, 'admin', 'admin@system.com', 0)");
            }

            if (!Instance->TableExists("Inventory")) {
                Instance->Execute("CREATE TABLE Inventory (Id INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT NOT NULL UNIQUE, Stock INTEGER, Price REAL, CategoryId INTEGER)");
            }

            if (!Instance->TableExists("Categories")) {
                Instance->Execute("CREATE TABLE Categories (Id INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT NOT NULL UNIQUE)");
            }
        }

        // no return queries
        bool Execute(const string& sql) {
            if (!_db) return false;
            pin_ptr<char*> errMsgPinned = &_errMsg;
            _rc = sqlite3_exec(_db, sql.c_str(), nullptr, nullptr, errMsgPinned);
            if (_rc != SQLITE_OK) {
                cerr << "SQL error: " << _errMsg << endl;
                sqlite3_free(_errMsg);
                return false;
            }
            return true;
        }

        // return queries
        vector<vector<string>> Query(const string& sql) {
            vector<vector<string>> results;

            if (!_db) {
                return results;
            }

            sqlite3_stmt* stmt;
            _rc = sqlite3_prepare_v2(_db, sql.c_str(), -1, &stmt, nullptr);

            if (_rc != SQLITE_OK) {
                cerr << "Failed to prepare statement: " << sqlite3_errmsg(_db) << endl;
                return results;
            }

            int cols = sqlite3_column_count(stmt);

            while ((_rc = sqlite3_step(stmt)) == SQLITE_ROW) {
                vector<string> row;
                for (int i = 0; i < cols; i++) {
                    const char* val = (const char*)sqlite3_column_text(stmt, i);
                    row.push_back(val ? val : "NULL");
                }
                results.push_back(row);
            }

            if (_rc != SQLITE_DONE) {
                cerr << "Error executing query: " << sqlite3_errmsg(_db) << endl;
            }

            sqlite3_finalize(stmt);
            return results;
        }

        // get the id of the last inserted row
        Int64 LastInsertId()
        {
            if (!_db) return -1;  // Error case
            return static_cast<System::Int64>(sqlite3_last_insert_rowid(_db));
        }

        // check if a table exists
        bool TableExists(const string& tableName)
        {
            auto result = Query("SELECT name FROM sqlite_master WHERE type='table' AND name=" + tableName +";");
            return !result.empty();
        }
    };
}
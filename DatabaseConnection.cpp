#include "DatabaseConnection.h"
#include "sqlite/sqlite3.h"
#include "PasswordHasher.h"
#include "Utilities.h"
#include <iostream>
#include <string>
#include <vector>

using namespace System;
using namespace std;
using namespace SecurityManager;
using namespace Core;

namespace Models
{
    // constractor - set up database on launch
    DatabaseConnection::DatabaseConnection(const string& dbName) {
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
    DatabaseConnection::~DatabaseConnection() {
        if (_db) {
            sqlite3_close(_db);
            cout << "Closed database connection" << endl;
        }
    }

   void DatabaseConnection::Start(const string& dbName)
    {
        if(Instance != nullptr)
        {
            return;
        }

        Instance = gcnew DatabaseConnection(dbName);

        // ensure all tables are created and seeded for testing
        if (!Instance->TableExists("Users")) {
            Instance->Execute("CREATE TABLE Users (Id INTEGER PRIMARY KEY AUTOINCREMENT, Username TEXT NOT NULL UNIQUE, FirstName TEXT, LastName TEXT, Password TEXT NOT NULL, Email TEXT NOT NULL, Role INTEGER NOT NULL)");
			// seed the database with 1 of each role
			string adminQuery = "INSERT INTO Users VALUES (null, 'admin', 'Administrator', null, '" + Utilities::GetNativeString(PasswordHasher::HashPassword("admin")) + "', 'admin@system.com', 0)";
            Instance->Execute(adminQuery);
			string staffPassword = Utilities::GetNativeString(PasswordHasher::HashPassword("staff"));
            Instance->Execute("INSERT INTO Users VALUES (null, 'staff', 'Staff', null, '" + staffPassword + "', 'staff@system.com', 1)");
			string retailerPassword = Utilities::GetNativeString(PasswordHasher::HashPassword("retailer"));
            Instance->Execute("INSERT INTO Users VALUES (null, 'retailer', 'Retailer', null, '" + retailerPassword + "', 'retailer@system.com', 2)");
        }
        if (!Instance->TableExists("Inventory")) {
            Instance->Execute("CREATE TABLE Inventory (Id INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT NOT NULL UNIQUE, Stock INTEGER, Price REAL, CategoryId INTEGER)");
			// seed the database with 20 random inventory items
			for (int i = 1; i <= 20; ++i) {
				string itemName = "Item" + to_string(i);
				Instance->Execute("INSERT INTO Inventory (Name, Stock, Price, CategoryId) VALUES ('" + itemName + "', " + to_string(rand() % 100) + ", " + to_string(rand() % 1000 / 10.0) + ", " + to_string(rand() % 5 + 1) + ")");
			}
        }
        if (!Instance->TableExists("Categories")) {
            Instance->Execute("CREATE TABLE Categories (Id INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT NOT NULL UNIQUE)");
			// seed the database with 20 random categories
            for (int i = 1; i <= 20; ++i) {
				string categoryName = "Category" + to_string(i);
				Instance->Execute("INSERT INTO Categories (Name) VALUES ('" + categoryName + "')");
			}
        }
		if (!Instance->TableExists("Customers")) {
			Instance->Execute("CREATE TABLE Customers (Id INTEGER PRIMARY KEY AUTOINCREMENT, FirstName TEXT NOT NULL, LastName TEXT NOT NULL, Email TEXT NOT NULL UNIQUE)");
			// seed the database with 20 random customers
			for (int i = 1; i <= 20; ++i) {
				string firstName = "First" + to_string(i);
				string lastName = "Last" + to_string(i);
				string email = firstName + "." + lastName + "@example.com";
				Instance->Execute("INSERT INTO Customers (FirstName, LastName, Email) VALUES ('" + firstName + "', '" + lastName + "', '" + email + "')");
			}
		}   
        if (!Instance->TableExists("Suppliers")) {
			Instance->Execute("CREATE TABLE Suppliers (Id INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT NOT NULL UNIQUE, ContractAt TEXT NOT NULL)");
			// seed the database with 20 random suppliers
            for (int i = 1; i <= 20; ++i) {
                string supplierName = "Supplier" + to_string(i);
                string contractDate = "2023-01-" + to_string(i % 31 + 1); // Random date in January 2023
                Instance->Execute("INSERT INTO Suppliers (Name, ContractAt) VALUES ('" + supplierName + "', '" + contractDate + "')");
            }
        }
        if (!Instance->TableExists("Imports")) {
            Instance->Execute("CREATE TABLE Imports (Id INTEGER PRIMARY KEY AUTOINCREMENT, ArrivalDate TEXT NOT NULL UNIQUE, Status INTEGER NOT NULL, ItemCount INTEGER, SupplierId INTEGER NOT NULL, AdderUserId INTEGER NOT NULL, ReviewerUserId INTEGER, AccepterUserId INTEGER)");
            Instance->Execute("CREATE TABLE Import_Items (ImportId INTEGER NOT NULL, ItemId INTEGER NOT NULL, Count INTEGER NOT NULL)");
        }
		if (!Instance->TableExists("Exports")) {
			Instance->Execute("CREATE TABLE Exports (Id INTEGER PRIMARY KEY AUTOINCREMENT, Date TEXT NOT NULL UNIQUE, Status INTEGER NOT NULL, ItemCount INTEGER, CustomerId INTEGER NOT NULL, RetailerUserId INTEGER NOT NULL)");
			Instance->Execute("CREATE TABLE Export_Items (ExportId INTEGER NOT NULL, ItemId INTEGER NOT NULL, Count INTEGER NOT NULL)");
		}
    }

    // no return queries
    bool DatabaseConnection::Execute(const string& sql) {
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
    vector<vector<string>> DatabaseConnection::Query(const string& sql) {
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
    Int64 DatabaseConnection::LastInsertId()
    {
        if (!_db) return -1;  // Error case
        return static_cast<Int64>(sqlite3_last_insert_rowid(_db));
    }

    // check if a table exists
    bool DatabaseConnection::TableExists(const string& tableName)
    {
        auto result = Query("SELECT name FROM sqlite_master WHERE type='table' AND name=" + tableName +";");
        return !result.empty();
    }
}
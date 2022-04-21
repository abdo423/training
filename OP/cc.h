#pragma once
#include <stdlib.h>
#include <iostream>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>
using namespace std;
using namespace sql;
class cc
{

	const string  server = "tcp://127.0.0.1:3306";
	const string username = "root";
	const string password = "Bodylovequran1";

	Driver* driver;
	Connection* con;

public:
	cc();
	void dbInsert(string query, string user, string pass);
	ResultSet* dbRetrieve(string query);
	bool dbCompare(string email, string pass, string query);
	~cc();

	};


#pragma once
#include <stdlib.h>

#include <msclr/marshal_cppstd.h>
#include <vector>

#include <iostream>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>
using namespace std;
using namespace sql;
using namespace System;
  class test
{
	
		const string  server = "tcp://127.0.0.1:3306";
		const string username = "root";
		const string password = "Bodylovequran1";//Bodylovequran1

		Driver* driver;
		Connection* con;
	public:
		test();
		void dbSet(string query);
		int countRowTable(string query);
		ResultSet* dbGet(string query);
		bool dbCompare(string email,string pass,string query);
		ResultSet* dbRetrieve();
	  void email_insert(string email, string password);
		bool login(string email, string password);
		~test();
	
};





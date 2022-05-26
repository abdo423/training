#include "test.h"
#include <msclr/marshal_cppstd.h>
#include<string>
using namespace System;

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
 test::test()
{
	try
	{
		driver = get_driver_instance();
		con = driver->connect(server, username, password);
		con->setSchema("tsts");
	}
	catch (SQLException e)
	{
		MessageBox::Show(gcnew String(e.what()));
		system("pause");
		exit(1);
	}
	if (con) {
		cout << "Connection Successful!" << endl;
	}
	else {
		cout << "Connection Successful!" << endl;
	}

}
 int test ::countRowTable(string query) {
	 ResultSet* result;
	 PreparedStatement* pstmt;
	 pstmt = con->prepareStatement(query);
	 result = pstmt->executeQuery();
	 int counter = 0;
	 while (result->next())
	 {
		 counter++;
	 }
	 return counter;
 }
 





void test::dbSet(string query) {
	try {
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement(query);
		pstmt->executeQuery();
		delete pstmt;
	}
	catch (SQLException e) {
		cout << e.what() << endl;
	}
}

ResultSet* test::dbGet(string query) {

	ResultSet* result;
	PreparedStatement* pstmt;
	pstmt = con->prepareStatement(query);
	result = pstmt->executeQuery();
	delete pstmt;
	return result;

}

bool test::dbCompare(string email, string pass,string query)
{

	ResultSet* result;
	PreparedStatement* pstmt;
	pstmt = con->prepareStatement(query);
	result = pstmt->executeQuery();
	
	while (result->next())
	{
		
	
		if(result->getString(1).c_str() == email && result->getString(2).c_str() == pass)
		{
			
			return true;
			
			
			
		}
		
	}
	return false;
}


void test::email_insert(string email, string password) {
	dbSet("INSERT INTO login VALUES('" + email + "','" + password + "')");
}

bool test::login(string email, string password)
{
	return dbCompare(email, password, "select * from login");
}



test::~test() {
	delete con;
}
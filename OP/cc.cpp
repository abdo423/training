#include "cc.h"
#include <msclr/marshal_cppstd.h>
#include<string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
cc::cc()
{
	try
	{
		driver = get_driver_instance();
		con = driver->connect(server, username, password);
		con->setSchema("ds_trail");
	}
	catch (SQLException e)
	{
		MessageBox::Show("Could not connect to server.Error message : " + gcnew String(e.what()));
		
		system("pause");
		exit(1);
	}
	if (con) {
		MessageBox::Show("connection succes");
	}
	else {
		MessageBox::Show("connection fail");
	}

}

void cc::dbInsert(string query,string user , string pass) {
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

ResultSet* cc::dbRetrieve(string query) {
	try {

		ResultSet* result;
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement(query);
		result = pstmt->executeQuery();
		while (result->next())
			cout << result->getString(1).c_str() << endl;
		return result;
		delete result;
		delete pstmt;
	}
	catch (SQLException e) {
		cout << e.what() << endl;
	}
}
bool cc::dbCompare(string email, string pass, string query)
{

	ResultSet* result;
	PreparedStatement* pstmt;
	pstmt = con->prepareStatement(query);
	result = pstmt->executeQuery();

	while (result->next())
	{


		if (result->getString(1).c_str() == email && result->getString(2).c_str() == pass)
		{

			return true;



		}

	}
	return false;
}
cc::~cc() {
	delete con;
}

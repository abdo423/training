#include "ticket.h"
#include "test.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ticket::ticket()
{
}
ticket::ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel)
{
	passeneger_name = passeneger_name;
	boarding_point = boarding_point;
	destination_point = destination_point;
	date_of_travel = date_of_travel;
}

void ticket::addTicket(string x,string y,string z,string l)
{

	//cin >> passeneger_name >> boarding_point >> destination_point >> date_of_travel;
	//ticket t1 = ticket(passeneger_name, boarding_point, destination_point, date_of_travel);

	test* passenger1 = new test();
	passenger1->dbSet("insert into passenger(passeneger_name, start_point, end_point, Date_of_travel) values('" + x + "', '" + y + "', '" + z + "', '" + l +"');");
}
ResultSet* ticket::displayTicket()
{
	test t;
	ResultSet* result = t.dbRetrieve();
	return result;
}
void ticket::passengerTicket(string x, string y, string z, string l,string a)
{
	try {
		test t;
		t.dbSet("passenger 	passenger SET  passeneger_name = '"+x+"', start_point = '"+y+"',end_point='"+z+"',Date_of_travel= '"+l+"' where passeneger_name='"+a+"'");
	}
	catch (SQLException e)
	{
		MessageBox::Show(gcnew String(e.what()));
		cout << "Could not connect to server. Error message: " << e.what() << endl;
		system("pause");
		exit(1);
	}

}
//strings refers to number of columns in database

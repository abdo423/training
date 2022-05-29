#include "passeneger.h"
#include "test.h"
#include<string>
#include"ticket.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
passeneger::passeneger()
{
}

void passeneger::loadTicket()
{
	ResultSet* result;
	result=obj.dbGet("select *from passenger");
	while (result->next())
	{
		ticket t = ticket(result->getString(1).c_str(), result->getString(2).c_str(), result->getString(3).c_str(), result->getString(4).c_str(),result->getString(5).c_str(),result->getString(6).c_str());
		tickets.push_back(t);
	}
	

}




void passeneger::addTicket(string x, string y, string z, string l,string number_of_train,string id)
{
	ticket t = ticket(x, y, z, l,number_of_train,id);
	tickets.push_back(t);


}
vector<ticket> passeneger::displayTicket()
{
	return tickets;
}
void passeneger::updateTicket(string name, string boarding, string destination, string date, string checker)
{
	for (int i = 0; i < tickets.size(); i++) 
	{
		if(checker ==tickets[i].passeneger_name)
		{
			tickets[i].passeneger_name = name;
			tickets[i].boarding_point = boarding;
			tickets[i].destination_point = destination;
			tickets[i].date_of_travel = date;
			
		
		}
	}

}
void passeneger::deletDB() {
	obj.dbSet("DELETE FROM `tsts`.`passenger` WHERE( `passeneger_name` IS NOT NULL )");
}
void passeneger::storeTicket()
{
	for (int i = 0; i < tickets.size(); i++)
		
		obj.dbSet("INSERT INTO `tsts`.`passenger` VALUES('" + tickets[i].passeneger_name + "', '" + tickets[i].boarding_point + "', '" + tickets[i].destination_point + "', '" + tickets[i].date_of_travel + "', '" + tickets[i].number_of_train + "','"+tickets[i].id + "');");
}
void passeneger::delvector() 
{
	tickets.clear();
}
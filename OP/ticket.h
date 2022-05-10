#include<iostream>
#include <string>
#include "test.h"
using namespace std;


class ticket
{
public:
	std::string passeneger_name, boarding_point, destination_point, date_of_travel;

public:
	ticket();
	ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel);
	void passengerTicket(string x, string y, string z, string l,string a);
	void addTicket(string x,string y,string z,string l);
	ResultSet *  displayTicket();

};

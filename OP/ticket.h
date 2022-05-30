
#include<iostream>
#ifndef ticket_HEADER
#define ticket_HEADER
#include <string>
#include "test.h"
using namespace std;


class ticket
{
	string passeneger_name, boarding_point, destination_point, date_of_travel, number_of_train, id, id_user;

public:
	ticket();
	ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel, string number_of_train, string id , string id_user);
	string get_passeneger_name();
	void set_passeneger_name(string);
	string get_boarding_point();
	void set_boarding_point(string);
	string get_destination_point();
	void set_destination_point(string);
	string get_date_of_travel();
	void set_date_of_travel(string);
	string get_number_of_train();
	void set_number_of_train(string);
	string get_id();
	void set_id(string);
	string get_id_user();
	void set_id_user(string);
	
	//ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel,string number_of_train);

};
#endif
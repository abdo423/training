
#include<iostream>
#ifndef ticket_HEADER
#define ticket_HEADER
#include <string>
#include "test.h"
using namespace std;


class ticket
{
public:
	string passeneger_name, boarding_point, destination_point, date_of_travel,number_of_train,id, id_user ;
	ticket();
	ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel, string number_of_train, string id , string id_user);
	//ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel,string number_of_train);

};
#endif
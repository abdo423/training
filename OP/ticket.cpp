#include "ticket.h"

//strings refers to number of columns in database

ticket::ticket()
{
}

ticket::ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel, string number_of_train,string id)
{
	this->passeneger_name = passeneger_name;
	this->boarding_point = boarding_point;
	this->destination_point = destination_point;
	this->date_of_travel = date_of_travel;
	this->number_of_train = number_of_train;
	this->id = id;
}


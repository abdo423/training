#include "ticket.h"

//strings refers to number of columns in database

ticket::ticket()
{
}

ticket::ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel)
{
	this->passeneger_name = passeneger_name;
	this->boarding_point = boarding_point;
	this->destination_point = destination_point;
	this->date_of_travel = date_of_travel;

}

#include "ticket.h"

//strings refers to number of columns in database

ticket::ticket()
{
	this->passeneger_name = "";
	this->boarding_point = "";
	this->destination_point = "";
	this->date_of_travel = "";
	this->number_of_train = "";
	this->id = "";
	this->id_user = "";
}

ticket::ticket(string passeneger_name, string boarding_point, string destination_point, string date_of_travel, string number_of_train,string id , string id_user)
{
	this->passeneger_name = passeneger_name;
	this->boarding_point = boarding_point;
	this->destination_point = destination_point;
	this->date_of_travel = date_of_travel;
	this->number_of_train = number_of_train;
	this->id = id;
	this->id_user = id_user;
}

string ticket::get_passeneger_name() 
{
	return this->passeneger_name;
}
void ticket::set_passeneger_name(string s) {
	this->passeneger_name = s;
}
string ticket::get_boarding_point()
{
	return this->boarding_point;
}
void ticket::set_boarding_point(string s) {
	this->boarding_point = s;
}
string ticket::get_destination_point() {
		return this->destination_point;
}
void ticket::set_destination_point(string s) {
	this->destination_point = s;
}
string ticket::get_date_of_travel()
{
	return this->date_of_travel;
}
void ticket::set_date_of_travel(string s) {
	this->date_of_travel = s;
}
string ticket::get_number_of_train() 
{
	return this->number_of_train;
}
void ticket::set_number_of_train(string s) {
	this->number_of_train = s;
}
string ticket::get_id()
{
	return this->id;
}
void ticket::set_id(string s) {
	this->id = s;
}
string ticket::get_id_user()
{
	return this->id_user;
}
void ticket::set_id_user(string s) {
	this->id_user = s;
}

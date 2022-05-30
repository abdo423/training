#include "trains.h"
#include<string>
#include"adminForm1h.h"
using namespace std;



trains::trains()
{
	this->train_name = "";
	this->train_number = "";
	this->boarding_point = "";
	this->destination_point = "";
	this->no_seats = 0;
	this->ticket_price = 0;
	this->DateOfTravel = "";
	this->TimeOfTravel = "";
	this->no_people = 0;
}
trains::trains(string train_name, string train_number, string boarding_point, string destination_point, string no_seats, string ticket_price, string DateOfTravel, string TimeOfTravel, int no_people)
{
	this->train_name = train_name;
	this->train_number = train_number;
	this->boarding_point = boarding_point;
	this->destination_point = destination_point;
	this->no_seats = stoi(no_seats);
	this->ticket_price = stoi(ticket_price);
	this->DateOfTravel = DateOfTravel;
	this->TimeOfTravel = TimeOfTravel;
	this->no_people = no_people;

}

string trains::get_train_name() {
	return this->train_name;
}
string trains::get_train_number() {
	return this->train_number;
}
string trains::get_boarding_point() {
	return this->boarding_point;
}
string trains::get_destination_point() {
	return this->destination_point;
}
int trains::get_no_seats() {
	return this->no_seats;
}
int trains::get_ticket_price() {
	return this->ticket_price;
}
string trains::get_DateOfTravel() {
	return this->DateOfTravel;
}
string trains::get_TimeOfTravel() {
	return this->TimeOfTravel;
}
int trains::get_no_people() {
	return this->no_people;
}
 
 void trains::set_train_number(string s) {
  this->train_number = s;
}
 void trains::set_boarding_point(string s) {
  this->boarding_point = s;
}
 void trains::set_destination_point(string s) {
	this->destination_point = s ;
}
void trains::set_no_seats(int s) {
	this->no_seats = s;
}
void trains::set_ticket_price(int s) {
	 this->ticket_price = s ;
}
void trains::set_DateOfTravel(string s) {
	this->DateOfTravel = s;
}
void trains::set_TimeOfTravel(string s) {
	this->TimeOfTravel = s;
}
void  trains::set_no_people(int s) {
	this->no_people = s;
}
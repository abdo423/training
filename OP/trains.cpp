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
 
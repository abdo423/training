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
	this->no_seats = "";
	this->ticket_price = "";
	this->DateOfTravel = "";
	this->TimeOfTravel = "";

}
trains::trains(string train_name, string train_number, string boarding_point, string destination_point, string no_seats, string ticket_price, string DateOfTravel, string TimeOfTravel)
{
	this->train_name = train_name;
	this->train_number = train_number;
	this->boarding_point = boarding_point;
	this->destination_point = destination_point;
	this->no_seats = no_seats;
	this->ticket_price = ticket_price;
	this->DateOfTravel = DateOfTravel;
	this->TimeOfTravel = TimeOfTravel;

}
 
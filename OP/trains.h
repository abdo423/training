#pragma once
#include <vector>
#include "test.h"
#include <iostream>

using namespace std;



class trains
{

public:


	string train_name;
	string train_number;
	string boarding_point;
	string destination_point;
	int no_seats;
	int ticket_price;
	string DateOfTravel;
	string TimeOfTravel;
	int no_people;
	trains();
	trains(string train_name, string train_number, string boarding_point, string destination_point, string no_seats, string ticket_price, string DateOfTravel, string TimeOfTravel, int no_people);
	//trains(string train_name, string train_number, string boarding_point, string destination_point, string no_seats, string ticket_price, string DateOfTravel, string TimeOfTravel, string no_people);
	
};


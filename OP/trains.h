#pragma once
#include <vector>
#include"ticket.h"
#include "test.h"
#include <iostream>

using namespace std;



class trains
{

	string train_name;
	string train_number;
	string boarding_point;
	string destination_point;
	int no_seats;
	int ticket_price;
	string DateOfTravel;
	string TimeOfTravel;
	int no_people;
public:

	//vector<ticket>bookedTickets;
	
	trains();
	trains(string train_name, string train_number, string boarding_point, string destination_point, string no_seats, string ticket_price, string DateOfTravel, string TimeOfTravel, int no_people);
	string get_train_name();
	string get_train_number();
	string get_boarding_point();
	string get_destination_point();
	int get_no_seats();
	int get_ticket_price();
	string get_DateOfTravel();
	string get_TimeOfTravel();
	int get_no_people();

	void set_train_name(string s);
	void set_train_number(string s);
	void set_boarding_point(string s);
	void set_destination_point(string s);
	 void set_no_seats(int s);
	 void set_ticket_price(int s);
	 void set_DateOfTravel(string s);
	 void set_TimeOfTravel(string s);
	 void set_no_people(int s);
	//trains(string train_name, string train_number, string boarding_point, string destination_point, string no_seats, string ticket_price, string DateOfTravel, string TimeOfTravel, string no_people);
	
};


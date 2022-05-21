#pragma once
#include<vector>
#include"ticket.h"
#include"test.h"
using namespace std;

 class passeneger
{

public:
	test obj;
	vector<ticket>tickets;
	passeneger();
	void loadTicket();
	void storeTicket();
	void delvector();
	void updateTicket(string x, string y, string z, string l, string a);
	void deletDB();
	void addTicket(string x, string y, string z, string l);
	vector<ticket> displayTicket();

};


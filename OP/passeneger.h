#pragma once
#include<vector>
#include"ticket.h"
#include"test.h"
#include"admin.h"
using namespace std;

 class passeneger
{
	 test obj;
	 admin A;
public:
	
	vector<ticket>tickets;
	passeneger();
	void loadTicket();
	void storeTicket();
	void delvector();
	void updateTicket(string x, string y, string z, string l, string number_of_train, string a, string id_user);
	void deletDB();
	//void addTicket(string x, string y, string z, string l,string number_of_train);
	void addTicket(string x, string y, string z, string l, string number_of_train, string id , string id_user);
	vector<ticket> displayTicket();
	bool checkId(string h);
	

};


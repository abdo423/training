#pragma once
#include <vector>
#include "test.h"
#include <iostream>

using namespace std;



 class admin
{
	 test obj;
	 ResultSet* result = obj.dbGet("select * from test_train");
public:

	vector<string> v1_Train_Name;
	vector<string> v2_Num_Train;
	vector<string> v3_Boarding_point;
	vector<string> v4_Destination_point;
	vector<string> v5_Num_Seats;
	vector<string> v6_ticket_price;
	vector<string> v7_Date_travel;
	admin();
	void delet(string del);
	bool checkingForNo_Train(string s);
	void Add(string v1 , string v2, string v3, string v4, string v5, string v6, string v7);
};


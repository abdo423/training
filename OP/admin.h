#pragma once
#include"test.h"
#include<vector>
#include"trains.h"
#include<ctime>
 class admin
{
	 test obj;
	 ResultSet* result = obj.dbGet("select * from test_train");
public:
    vector<trains> adminTrains;
    int deletRow(string del);
	void loadTrains();
    bool checkingForNo_Train(string s);
	void  AddRow(string v1, string v2, string v3, string v4, string v5, string v6, string v7, string v8, int v9);
	void deletDB();
	void insertDB();
	void delvector();
	bool checkDateWithlocalDate(string date, string timing);
	bool checkTimeWithlocalTime(string timeing);
 };



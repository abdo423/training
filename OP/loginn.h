#pragma once
#include "users.h"
#include<string>
#include<vector>
#include"test.h"
#include <random>
using namespace std;

class loginn
{
	test obj;
public :
	vector <users> user;
	loginn();
	void loadusers();
	
	void email_insert(string email, string pass);
	
	bool compare(string email);
	void deletDB();
	void insertDB();
	void delvector();
};


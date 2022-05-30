#pragma once
#include<string>
using namespace std;
 class users
{
	 string email, password, id_passenger;
public :
	
	users();
	users(string email, string password, string id_passenger);
	string get_email();
	string get_password();
	string get_id_passenger();
};


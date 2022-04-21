#include "Email_login.h"
#include"cc.h"

Email_login::Email_login()
{
}

bool Email_login::login(string email,string password)
{
	cc dbconn;
	return dbconn.dbCompare(email,password, "select * from login;");
	
}

Email_login::~Email_login()
{
	
}

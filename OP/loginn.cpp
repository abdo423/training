#include "loginn.h"

loginn::loginn() {

}
void loginn::loadusers() {
	ResultSet* result;
	result = obj.dbGet("select * from login");
	while (result->next())
	{
		users t = users(result->getString(1), result->getString(2), result->getString(3));
		user.push_back(t);
	}
}


void loginn::email_insert(string email, string password) {
	users t = users(email, password, to_string(user.size()+1));
	user.push_back(t);
}

bool loginn::compare(string email)
{
	for(int i=0 ;i < user.size() ; i++)
	{
		if (user[i].get_email() == email )
		{
			return true;
		}
	}
	return false;
}

void loginn::deletDB() {
	obj.dbSet("DELETE FROM `tsts`.`login` WHERE( `password` IS NOT NULL )");
}

void loginn::insertDB() {
	for (int i = 0; i < user.size(); i++)
		obj.dbSet("INSERT INTO `tsts`.`login` VALUES('" + user[i].get_email() + "','" + user[i].get_password() + "','" + user[i].get_id_passenger() + "')");
}
void loginn::delvector()
{
	user.clear();
}

#include "admin.h"


void admin::loadTrains()
{

	ResultSet* result;
	result = obj.dbGet("select *from test_train");
	while (result->next())
	{
		int  people = stoi(result->getString(9));
		trains t = trains(result->getString(1), result->getString(2), result->getString(3), result->getString(4), result->getString(5), result->getString(6), result->getString(7), result->getString(8), people ) ;
		adminTrains.push_back(t);
	}
}

bool admin::checkingForNo_Train(string s) {
	bool check = false;


	for (int i = 0; i < adminTrains.size(); i++)
	{
		if (adminTrains[i].train_number == s)
		{
			check = true;
			break;
		}
	}
	return check;
}




void admin::AddRow(string v1, string v2, string v3, string v4, string v5, string v6, string v7, string v8, int v9) {

	trains a = trains(v1, v2, v3, v4, v5, v6, v7, v8 , v9);
	adminTrains.push_back(a);

}


int admin::deletRow(string del)
{
	int people; 
	for (int i = 0; i < adminTrains.size(); i++)
	{
		if (adminTrains[i].train_number == del) {
			people = adminTrains[i].no_people;
			adminTrains.erase(adminTrains.begin() + i);
			break;
		}
	}
	return people;
	
}

void admin::deletDB() {
	obj.dbSet("DELETE FROM `tsts`.`test_train` WHERE( `train_number` IS NOT NULL )");
}


void admin::insertDB() {
	for (int i = 0; i < adminTrains.size(); i++)
		obj.dbSet("INSERT INTO `tsts`.`test_train` VALUES('" + adminTrains[i].train_name + "','" + adminTrains[i].train_number + "','" + adminTrains[i].boarding_point + "','" + adminTrains[i].destination_point + "','" + to_string( adminTrains[i].no_seats) + "','" + to_string(adminTrains[i].ticket_price) + "','"+adminTrains[i].DateOfTravel+"','" + adminTrains[i].TimeOfTravel + "','" + to_string(adminTrains[i].no_people) + "')");
}
void admin::delvector()
{
	adminTrains.clear();
}
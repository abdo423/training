#include "admin.h"
void admin::deletRow(string del)
{
	for (int i = 0; i < adminTrains.size(); i++)
	{
		if (adminTrains[i].train_number == del) {
			adminTrains.erase(adminTrains.begin() + i);
			break;
		}
	}
	//for( ptr=admin.begin() ;ptr!= admin.end();ptr++)
	//	if (ptr->train_number==del) {
	//		admin.erase(ptr);
	//		break;
	//	}
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




void admin::AddRow(string v1, string v2, string v3, string v4, string v5, string v6, string v7, string v8) {

	trains a = trains(v1, v2, v3, v4, v5, v6, v7, v8);
	adminTrains.push_back(a);

}


void admin::deletDB() {
	obj.dbSet("DELETE FROM `ds_trial`.`test_train` WHERE( `train_number` IS NOT NULL )");
}


void admin::insertDB() {
	for (int i = 0; i < adminTrains.size(); i++)
		obj.dbSet("INSERT INTO `tsts`.`test_train`  VALUES('" + adminTrains[i].train_name + "','" + adminTrains[i].train_number + "','" + adminTrains[i].boarding_point + "','" + adminTrains[i].destination_point + "','" + adminTrains[i].no_seats + "','" + +"','" + adminTrains[i].ticket_price + "','" + adminTrains[i].TimeOfTravel + "')");
}
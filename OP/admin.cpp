#include "admin.h"
#include<string>

admin::admin() {
		while (result->next()) {
			v1_Train_Name.push_back(result->getString(1).c_str());
			v2_Num_Train.push_back(result->getString(2).c_str());
			v3_Boarding_point.push_back(result->getString(3).c_str());
			v4_Destination_point.push_back(result->getString(4).c_str());
			v5_Num_Seats.push_back(result->getString(5).c_str());
			v6_ticket_price.push_back(result->getString(6).c_str());
			v7_Date_travel.push_back(result->getString(7).c_str());
			v8_Time_travel.push_back(result->getString(8).c_str());
		}
	
}

void admin::deletRow(string del)
{
	for(int i=0 ;i<v2_Num_Train.size(); i++)
		if (v2_Num_Train.at(i)==del) {
			v1_Train_Name.erase(next(v1_Train_Name.begin(), i));
			v2_Num_Train.erase(next(v2_Num_Train.begin(), i));
			v3_Boarding_point.erase(next(v3_Boarding_point.begin(), i));
			v4_Destination_point.erase(next(v4_Destination_point.begin(), i));
			v5_Num_Seats.erase(next(v5_Num_Seats.begin(), i));
			v6_ticket_price.erase(next(v6_ticket_price.begin(), i));
			v7_Date_travel.erase(next(v7_Date_travel.begin(), i));
			v8_Time_travel.erase(next(v8_Time_travel.begin(), i));
			break;
		}
}



bool admin::checkingForNo_Train(string s) {
	bool check = false;
	

	for (int i = 0; i< v2_Num_Train.size();i++)
	{
		if (v2_Num_Train.at(i) == s)
		{
			check = true;
			break;
		}
	}
	return check;
}




void admin::AddRow(string v1, string v2, string v3, string v4, string v5, string v6, string v7, string v8) {
	
	v1_Train_Name.push_back(v1);
	v2_Num_Train.push_back(v2);
	v3_Boarding_point.push_back(v3);
	v4_Destination_point.push_back(v4);
	v5_Num_Seats.push_back(v5);
	v6_ticket_price.push_back(v6);
	v7_Date_travel.push_back(v7);
	v8_Time_travel.push_back(v8);
}


void admin::deletDB() {
	obj.dbSet("DELETE FROM `tsts`.`test_train` WHERE( `train_number` IS NOT NULL )");
}


void admin::insertDB() {
	for (int i = 0; i < v2_Num_Train.size(); i++)
		obj.dbSet("INSERT INTO `tsts`.`test_train`  VALUES('" + v1_Train_Name.at(i) + "','" + v2_Num_Train.at(i) + "','" + v3_Boarding_point.at(i) + "','" + v4_Destination_point.at(i) + "','" + v5_Num_Seats.at(i) + "','" + v6_ticket_price.at(i) + "','" + v7_Date_travel.at(i) + "','" + v8_Time_travel.at(i) + "')");
}
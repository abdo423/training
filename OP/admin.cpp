#include "admin.h"


void admin::loadTrains()
{
	ResultSet* result;
	result = obj.dbGet("select *from test_train");
	while (result->next())
	{
		if (checkDateWithlocalDate(result->getString(7), result->getString(8)) == true ) {
			int  people = stoi(result->getString(9));
			trains t = trains(result->getString(1), result->getString(2), result->getString(3), result->getString(4), result->getString(5), result->getString(6), result->getString(7), result->getString(8), people);
			adminTrains.push_back(t);
		}
	}
}

bool admin::checkingForNo_Train(string s) {
	bool check = false;


	for (int i = 0; i < adminTrains.size(); i++)
	{
		if (adminTrains[i].get_train_number() == s)
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
		if (adminTrains[i].get_train_number() == del) {
			people = adminTrains[i].get_no_people();
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
		obj.dbSet("INSERT INTO `tsts`.`test_train` VALUES('" + adminTrains[i].get_train_name() + "','" + adminTrains[i].get_train_number() + "','" + adminTrains[i].get_boarding_point() + "','" + adminTrains[i].get_destination_point() + "','" + to_string( adminTrains[i].get_no_seats()) + "','" + to_string(adminTrains[i].get_ticket_price()) + "','"+adminTrains[i].get_DateOfTravel()+"','" + adminTrains[i].get_TimeOfTravel() + "','" + to_string(adminTrains[i].get_no_people()) + "')");
}
void admin::delvector()
{
	adminTrains.clear();
}
bool admin::checkDateWithlocalDate(string date, string timing) {
	time_t ttime = time(0);
	tm* local_time = localtime(&ttime);

	string Year;
	Year.push_back(date[0]);
	Year.push_back(date[1]);
	Year.push_back(date[2]);
	Year.push_back(date[3]);
	int Y = stoi(Year);
	string month;
	month.push_back(date[5]);
	month.push_back(date[6]);
	int M = stoi(month);
	string day;
	day.push_back(date[8]);
	day.push_back(date[9]);
	int D = stoi(day);
	if ((1900 + local_time->tm_year < Y))
	{
		return true;
	}
	else if ((1900 + local_time->tm_year > Y))
	{
		return false;
	}
	else
	{
		if ((1 + local_time->tm_mon < M))
		{
			return true;
		}
		else if ((1 + local_time->tm_mon > M)) {
			return false;
		}
		else
		{
			if (local_time->tm_mday < D)
				return true;
			else if (local_time->tm_mday > D)
			{
				//MessageBox::Show("day");
				return false;
			}
			else if (timing != "notime") {
				return checkTimeWithlocalTime(timing);
			}
			else {
				return 1;
			}
		}
	}
}

bool admin::checkTimeWithlocalTime(string timeing) {

	time_t ttime = time(0);
	tm* local_time = localtime(&ttime);

	string Hour;
	Hour.push_back(timeing[0]);
	Hour.push_back(timeing[1]);
	int H = stoi(Hour);

	if (local_time->tm_hour > H)
	{
		return false;
	}
	else if (local_time->tm_hour < H)
		return true;

	string minute;
	minute.push_back(timeing[3]);
	minute.push_back(timeing[4]);
	int M = stoi(minute);
	if (!(local_time->tm_min <= M))
	{
		return false;
	}
	return true;
}
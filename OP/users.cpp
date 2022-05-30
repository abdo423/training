#include "users.h"
users::users() {

}
users::users(string email, string password, string id_passenger) {
	this->email = email;
	this->password = password;
	this->id_passenger = id_passenger;
}

string users::get_email() {
	return this->email;
}
string users::get_password() {
	return this->password;
}
string users::get_id_passenger() {
	return this->id_passenger;
}
#include "users.h"
users::users() {

}
users::users(string email, string password, string id_passenger) {
	this->email = email;
	this->password = password;
	this->id_passenger = id_passenger;
}
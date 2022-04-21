#include<string>
using namespace std;

class Email_login
{
	string email;
	string password;

public:

	Email_login();
	bool login(string email, string password);
	~Email_login();

};


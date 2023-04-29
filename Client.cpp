#include "Client.h"
#include "Account.h"
#include <stdexcept>

using namespace std;

class Client
{
public:
	Client(string n)
	{
		Initial(n);
	}

private:
	int id;
	string name;
	string surname;
	vector<Account> accounts;
	void Initial(string n)
	{
		string separtors = " #.,:;";
		size_t position = n.find_first_of(separtors);
		this -> name = n.substr(0, position);
		this -> surname = n.substr(position + 1);

		this -> accounts.push_back(SimpleAccount)
	}

};
#include <iostream>
#include <string>
#include <vector>
#include "Bank.h"

using namespace std;

int main()
{
	char control = 'n';
	Bank bank(3);

	while (control != 'y')
	{
		system("clear");
		
		cout << "Bank system\n";
		bank.ClientList();

		cout << "\n1 - Add client\n2 - Delete client\n3 - Select client";
		int n;
		cin >> n;
		cout << "\nEnter client Id";
		int client;
		cin >> client;
		switch (n)
		{
		case 1:
		{
			cout << "Enter client name: ";
			string name;
			cin >> name;
			cout << "Enter account balance: ";
			double deposit;
			cin >> deposit;
			bank.AddClient(name, deposit);
		}
			break;

		case 2:
			bank.DelClient(client);
			cout << "\nClient deleted";
			break;

		case 3:
			char c = 'n';
			do 
			{
				int choice = 0;
				char acc = 'A';
				double sum = 0.0;

				bank.ClientInfo(client);

				cout << "\n1 - Deposit\n2 - Withdraw\n3 - Transfer";
				cin >> choice;

				cout << "\nEnter sum & account type";
				cin >> sum >> acc;

				system("clear");

				switch (choice)
				{
				case 1:
					
					bank.Transaction(client, acc, sum, 1);
					cout << "\nTransaction done";
					break;

				case 2:

					bank.Transaction(client, acc, sum, 0);
					cout << "\nTransaction done";
					break;

				case 3:
					break;
				}

				bank.ClientInfo(client);

				cout << "\nEnought? y/n";
				cin >> c;
			} while (c != 'y');
			break;
		}

		cout << "\nAgain? y/n";
		cin >> control;
	}
}

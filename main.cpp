#include <iostream>
#include <string>
#include <vector>
#include "Bank.h"

using namespace std;

int main()
{
	char control = 'y';
	Bank bank(3);

	while (control == 'y')
	{
		system("cls");
		
		cout << "Bank system\n";
		bank.ClientList();

		cout << "\n1 - Add client\n2 - Delete client\n3 - Select client\n";
		int n;
		cin >> n;

		int client;

		switch (n)
		{
		case 1:
		{
			cout << "Enter client name: ";
			string name;

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, name);
			cin.clear();

			cout << "Enter account balance: ";
			double deposit;
			cin >> deposit;
			bank.AddClient(name, deposit);
		}
			break;

		case 2:
			cout << "\nEnter client Id\n";
			cin >> client;
			bank.DelClient(client);
			cout << "\nClient deleted";
			break;

		case 3:
			char c = 'n';

			cout << "\nEnter client Id\n";
			cin >> client;

			do 
			{
				int choice = 0;
				char acc = 'A';
				double sum = 0.0;
				int transactionMode = 0;

				bank.ClientInfo(client);

				cout << "\n1 - Deposit\n2 - Withdraw\n";
				cin >> choice;

				cout << "\nEnter sum & account type\n";
				cin >> sum >> acc;

				system("cls");

				if (choice == 1) transactionMode = 1;

				bank.Transaction(client, acc, sum, transactionMode);
				cout << "\nTransaction done\n";
				bank.ClientInfo(client);

				cout << "\nEnought? y/n\n";
				cin >> c;
			} while (c == 'y');
			break;
		}

		cout << "\nAgain? y/n\n";
		cin >> control;
	}
}

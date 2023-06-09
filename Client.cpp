#include "Client.h"
#include "SimpleAcc.h"
#include "CreditAcc.h"
#include <stdexcept>
#include <iostream>

using namespace std;

/*
	���������� ������ "������" ��� �������� ������������ ��������� ������� �������������
	��� ��������� �������� ������ �� ��� � �������, � ��� �� ������� ��� �����:
	������� � ���������. ��������� ����� �� ��������� ����������.
*/

	Client::Client(const std::string& n, double b) : id(id)
	{
		Client::Initial(n, b);
	}

	Client::~Client() {
		cout << "Client " << name << " delete" << endl;
	}

	void Client::Initial(const std::string& n, double b)
	{
		string separtors = " #.,:;"; // ���������� ����������
		int position = n.find_first_of(separtors); // ������� �����������
		this->name = n.substr(0, position); // ����� ������
		this->surname = n.substr(position + 1);

		// �������� ������, � ���������� ������ ���� �������������� �������
		// ��������� ������� ���������� ������
		this->accounts.push_back(SimpleAcc(b));
		this->accounts.push_back(CreditAcc(b, 500.0));
	}

	void Client::SetId(int n)
	{
		this->id = n;
	}

	int Client::GetId()
	{
		return this->id;
	}

	std::string Client::GetName()
	{
		return this->name;
	}

	std::string Client::GetSurname()
	{
		return this->surname;
	}

	void Client::Info()
	{
		std::cout << this->id  << " " << this->name << " " << this->surname << endl;
		for (int i = 0; i < accounts.size(); i++)
		{
			std::cout << "Account type: " << accounts[i].getName() << "\t";
			std::cout << "Ballance: " << accounts[i].getBalance() << endl;

			// ��������. ���� ��� ���������, �� ���������� � ������� ���������� ������.
			if (CreditAcc* acc = dynamic_cast<CreditAcc*>(&accounts[i]))
				std::cout << "Credit limit: " << acc->getCreditLimit() << endl;
		}
	}

	void Client::Transfer(char type, double sum, int operation)
	{
		for (auto& acc : this->accounts)
		{
			if (acc.getName() == type)
				if (operation == 0) // �������� ���� ��������
					acc.withdraw(sum);
				else
					acc.deposit(sum);
		}
	}
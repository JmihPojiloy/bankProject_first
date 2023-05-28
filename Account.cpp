#include <iostream>
#include "Account.h"

Account::Account(double balance) : balance(balance) {

	name = ' ';
}

void Account::deposit(double amount)
{
	balance += amount;
}

void Account::withdraw(double amount)
{
	balance -= amount;
}

double Account::getBalance() const
{
	return this->balance;
}

char Account::getName() const
{
	return this->name;
}
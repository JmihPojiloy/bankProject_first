#include <iostream>
#include "Account.h"

Account::Account(double balance) : balance(balance){}

void Account::deposit(double amount)
{
	balance += amount;
}

void Account::withdraw(double amount)
{
	balance -= amount;
}

void Account::getBalance() const
{
	std::cout << "Balance: " << this->balance << std::endl;
}
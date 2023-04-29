#include <exception>
#include "SimpleAcc.h"

SimpleAcc::SimpleAcc(double balance) : Account (balance){}

void SimpleAcc::deposit(double amount)
{
	Account::deposit(amount);
}

void SimpleAcc::withdraw(double amount)
{
	if (balance - amount >= 0)
		Account::withdraw(amount);
	else
		throw std::exception();
}

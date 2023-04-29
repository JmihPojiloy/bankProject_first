#include <exception>
#include "SimpleAcc.h"

// реализация наследуемого конструктора

SimpleAcc::SimpleAcc(double balance) : Account (balance){}

void SimpleAcc::deposit(double amount)
{
	Account::deposit(amount);
}

void SimpleAcc::withdraw(double amount)
{
	if (balance - amount >= 0) // проверка баланса на счете
		Account::withdraw(amount);
	else
		throw std::exception();
}

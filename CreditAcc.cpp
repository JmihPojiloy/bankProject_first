#include <exception>
#include "CreditAcc.h"

// реализация наследуемого конструктора для инициализции класса
// свойство creditLimit не наследовалось

CreditAcc::CreditAcc(double balance, double creditLimit)
	: Account(balance), creditLimit(creditLimit){}

void CreditAcc::deposit(double amount)
{
	Account::deposit(amount);
}

void CreditAcc::withdraw(double amount)
{
	if (balance - amount >= -creditLimit) // проверка баланса = кредитный лимит
		Account::withdraw(amount);
	else
		throw std::exception();
}

double CreditAcc::getCreditLimit()
{
	return creditLimit;
}

#pragma once
#include "Account.h"

/*
	класс "кредитный счет" наследуется от абстрактного класса,
	реализует свой конструктор и методы наследуемый от родителя, а так же
	добавляет своё свойство "кредитный лимит" и метод его показа
*/

class CreditAcc : public Account
{
public:
	CreditAcc(double amount, double creditLimit);

	void deposit(double amount) override;
	void withdraw(double amount) override;
	double getCreditLimit();

private:
	double creditLimit;
};


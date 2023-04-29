#pragma once
#include "Account.h"
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


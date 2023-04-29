#pragma once
#ifndef ACCOUNT_H
#define ACOUNT_H

class Account
{
public:
	Account(double balane);
	virtual ~Account() = default;

	virtual void deposit(double amount);
	virtual void withdraw(double amount);
	virtual void display() const;

protected:
	double balance;
};
#endif

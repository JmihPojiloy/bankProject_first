#pragma once
#ifndef ACCOUNT_H
#define ACOUNT_H
/*
	абсрактный класс "счет", реализует в себе мехнизм пополнения,
	снятия денег и вывод баланса
	включает в себя конструктор для объявления класса с заданным балансом
*/
class Account
{
public:
	Account(double balane);
	virtual ~Account() = default;

	virtual void deposit(double amount);
	virtual void withdraw(double amount);
	virtual void getBalance() const;

protected:
	double balance;
};
#endif

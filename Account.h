#pragma once
#ifndef ACCOUNT_H
#define ACOUNT_H
/*
	абстрактный класс "счет", реализует в себе мехнизм пополнения,
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
	virtual double getBalance() const;
	virtual char getName() const;

protected:
	double balance;
	char name;
};
#endif

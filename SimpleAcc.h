#pragma once
#ifndef SIMPLE_H
#define SIMPLE_H

#include "Account.h"

/*
	класс "обычный счет" наследуется от абстрактного класса,
	реализует конструктор и методы пополнения и снятия
*/

class SimpleAcc : public Account
{
public:
	SimpleAcc(double balance);

	void deposit(double amount) override;
	void withdraw(double amount) override;
};
#endif
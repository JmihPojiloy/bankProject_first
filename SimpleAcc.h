#pragma once
#ifndef SIMPLE_H
#define SIMPLE_H

#include "Account.h"

class SimpleAcc : public Account
{
public:
	SimpleAcc(double balance);

	void deposit(double amount) override;
	void withdraw(double amount) override;
};
#endif
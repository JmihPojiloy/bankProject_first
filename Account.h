#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    virtual int get_number() const = 0;
    virtual double get_balance() const = 0;
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void transfer(Account& to, double amount) = 0;
private:
    int number;
    double balance;
};

#endif

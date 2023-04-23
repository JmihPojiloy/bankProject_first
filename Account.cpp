#include "Account.h"
#include <stdexcept>

class SimpleAccount : public Account {
public:
    SimpleAccount() : balance(0) {}
    SimpleAccount(double initial_balance) : balance(initial_balance) {}

    double get_balance() const override {
        return balance;
    }

    void deposit(double amount) override {
        balance += amount;
    }

    void withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
        }
        else {
            throw std::runtime_error("Insufficient funds!");
        }
    }

    void transfer(Account& to, double amount) override {
        if (balance >= amount) {
            balance -= amount;
            to.deposit(amount);
        }
        else {
            throw std::runtime_error("Insufficient funds!");
        }
    }

private:
    double balance;
};

class CreditAccount : public Account {
public:
    CreditAccount() : balance(0), credit_limit(0) {}
    CreditAccount(double initial_balance, double credit_limit)
        : balance(initial_balance), credit_limit(credit_limit) {}

    double get_balance() const override {
        return balance;
    }

    void deposit(double amount) override {
        balance += amount;
    }

    void withdraw(double amount) override {
        if (balance + credit_limit >= amount) {
            balance -= amount;
        }
        else {
            throw std::runtime_error("Insufficient funds!");
        }
    }

    void transfer(Account& to, double amount) override {
        if (balance + credit_limit >= amount) {
            balance -= amount;
            to.deposit(amount);
        }
        else {
            throw std::runtime_error("Insufficient funds!");
        }
    }

private:
    double balance;
    double credit_limit;
};

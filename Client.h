#pragma once
#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include<vector>
#include "Account.h"

using namespace std;

class Client {
public:
    Client(const std::string& n);
    virtual void Initial(const std::string& n) = 0;
    virtual void Transfer(int num, double sum) = 0;
    virtual void Refill(int num, double sum) = 0;
    virtual void Info() = 0;

private:
    int id;
    string name;
    string surname;
    vector<Account> accounts;
};

#endif


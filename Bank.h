#pragma once
#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Client.h"

using namespace std;

class Bank
{
public:
    Bank();
    virtual void AddClient(Client client) = 0;
    virtual void DelClient(int id) = 0;
    virtual void ClientInfo(int id) = 0;
    virtual int Find(string name) const = 0;
private:
    vector<Client> clients;
    virtual void Load() = 0;
};

#endif

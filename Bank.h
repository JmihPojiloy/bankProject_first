#pragma once
#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Client.h"

using namespace std;

class Bank
{
public:
    Bank(int numberOfClients);
    void AddClient(std::string name, double deposit);
    void DelClient(int id);
    void ClientInfo(int id);
    void ClientList();
    int Find(const std::string& name);
private:
    std::vector<Client> clients;
    void Load(int numberOfClients);
};

#endif

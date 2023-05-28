#pragma once
#ifndef BANK_H
#define BANK_H

#include <vector>
#include "IInfo.h"
#include "Client.h"

using namespace std;

/*
    ����� ���� ��������� ������� ���������� �������, ��������, �����
    ����� ���������� � �������. ��� �� ��������� ��������� � ��������� 
    ��� �������, ������� ��������� ������ ��������
*/
class Bank : public IInfo
{
public:
    Bank(int numberOfClients);
    ~Bank();
    void AddClient(std::string name, double deposit);
    void DelClient(int id);
    void Transaction(int id, char acc, double sum, int operation);
    void ClientInfo(int id);
    void ClientList() override;
    int Find(const std::string& name);
private:
    std::vector<Client> clients;
    void Load(int numberOfClients);
};

#endif

#pragma once
#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <vector>
#include "Account.h"

/*
    ����� "������" ����� ����������� ��� ��� �������� �������� 
    ��� � ������ �����, ������� �����������, ����� �������� ������, �������� �����
    (������ ��� ����������) � ���������� �� �����, ���������� ������ � �������
*/

class Client 
{
public:
    Client(const std::string& n, double balance);

    virtual void Transfer(char type, double sum, int operation) = 0;
    virtual void Info() = 0;

private:
    int id;
    std::string name;
    std::string surname;
    std::vector<Account> accounts;

    void Initial(const std::string& n, double b);
    //Account getAcc(char type);
};

#endif


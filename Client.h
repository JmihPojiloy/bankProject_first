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
    ~Client();
    void SetId(int num);
    int GetId();
    std::string GetName();
    std::string GetSurname();
    void Transfer(char type, double sum, int operation);
    void Info();

private:
    int id;
    std::string name;
    std::string surname;
    std::vector<Account> accounts;

    void Initial(const std::string& n, double b);
    //Account getAcc(char type);
};

#endif


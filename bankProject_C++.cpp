#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account
{
    int number;
    double balance;

    void enroll(double sum)
    {

    };

    void withdraw(double sum)
    {

    };

    double Info()
    {
        return balance;
    }
};

class Client
{
    int id;
    string name;
    string surname;

    vector<Account> accounts;

    Client(string n)
    {
        Initial(n);
    }

    void Initial(string n)
    {

    }

    void Transfer(int num, double sum)
    {

    }

    void Refill(int num, double sum)
    {

    }

    void Info()
    {

    }
};

class Bank
{
    vector<Client> clients;

    Bank()
    {
        Load();
    }

    void Load()
    {

    }

    void AddClient(string name)
    {

    };

    void DelClient(int id)
    {

    };

    void ClientInfo(int id)
    {
        
    }

    int Find(string name)
    {
        int id;

        return id;
    }
};

int main()
{
    Bank bank = new Bank();
    
}

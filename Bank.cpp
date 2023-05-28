#include "Bank.h"
#include "Client.h"
#include <iostream>
#include <vector>

Bank::Bank(int numberOfClients)
{
    // подготовка к работе
	Load(numberOfClients);
}

Bank::~Bank() {
    cout << "Bank deleted" << endl;
}

// функция подготовки, которая подгружает тестовую коллекцию
void Bank::Load(int n)
{
	for (int i = 0; i < n; i++)
	{
            std::string str = "Name_";

            str.append(std::to_string(i))
                .append(" ")
                .append("Surname_")
                .append(std::to_string(i));

            Client client(str, 500.0);
            client.SetId(i);
            this->clients.push_back(client);   
	}
}

// функция поиска клиента по строке совпадения с именем или фамилией
int Bank::Find(const std::string& name)
{
    for (auto client:this->clients)
    {
        if (client.GetName().find(name) && client.GetSurname().find(name))
            return client.GetId();
    }
}

void Bank::AddClient(std::string name, double deposit)
{
    Client client(name, deposit);
    client.SetId(this->clients.size() );
    this->clients.push_back(client);
}

void Bank::DelClient(int id)
{
    for (int i = 0; i < this->clients.size(); i++)
    {
        if (this->clients[i].GetId() == id)
        {
            this->clients.erase(this->clients.begin() + i);
            std::vector<Client>(this->clients).swap(this->clients);
        }
    }
}

// пополнение или снятие денег
void Bank::Transaction(int id, char acc, double sum, int operation)
{
    for (auto &client : this->clients)
    {
        if (client.GetId() == id)
        {
            client.Transfer(acc, sum, operation);
        }
    }
}

void Bank::ClientInfo(int id)
{
    for (auto client : this->clients)
    {
        if (client.GetId() == id)
            client.Info();
    }
}

// функция интерфейса IInfo
void Bank::ClientList()
{
    for (auto client : this->clients)
    {
        client.Info();
    }
}
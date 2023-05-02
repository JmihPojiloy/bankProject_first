#include "Bank.h"
#include "Client.h"
#include <iostream>
#include <vector>

Bank::Bank(int numberOfClients)
{
	Load(numberOfClients);
}

// функция подготовки, которая подгружает тестоввую коллекцию
void Bank::Load(int n)
{
	for (size_t i = 0; i <n;i++)
	{
        for (int i = 1; i <= n; ++i) 
        {
            std::string str = "Name_";

            /*
            std::string num_str = std::to_string(i);
            str += num_str;
            str += " ";
            std::string str2 = "Surname_";
            str2 += num_str;
            std::string combined_str = str + str2;
            */

            str.append(std::to_string(i))
                .append(" ")
                .append("Surname_")
                .append(std::to_string(i));

            Client client(str, 500.0);
            client.SetId(this->clients.size() + i);
            this->clients.push_back(client);
        }
	}
}

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
    client.SetId(this->clients.size() + 1);
    this->clients.push_back(client);
}

void Bank::DelClient(int id)
{
    for (size_t i = 0; i < this->clients.size(); i++)
    {
        if (this->clients[i].GetId() == id)
        {
            this->clients.erase(this->clients.begin() + i);
            std::vector<Client>(this->clients).swap(this->clients);
        }
    }
}

void Bank::Transaction(int id, char acc, double sum, int operation)
{
    for (auto client : this->clients)
    {
        if (client.GetId() == id)
        {
            client.Transfer(acc, sum, operation);
        }
    }
}

void Bank::Transfer(int id1, int id2, double sum)
{

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
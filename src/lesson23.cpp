#include <iostream>
#include <lesson23.h>
#include <config.h>
#include <algorithm>
#include <string>
#include <map>
#include <ctime>

using namespace std;

void Lesson23::onExecute()
{
    map<int, Client> listOfClients;
    auto printList = [&listOfClients]()
    {
        for (auto &info : listOfClients)
        {
            PRINT("id: " << info.first << " name: " << info.second.getName() << " age: " << info.second.getAge());
        }
    };

    listOfClients.emplace(1050, Client("Wellington", 9, 12, 1994));
    listOfClients.emplace(1051, Client("Laryssa", 25, 8, 1993));
    listOfClients.emplace(1052, Client("Lucas", 25, 6, 2000));
    listOfClients.emplace(1053, Client("Leila", 18, 4, 1976));
    listOfClients.emplace(1054, Client("Heloisa", 25, 3, 2015));
    listOfClients.emplace(1055, Client("Marcos", 12, 7, 2008));
    listOfClients.insert({1056, Client("Joaquina", 22, 8, 2013)});
    PRINT("Acessing person: " << listOfClients.at(1056).getAge());
    printList();
    listOfClients.erase(1051);
    auto search = listOfClients.find(1056);
    if (search != listOfClients.end()){
        PRINT("Erasing: " << search->second.getName());
        listOfClients.erase(search);
    }
    printList();
    
}

int Client::getAge(){
    auto now = chrono::system_clock::now();
    time_t now_c = chrono::system_clock::to_time_t(now);
    tm *ltm = localtime(&now_c);
    int year = ltm->tm_year + 1900;
    int month = ltm->tm_mon;
    int day = ltm->tm_mday;
    int age = year - dateOfBirth.getYear();
    if (month < dateOfBirth.getMonth() || (month = dateOfBirth.getMonth() && day < dateOfBirth.getDay())){
        age--;
    }
    return age;
}


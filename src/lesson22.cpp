#include <iostream>
#include <lesson22.h>
#include <config.h>
#include <string>
#include <memory>

using namespace std;

void Lesson22::onExecute(){
   unique_ptr<SchoolPerson> person1 = make_unique<Teacher>("Icaro");
   unique_ptr<SchoolPerson> person2 = make_unique<Teacher>("Wellington");
   unique_ptr<SchoolPerson> person3 = move(person2); // 2 unique pointers can not have the ownership of the same address
   person2 = make_unique<Student>("Klivia"); // you can't do that cause unique_ptr does not allow changing address
   shared_ptr<SchoolPerson> person4 = make_shared<Student>("Marcus");
   shared_ptr<SchoolPerson> person5 = person4; // more than one shared pointer can hold the same adress
   PRINT(person1->getName() << " id: " << person1->getId());
   PRINT(person2->getName() << " id: " << person2->getId());
   PRINT(person3->getName() << " id: " << person3->getId());
   PRINT(person4->getName() << " id: " << person4->getId());
   PRINT(person5->getName() << " id: " << person5->getId());
}

string SchoolPerson::getName() const {
    return name;
}

int SchoolPerson::getId() const {
    return id;
}

void Teacher::addTeam(const string teamName){
    teams.push_back(teamName);
}

void Student::addTeam(const string teamName){
    team =teamName;
}

int SchoolPerson::count = 0;
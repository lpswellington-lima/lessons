#ifndef LESSON22_H
#define LESSON22_H
#include <config.h>
#include <string>
#include <list>

using namespace std;

class Lesson22 : public Lesson{ 
    public:       
        void onExecute();
};

class SchoolPerson{
    protected:
        static int count;
        int id;
        string name;
    public:
        SchoolPerson(string name) : name(name){
            count++;
            id = 100000 + count;
        }
        ~SchoolPerson(){
            PRINT(name << " destroyed");
        }
        string getName() const;
        int getId() const;
};

class Teacher : public SchoolPerson{
    private:
        list<string> teams;
    public:
        Teacher(string name) : SchoolPerson(name){}
        void addTeam(const string teamName);
};

class Student : public SchoolPerson{
    private:
        string team;
    public:
        Student(string name) : SchoolPerson(name){}
        void addTeam(const string teamName);
};

#endif
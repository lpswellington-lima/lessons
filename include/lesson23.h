#ifndef lesson23_H
#define lesson23_H
#include <config.h>
#include <string>
#include <vector>
#include <memory>
#include <chrono>

using namespace std;

class Lesson23 : public Lesson{ 
    public:       
        void onExecute();
};

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int day, int month, int year): day(day), month(month), year(year){};
        int getYear() const {return year;}
        int getMonth() const {return month;}
        int getDay() const {return day;}
};

class Client{
    private:
        string name;
        Date dateOfBirth;
    public:
        Client(string name, int day, int month, int year) : name(name), dateOfBirth(day, month, year){};
        int getAge();
        string getName() const{return name; };
};

#endif
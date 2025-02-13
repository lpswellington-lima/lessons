#ifndef LESSON5_H
#define LESSON5_H
#include <string>

using namespace std;

class Lesson5 { 
    public:
        //Lesson5() = default;        
        void onExecute();
};

class Person {
private:
    std::string name;   // Name of the person
    int age;           // Age of the person

public:
    // Constructor
    Person(const std::string& name, int age);    

    // Getter methods
    string getName() const;
    int getAge() const;

    // Setter methods
    void setName(const std::string& name);
    void setAge(int age);

    // Method to display person details
    void display() const;
};

#endif
#include <iostream>
#include <lesson5.h>
#include <config.h>

using namespace std;

void Lesson5::onExecute() {
    // Create an object of Person
    /*const*/ Person person("Alice", 30); // the const would allow you only to call const functions, but you called method setAge and setName, which are not const

    // Display initial person details
    person.display();

    // Access name and age through getter methods
    PRINT("Name: " << person.getName() << std::endl);
    PRINT("Age: " << person.getAge() << std::endl);

    // Modify the person's name and age using setter methods
    person.setName("bob");
    person.setAge(35);

    // Display updated person details
    person.display();

    // Attempt to set a negative age
    person.setAge(-5);  // This should trigger the error message
}

// Constructor implementation
Person::Person(const std::string& name, int age) : name(name), age(age) {}

// Getter for name
std::string Person::getName() const {
    // name = "wellington";  //You'll get an error cause const methods (or functions) can not modify the object parameters.
    return name;
}

// Getter for age
int Person::getAge() const {
    return age;
}

// Setter for name
void Person::setName(const std::string& name) {
    // name = "wellington"; //you can't do that cause the parameter is const, it can't be modified inside the function
    this->name = name;
}

// Setter for age
void Person::setAge(int age) {
    if (age >= 0) { // Validate age
        this->age = age;
    } else {
        PRINT_ERROR("Error: Age cannot be negative." << std::endl);
    }
}

// Method to display person details
void Person::display() const {
    PRINT("Name: " << name << ", Age: " << age << std::endl);
}
#include <iostream>
#include <lesson6.h>
#include <config.h>

using namespace std;

void Lesson6::onExecute() {
    Car myCar("Toyota");
    myCar.describe(); // Calls Car's describe method
    myCar.honk();     // Calls Car's honk method

    SportsCar mySportsCar("Porsche");
    mySportsCar.describe(); // Calls Car's describe method
}

// Vehicle class implementation

// Constructor implementation
Vehicle::Vehicle(const string& name) : name(name) {}

// Method to get the name of the vehicle
string Vehicle::getName() const {
    return name;
}

// Method to describe the vehicle
void Vehicle::describe() const {
    PRINT("This is a vehicle named " << name << ".");
}

// car implementation

// Constructor implementation
Car::Car(const std::string& name) : Vehicle(name) {}

// Override describe method
void Car::describe() const {
    PRINT("This is a car named " << getName() << ".");
}

// Final method that cannot be overridden
void Car::honk() {
    PRINT("Honk! Honk! I'm a " << getName() << "!");
}

// Sports cars


// Constructor implementation
SportsCar::SportsCar(const string& name) : Car(name) {}

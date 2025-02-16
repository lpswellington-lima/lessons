#ifndef LESSON6_H
#define LESSON6_H
#include <string>

using namespace std;

class Lesson6 { 
    public:       
        void onExecute();
};

class Vehicle {
protected:
    std::string name;

public:
    // Constructor
    Vehicle(const string& name);

    // Method to get the name of the vehicle
    std::string getName() const;

    // Virtual method to describe the vehicle
    virtual void describe() const; // Can be overridden
};



class Car : public Vehicle { // Public inheritance
public:
    // Constructor
    Car(const string& name);

    // Override the describe method
    void describe() const override;

    // Mark this method as final
    virtual void honk() final; // Prevent further overriding
};


class SportsCar : public Car { // Inherit from Car
public:
    // Constructor
    SportsCar(const string& name);

    // Attempt to override the honk method (this will cause an error)
    // void honk() override; // Error: cannot override final function
};

#endif 
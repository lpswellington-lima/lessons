#include <iostream>
#include <lesson11.h>
#include <config.h>

using namespace std;

void Lesson11::onExecute(){
    MyClass* a = new DerivedClass(); //this only gets the right order because of virtual destructor in the base class
    delete a;
}

Resource::Resource(){
    PRINT("Resource acquired")
}
Resource::~Resource(){
    PRINT("Resource released")
}

MyClass::MyClass() {
    res = new Resource(); // Acquire a resource
    PRINT("My Class is being constructed")
}

MyClass::~MyClass() { // Destructor
        delete res; // Release the resource
        PRINT("MyClass destructor called");
    }

DerivedClass::DerivedClass() {
    PRINT("Derived Class is being constructed")
}

DerivedClass::~DerivedClass() {
    PRINT("Derived Class is being destroyed")
}
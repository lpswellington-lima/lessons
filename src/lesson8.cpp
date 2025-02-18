#include <iostream>
#include <lesson8.h>
#include <config.h>

using namespace std;

void Lesson8::onExecute(){
    Derived d;
    d.demo();

    // Trying to access Base class functions directly from the object of Derived
    // d.publicFunction();      // Error: publicFunction() is not accessible
    // d.protectedFunction();   // Error: protectedFunction() is not accessible
}

void Base::publicFunction(){
    PRINT("Base public function");
}

void Base::protectedFunction(){
    PRINT("Base protected function");
}

void Base::privateFunction(){
    PRINT("Base private function");
}

void Derived::demo(){
    publicFunction();          // OK: Accessing public function
    protectedFunction();       // OK: Accessing protected function
    // privateFunction();      // Error: Cannot access private function
}
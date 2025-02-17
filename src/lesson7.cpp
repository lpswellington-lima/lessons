#include <iostream>
#include <lesson7.h>
#include <config.h>

using namespace std;

void Lesson7::onExecute() {
    Counter::displayCount(); // Call static function without instantiation

    // Create instances of Counter
    Counter c1;
    Counter2 c2; // the constructor of the base class (Counter) is automatically called before executing the body of the derived class's constructor.

    // Display count after creating objects
    Counter::displayCount(); // Outputs: Current count: 2
    Counter2::displayCount(); // You can also call the static function from a derived class
    c1.displayCount(); //You can also call a static function from an instatiated object

    // Reset the count using a non-static member function
    c1.resetCount();

    // Display count after resetting
    Counter2::displayCount(); // Outputs: Current count: 0
}

// Initialize static member
int Counter::count = 0;

// Constructor implementation
Counter::Counter() {
    count++; // Increment count whenever a new object is created
    PRINT("Non-static member: " << Counter::nonStaticMember)
}

// Definition of static member function
void Counter::displayCount() {
    PRINT("Current count: " << count ) // Can access static member
    //PRINT("Non-static member: " << Counter::nonStaticMember) // Error: cannot access non-static members
}

// Definition of non-static member function
void Counter::resetCount() {
    count = 0; // Non-static function can access static member
}

int Counter2::count2 = 0;

Counter2::Counter2() {
    count2++; // Increment count whenever a new object is created
    PRINT("Create counter2")
}
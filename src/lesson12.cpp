#include <iostream>
#include <lesson12.h>
#include <config.h>

using namespace std;

void Lesson12::onExecute(){
    Shape* shape = new Circle(5.0); // Shape pointer to a Circle object

    shape->draw();                   // Calls Circle's draw
    PRINT("Area of Circle: " << shape->area() ) // Calls Circle's area

    delete shape;                   // Clean up
}

void Circle::draw() {
    PRINT("Drawing a Circle"); // Implementation of draw
}

double Circle::area() {
    return 3.14159 * radius * radius; // Implementation of area
}
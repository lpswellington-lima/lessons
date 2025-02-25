#ifndef LESSON12_H
#define LESSON12_H
#include <config.h>

using namespace std;

class Lesson12 : public Lesson{ 
    public:       
        void onExecute();
};

class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0; // Declaration
    virtual double area() = 0; // Another pure virtual function

    // Virtual destructor (optional but recommended)
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // Implementing pure virtual functions
    void draw() override;
    double area() override;
};


#endif
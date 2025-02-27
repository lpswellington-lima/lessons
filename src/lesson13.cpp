#include <iostream>
#include <lesson13.h>
#include <config.h>

using namespace std;

void Lesson13::onExecute(){
    PRINT("Lesson 13")
    Vector v1(1.0,3.0);
    Vector v2(1.0,2.0);
    Vector v3 = v1 + v2;
    v3.PrintVector();
    v3 = v3*4;
    v3.PrintVector();
    v3 = v3 + v1 + v2;
    v3.PrintVector();
}

Vector Vector::operator+(const Vector v) const {
    return Vector(x + v.x, y + v.y);
}

Vector Vector::operator*(const int a) const{
    return Vector(a*x , a*y);
}

void Vector::PrintVector(){
    PRINT(x << "," << y)
}
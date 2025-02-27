#ifndef LESSON13_H
#define LESSON13_H
#include <config.h>

using namespace std;

class Lesson13 : public Lesson{ 
    public:       
        void onExecute();
};

class Vector{
    private:
        double x, y;
    public:
        Vector( double x = 0.0, double y = 0.0 ) : x(x), y(y) {};
        Vector operator+(const Vector v) const;
        Vector operator*(const int a) const;
        void PrintVector();
    
};

#endif
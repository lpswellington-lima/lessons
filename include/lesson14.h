#ifndef LESSON14_H
#define LESSON14_H
#include <config.h>
#include <vector>

using namespace std;

class Lesson14 : public Lesson{ 
    public:       
        void onExecute();
};

class VectorX{
protected:
    double x,y;
public:
    VectorX(double x, double y) : x(x), y(y) {};
    virtual VectorX* operator+(VectorX& a) = 0;
    virtual VectorX* operator*(int a) = 0;
    virtual double Modulus() = 0;
    // virtual VectorX* sum(vector<VectorX*>& v) = 0;
};

class Vector2d : public VectorX{
private:
    double z = 0;
public:
    Vector2d(double x, double y) : VectorX(x,y) {};
    VectorX* operator+(VectorX& a) override;
    VectorX* operator*(int a) override;
    double Modulus() override;
    static VectorX* sum(vector<VectorX*>& v); //Static functions can not be enforced through an abstract class.
    static VectorX* sum(VectorX* v1, VectorX* v2);
};

class Vector3d : public VectorX{
private:
    double z;
public:
    Vector3d(double x, double y, double z) : VectorX(x,y), z(z) {};
    VectorX* operator+(VectorX& a) override;
    VectorX* operator*(int a) override;
    double Modulus() override;
    static VectorX* sum(vector<VectorX*>& v);
};

#endif

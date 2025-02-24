#ifndef LESSON11_H
#define LESSON11_H
#include <config.h>

using namespace std;

class Lesson11 { 
    public:       
        void onExecute();
};

class Resource {
public:
    Resource(); //constructor
    ~Resource(); //destructor
};

class MyClass {
private:
    Resource* res; // Pointer to a Resource object

public:
    MyClass();

    virtual ~MyClass();
};

class DerivedClass : public MyClass {
public:
    DerivedClass();
    ~DerivedClass() override;
};

#endif
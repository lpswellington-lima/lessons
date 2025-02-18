#ifndef LESSON8_H
#define LESSON8_H

using namespace std;

class Lesson8 { 
    public:       
        void onExecute();
};

class Base {
public:
    void publicFunction();
    
protected:
    void protectedFunction();

private:
    void privateFunction();
};

class Derived : private Base {
public:
    void demo();
};



#endif
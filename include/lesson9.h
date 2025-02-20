#ifndef LESSON9_H
#define LESSON9_H

using namespace std;

class Lesson9 { 
    public:       
        void onExecute();
};

class Base {
public:
    void func();
};

class Derived : protected Base {
public:
    void accessBase();
};

class SubDerived : public Derived {
public:
    void accessBaseInSub();
};

class SubSubDerived : public SubDerived {
public:
    void accessBaseInSubSub();
};


#endif
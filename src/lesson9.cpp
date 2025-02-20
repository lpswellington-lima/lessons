#include <iostream>
#include <lesson9.h>
#include <config.h>

using namespace std;

void Lesson9::onExecute(){
    SubDerived sd;
    sd.accessBaseInSub();
    
    SubSubDerived ssd;
    ssd.accessBaseInSubSub();
}

void Base::func(){
    PRINT("func called")
}

void Derived::accessBase() {
    PRINT("accessBase called")
    func(); // OK: Accessing Base's func
}

void SubDerived::accessBaseInSub() {
    PRINT("accessBaseInSub called")
    func(); // OK: SubDerived can access Base's func through Derived
}

void SubSubDerived::accessBaseInSubSub() {
    PRINT("accessBaseInSubSub called")
    func(); // OK: SubDerived can access Base's func through Derived
}
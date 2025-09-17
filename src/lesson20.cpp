#include <iostream>
#include <lesson20.h>
#include <config.h>
#include <string>

using namespace std;

void Lesson20::onExecute(){
    MultiIncrementer<int>* MultiInt = new MultiIncrementer<int>();
    PRINT("1 + 2 = " << MultiInt->add(1,2));
    MultiIncrementer<float>* MultiFloat = new MultiIncrementer<float>();
    PRINT("1.3 + 2.4 = " << MultiFloat->add(1.3,2.4));
    MultiIncrementer<string>* MultiString = new MultiIncrementer<string>();
    PRINT("hi + hey! = " << MultiString->add("hi"," hey!"));
    delete MultiInt;
    delete MultiFloat;
}

template <typename D>
D MultiIncrementer<D>::add(D v1, D v2){
    return v1 + v2;
}
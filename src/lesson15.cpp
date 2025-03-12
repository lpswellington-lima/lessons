#include <iostream>
#include <lesson15.h>
#include <config.h>

using namespace std;

void Lesson15::onExecute(){
    PRINT("Lesson 15")
    int a = 10;
    Incrementer i;
    int b = i.increment(a);
    PRINT("b = " << b << " a = " << a)
    i.incrementV2(a);
    PRINT("a = " << a)
}

int Incrementer::increment(int x){
    return x + 1;
}

void Incrementer::incrementV2(int& x){
    x++;
}
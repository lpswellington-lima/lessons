#include <iostream>
#include <config.h>
#include <lesson2.h>
#include <lesson3.h>
#include <lesson5.h>
#include <lesson6.h>
#include <lesson7.h>
//#include <lesson8.h>
//#include <lesson9.h>
#include <lesson10.h>
#include <lesson11.h>
#include <lesson12.h>
#include <lesson13.h>

using namespace std;

int main(int argc, char **argv) {
    //onExecute();
    Lesson* lesson = new Lesson13();
    lesson->onExecute();
    
    return 0;
}
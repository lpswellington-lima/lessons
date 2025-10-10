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
#include <lesson14.h>
#include <lesson15.h>
#include <lesson16.h>
#include <lesson17.h>
#include <lesson18.h>
#include <lesson19.h>
#include <lesson20.h>
#include <lesson21.h>
#include <exercise1.h>
#include <lesson22.h>
#include <lesson23.h>

using namespace std;

int main(int argc, char **argv) {
    //onExecute();
    Lesson* lesson = new Lesson23();
    lesson->onExecute();
    delete lesson;
    
    return 0;
}
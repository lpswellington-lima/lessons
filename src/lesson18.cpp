#include <iostream>
#include <lesson18.h>
#include <config.h>
#include <thread>
#include <mutex>

using namespace std;

void Lesson18::onExecute(){
    IncrementerV3 incrementer;
    thread myThread1(&IncrementerV3::increment, &incrementer, 1);
    thread myThread2(&IncrementerV3::increment, &incrementer, 2);
    thread myThread3(&IncrementerV3::increment, &incrementer, 5);
    
    thread myThread4(&IncrementerV3::incrementProtected, &incrementer, 1);
    thread myThread5(&IncrementerV3::incrementProtected, &incrementer, 2);
    thread myThread6(&IncrementerV3::incrementProtected, &incrementer, 5);
    myThread1.join();
    myThread2.join();
    myThread3.join();

    myThread4.join();
    myThread5.join();
    myThread6.join();

    incrementer.printValue();
}

void IncrementerV3::increment(int x){
    for (int i=0; i<1000; i++){
        value += x;
    }    
}

void IncrementerV3::incrementProtected(int x){
    for (int i=0; i<1000; i++){
        //lock_guard<mutex> lock(mtx); //automatically unlocks when out of scope
        unique_lock<mutex> lockX(mtx);
        // mtx.lock(); //regular lock
        value2 += x;
        // mtx.unlock(); //regular unlock
        lockX.unlock(); // unique lock will unlock automatically when out of scope, but you have the option to do this explicitly
    }   
}

void IncrementerV3::printValue() { 
    PRINT("value: " << value << ", value2: " <<value2);
}
#ifndef LESSON18_H
#define LESSON18_H
#include <config.h>
#include <vector>
#include <mutex>

using namespace std;

class Lesson18 : public Lesson{ 
    public:       
        void onExecute();        
};

class IncrementerV3 {
    public:
        int value = 0; //shared resource;
        int value2 = 0; //shared resource;
        mutex mtx; //mutex to protect access to value;

        void increment(int x);
        void incrementProtected(int x);
        void printValue();
};

#endif
#ifndef LESSON15_H
#define LESSON15_H
#include <config.h>
#include <vector>

using namespace std;

class Lesson15 : public Lesson{ 
    public:       
        void onExecute();
};

class Incrementer {
    public:
        int increment(int x);
        void incrementV2(int& x);
};

#endif
#ifndef LESSON17_H
#define LESSON17_H
#include <config.h>
#include <vector>

using namespace std;

class Lesson17 : public Lesson{ 
    public:       
        void onExecute();
};

class IncrementerNew {
    public:
        int increment(int x);
        void incrementV2(int& x);
};

#endif
#ifndef EXERCISE1_H
#define EXERCISE1_H
#include <config.h>
#include <bitset>
#include <string>

using namespace std;

class Exercise1 : public Exercise{ 
    private:
        string input;
    public:
        Exercise1(string question) : Exercise(question) {};       
        void onExecute();
        void printQuestion();
};

#endif
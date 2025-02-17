#ifndef LESSON7_H
#define LESSON7_H
#include <string>

using namespace std;

class Lesson7 { 
    public:       
        void onExecute();
};

class Counter {
private:
    static int count; // Static data member to hold the count
    const string nonStaticMember = "Our counter";

public:
    Counter(); // Constructor

    // Static member function
    static void displayCount();

    // Non-static member function
    void resetCount();
};

class Counter2 : public Counter{
private:
    static int count2;
public:
    Counter2();
};

#endif
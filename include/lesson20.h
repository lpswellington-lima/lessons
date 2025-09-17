#ifndef LESSON20_H
#define LESSON20_H
#include <config.h>
#include <vector>
#include <mutex>

using namespace std;

class Lesson20 : public Lesson{ 
    public:       
        void onExecute();        
};

template<typename D>
class MultiIncrementer {
    private:
        D value;
    public:
        D add(D v1, D v2);
};

#endif
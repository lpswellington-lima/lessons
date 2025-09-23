#ifndef LESSON21_H
#define LESSON21_H
#include <config.h>
#include <bitset>

using namespace std;

class Lesson21 : public Lesson{ 
    public:       
        void onExecute();
};

template <size_t N>
class BitMask{
    private:
        bitset<N> bits;
    public:
        BitMask(unsigned long long value) : bits(value) {};
        BitMask() = default;
        void printBinary();
        BitMask<N> operator<<(int shift);
        BitMask<N> operator>>(int shift);
        BitMask<N> operator&(BitMask<N> mask);
        BitMask<N> operator|(BitMask<N> mask);
        BitMask<N> operator^(BitMask<N> mask);
        BitMask<N> operator~();        
    
};

#endif
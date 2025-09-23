#include <iostream>
#include <lesson21.h>
#include <config.h>
#include <string>

using namespace std;

void Lesson21::onExecute(){
   BitMask<8> demo(6);
   BitMask<8> demo2(3);
   BitMask<8> demo3;
   demo3 = demo & demo2;
   demo3.printBinary();
   demo3 = demo | demo2;
   demo3.printBinary();
   demo.printBinary();
   demo = demo << 2;
   demo.printBinary();
   demo = demo >> 2;
   demo.printBinary();
   demo = ~demo;
   demo.printBinary();
   demo3 = demo ^ demo2;
   demo3.printBinary();
}

template <size_t N>
void BitMask<N>::printBinary(){
    PRINT("Bits: " << bits);
}

template <size_t N>
BitMask<N> BitMask<N>::operator<<(int shift){
    BitMask<N> newBitMask(0);
    newBitMask.bits = bits << shift;
    return newBitMask;
}

template <size_t N>
BitMask<N> BitMask<N>::operator>>(int shift){
    BitMask<N> newBitMask(0);
    newBitMask.bits = bits >> shift;
    return newBitMask;
}

template <size_t N>
BitMask<N> BitMask<N>::operator&(BitMask<N> mask){
    BitMask<N> newBitMask(0);
    newBitMask.bits = bits & mask.bits;
    return newBitMask;
}

template <size_t N>
BitMask<N> BitMask<N>::operator|(BitMask<N> mask){
    BitMask<N> newBitMask(0);
    newBitMask.bits = bits | mask.bits;
    return newBitMask;
}

template <size_t N>
BitMask<N> BitMask<N>::operator^(BitMask<N> mask){
    BitMask<N> newBitMask(0);
    newBitMask.bits = bits ^ mask.bits;
    return newBitMask;
}

template <size_t N>
BitMask<N> BitMask<N>::operator~(){
    BitMask<N> newBitMask(0);
    newBitMask.bits = ~bits;
    return newBitMask;
}
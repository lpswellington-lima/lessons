#include <iostream>
#include <lesson16.h>
#include <config.h>
#include <vector>
#include <algorithm>

using namespace std;

void Lesson16::onExecute(){
    PRINT("Lesson 16")
    int x = 10;
    int y = 20;
    auto multiply = [x, &y]() -> int {
        int result = x * y;
        //x = x - 2; 
        y = y*2;
        return result;
    };
    auto multiply2 = [](int x, int &y) -> int {
        x = 5;
        y = 20;
        return x * y;
    };
    auto multiply3 = [=](){
        return x * y;
    };

    vector<int> numbers = {1, 2, 3, 4, 5};

    for_each(numbers.begin(), numbers.end(), [](int num){
        PRINT(num)
    });

    PRINT("x = "<< x << " y = " << y);
    PRINT("result multiply = " << multiply());
    PRINT("x = "<< x << " y = " << y);
    PRINT("result multiply = " << multiply2(2,y));
    PRINT("x = "<< x << " y = " << y);
    PRINT("result multiply = " << multiply3());
}
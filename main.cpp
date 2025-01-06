#include <iostream>
#include "include/config.h"
#include "include/lesson2.h"

using namespace std;

int main(int argc, char **argv) {
    // PRINT(HI);
    testing();
    PRINT(endl<<"Value g_ptr: " << g_ptr1);
    PRINT("value that g_ptr stores: " << *g_ptr1);

    PRINT(endl << "Value g_ptr2: " << g_ptr2);
    PRINT("value that g_ptr2 stores: " << *g_ptr2);
    delete g_ptr2;

    PRINT(endl << "Value g_ptr3: " << g_ptr3);
    PRINT("value that g_ptr3 stores: " << *g_ptr3);
    
    stackOverflow();
    
    return 0;
}
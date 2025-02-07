#include <iostream>
#include <lesson2.h>
#include <config.h>

using namespace std;
// declaring a global pointer for testing
int* g_ptr1 = nullptr; //pointer is stored in data segment
int* g_ptr2 = nullptr; //pointer is stored in data segment
int* g_ptr3 = nullptr; //pointer is stored in data segment

void testing(){
    int x = 10; // variable stored in stack
    int* ptr = &x; // pointer and value stored in stack
    g_ptr1 = ptr; // sending the address that was stored in stack to the pointer stored in data segment so we won't lose it


    int* ptr2 = new int(42); //Pointer is stored in stack but value is stored in the heap. 
    // *ptr2 = 52;
    g_ptr2 = ptr2; // store the address of the local pointer (stored in stack), to a global pointer (stored in data segment) so we won't lose it;
    
    static int y = 40; // static value is stored in the data segment
    g_ptr3 = &y; // pointer is stored in the data segment, value is stored in data segmente as well;

    
    PRINT("Value ptr: " << ptr);
    PRINT("value that ptr stores: " << *ptr);
    PRINT("Value g_ptr: " << g_ptr1);
    PRINT("value that g_ptr stores: " << *g_ptr1);
    PRINT("value of : " << x);
    PRINT("Memory velue in which x is stored: " << &x);

    PRINT("Value ptr2: " << ptr2);
    PRINT("value that ptr stores: " << *ptr2);
    PRINT("Value g_ptr: " << g_ptr2);
    PRINT("value that g_ptr stores: " << *g_ptr2);
    //delete g_ptr2;
    //delete ptr2;
}

void stackOverflow(){
    stackOverflow();
}
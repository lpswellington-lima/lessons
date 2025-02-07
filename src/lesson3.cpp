#include <iostream>
#include <lesson3.h>
#include <config.h>

using namespace std;

void onExecute(){
    const person w = {"Wellington",30,174,80.9};
    person y = {"Marcos",35,178,95};
    PRINT(w.name << " " << w.age << " " << w.height << " " << w.weight );

    //const pointer* ptr : You can change the pointer, but the value of the pointer is constant (cannot change);
    person const * person_ptr = &w;
    person_ptr = &y;
    // *person_ptr = {"Wellington",30,174,80.9}; // you get an error
    PRINT(person_ptr->name << " " << person_ptr->age << " " << person_ptr->height << " " << person_ptr->weight );
    

    //pointer* const ptr : the pointer (address is constant), but the value stored in that memory can be changed.
    person* const person_ptr2 = &y;
    //person* const person_ptr2 = &w;  //--- You get an error, because w is a const variable thus it cannot change it's value;
    // person_ptr2 = &w; // you get an error
    *person_ptr2 = w;
    PRINT(person_ptr->name << " " << person_ptr->age << " " << person_ptr->height << " " << person_ptr->weight );
}

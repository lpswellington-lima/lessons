#include <iostream>
#include <exercise1.h>
#include <config.h>
#include <string>

using namespace std;

void Exercise1::onExecute(){
    PRINT("Exercise1");
    INPUT("Enter the string", input);
    int begin = input.length(); //this marks the beggining of the new string
    int end = begin;
    bool flag = false;
    for (int i=0; i < input.length(); i++){
        if (input[0] == ' ' || flag){          
            end = begin;
            flag = !flag;        
        }   
        input.insert(end, 1, input[0]);
        input.erase(0,1);
        begin--;     
    }
    PRINT(input);
}

void Exercise1::printQuestion(){
    PRINT("---------------------------------------------------");
    PRINT(question);
    PRINT("\n---------------------------------------------------");    
}
#include <iostream>
#include <lesson10.h>
#include <config.h>

using namespace std;

void Lesson10::onExecute(){
    MultiFunctionPrinter d;
    d.showCompany();
    d.Printer::turnOn();
    d.copy();
    d.print();
    d.scan();
}

void OfficeEquipment::showCompany(){
    PRINT("This equipment belongs to Cherry-Pick!");
}

void Printer::print(){
    PRINT("Printing...")
}

void Printer::turnOn(){
    PRINT("Turning on...")
}

void Scanner::scan(){
    PRINT("Scanning...")
}

void Scanner::turnOn(){
    PRINT("Turning on...")
}

void MultiFunctionPrinter::copy() {
    PRINT("Copying...")
    scan();
    print();
}

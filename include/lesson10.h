#ifndef LESSON10_H
#define LESSON10_H

using namespace std;

class Lesson10 { 
    public:       
        void onExecute();
};

class OfficeEquipment {
    public:
        void showCompany();
};

class Printer : virtual public OfficeEquipment {
public:
    void print();
    void turnOn();
};

class Scanner : virtual public OfficeEquipment {
public:
    void scan();
    void turnOn();
};

class MultiFunctionPrinter : public Printer, public Scanner {
public:
    void copy();
};

#endif
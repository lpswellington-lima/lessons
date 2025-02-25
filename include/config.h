#ifndef CONFIG_H
#define CONFIG_H

#define PROGRAM_1
#define PROGRAM_DETAILS

#define PRINT(x) std::cout << x << "              | info  ---  file: " << __FILE__ << " line: " << __LINE__ << " Build at: " << __DATE__ << " "<<  __TIME__ << endl;
#define PRINT_ERROR(x) std::cerr << x << "              | info  ---  file: " << __FILE__ << " line: " << __LINE__ << " Build at: " << __DATE__ << " "<<  __TIME__ << endl;

#ifdef PROGRAM_1
#define HI "Hello World"
#else
#define HI "Hello World 1"
#endif

class Lesson { 
    public:       
        virtual void onExecute() = 0;
};

#endif
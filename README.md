<h1 align="center"> Cherry-Pick Programming </h1> 

<p align="center">
<img src="https://github.com/user-attachments/assets/544b5210-ef74-4199-b0ce-798f92cce7b0" alt="drawing" width="900"/> 
</p>

<p align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/STATUS-IN_DEVELOPMENT-yellow">
<img alt="Static Badge" src="https://img.shields.io/badge/LANGUAGE-IN_C%2B%2B-blue">
<!-- (https://shields.io/badges/static-badge) --> 
</p>

Lessons for c++ programming

<h2 align="left"> Table of Contents </h2> 

- [Lesson 1: Hello World, Build and Macros](#lesson-1-hello-world-build-and-macros)
  - [building process](#building-process)
  - [Preprocessing:](#preprocessing)
  - [Compilation:](#compilation)
  - [Assembly:](#assembly)
  - [Linking:](#linking)
  - [Makefile:](#makefile)
- [Lesson 2: Variable, Pointers and Memory](#lesson-2-variable-pointers-and-memory)
  - [Pointers](#pointers)
  - [Static keyword for variables](#static-keyword-for-variables)
  - [Memory Segments](#memory-segments)
    - [Stack](#stack)
    - [Heap](#heap)
    - [Data Segment](#data-segment)


# Lesson 1: Hello World, Build and Macros

## building process

The compilation process transforms C source code into machine code, enabling execution on hardware. There are four stages of compilation as shown in the picture:

<p align="left">
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20230404112946/Compilation-Process-in-C.png" alt="drawing" width="400"/> 
</p>

- For complete build: `g++ main.cpp -o main`

## Preprocessing: 

- This is the first step where the preprocessor handles directives (lines starting with #).
- The preprocessor expands macros, includes header files, and removes comments.
- The output of this stage is a translated C++ source file (often with a .ii extension) that contains all the code ready for compilation.
- For example, #include <iostream> will pull in the contents of the iostream header file.
 
**Before proprocessing:**
 ```cpp
#define HI "Hello World"

int main(int argc, char **argv){
    std::cout << HI << endl
    return 0;
}
 ```

**After proprocessing:**
 ```cpp
int main(int argc, char **argv){
    std::cout << "Hello World" << endl
    return 0;
}
 ```

Preprocessing a file with g++:
```shell script
    g++ -E main.cpp -o main.i
```

##  Compilation: 

- In this stage, the preprocessed C++ code is translated into assembly code by the compiler.
- The compiler checks for syntax errors and translates the code into a lower-level representation (assembly language).
- The output of this stage is typically an assembly file (with a .s extension).

For compilation phase:
```shell script
    g++ -S main.cpp -o main.s
```

##  Assembly:

- The assembly code is then converted into machine code (binary code).
- This step is performed by an assembler.
- The output is an object file (commonly with a .o or .obj extension), which contains machine code but is not yet a complete executable.

For Assembly phase: 
```shell script
    g++ -c main.cpp -o main.o`
```

## Linking:

- The linker combines one or more object files into a single executable file.
- It resolves references to external symbols (like functions and variables defined in other files or libraries).
- The output of this step is the final executable program (e.g., my_program.exe).
- The linker also includes any necessary libraries linked to your program, ensuring it has access to all required functions.

For linking phase:
```shell script
    g++ main.o -o main
```

## Makefile:
Makefiles are specialized files used by the make build automation tool to manage the build process of C++ programs and other projects. They define how to compile and link the program by specifying the relationships between source files, object files, and the final executable. Here's an overview of key components and how makefiles work

```shell script
all: main.cpp include/config.h #recompiles the output everytime main.cpp or include/config.h changes
	g++ main.cpp -o main #recipe for compiling main

clean:
	rm *.o *.i *.s main
```

To executes the recipe "all" you just need to run:
```shell script
    make all
```

To executes the recipe "clean" you just need to run:
```shell script
    make clean
```

# Lesson 2: Variable, Pointers and Memory

## Pointers 

Pointers are variables that store memory addresses as their values. They "point to" the location in memory where a variable or data is stored.

**Key Concepts**

1. Address: Memory location where data is stored.
2. Pointer variable: Holds the memory address.
3. Dereferencing: Accessing the data stored at the pointed memory address.

**Assingment and Dereferencing**
```cpp
int x = 10;
int* ptr = &x; // Assigning the address of x to ptr
cout << *ptr; // Accessing data using the pointer. (outputs 10)
```

## Static keyword for variables

**Static local variables:** Initialized only once, retaining value between function calls.

```cpp
void func() {
    static int x = 10;
    x++;
    cout << x;
}

int main(int argc, char **argv){
    func(); // prints 11
    func(); // prints 12
    fund(); // prints 13
    return 0;
}
```

**Static global variables:** accessible only within this file, which means if you try to use extern it will not compile

```cpp
static int x = 10;
```

## Memory Segments

### Stack

1. Last-In-First-Out (LIFO) data structure
2. Stores local variables, function parameters, and return addresses
3. Memory allocated and deallocated automatically (managed by compiler)
4. Fast access, low memory overhead

### Heap

1. Dynamic memory allocation
2. Stores globally allocated variables, objects, and data structures
3. Memory allocation/deallocation managed manually (by programmer)
4. Slower access, higher memory overhead

### Data Segment

1. Static memory allocation
2. Stores initialized and uninitialized global variables
3. Stores static variables
4. Memory allocated at compile-time
5. Fast access, low memory overhead

Here is a summary of how variables are stored:
<p align="left">
<img src="https://github.com/user-attachments/assets/1b8cc433-9ef9-4042-be5e-284954c7e18f" alt="drawing" width="1000"/> 
</p>
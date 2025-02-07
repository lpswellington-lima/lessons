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
  - [Building process](#building-process)
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
- [Lesson 3: Structs, Const Variables and Pointers](#lesson-3-structs-const-variables-and-pointers)
  - [Structs](#structs)
    - [Declaration](#declaration)
    - [Initializing Structs](#initializing-structs)
    - [Accessing Members](#accessing-members)
  - [Const variables](#const-variables)
    - [variable](#variable)
    - [Pointer to a Constant](#pointer-to-a-constant)
    - [Constant pointer](#constant-pointer)
- [Lesson 4: Improving Makefile](#lesson-4-improving-makefile)
  - [Basic Terms](#basic-terms)
  - [Makefile Syntax](#makefile-syntax)
  - [Adding pre-defined include paths in your Makefile](#adding-pre-defined-include-paths-in-your-makefile)
  - [Variables](#variables)
  - [Special Variables](#special-variables)


# Lesson 1: Hello World, Build and Macros

## Building process

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




# Lesson 3: Structs, Const Variables and Pointers

## Structs
A struct (short for "structure") is a user-defined data type that groups variables of different data types together into a single unit.

### Declaration
```cpp
struct StructureName {
    data_type member1;
    data_type member2;
    // ...
};
```

**Example**
```cpp
struct Person {
    int age;
    string name;
    double height;
};
```

1. **Public members by default:** Unlike classes, struct members are public unless specified otherwise.
2. **Data grouping:** Structs organize related variables together.
3. **Function members:** Structs can have member functions.
4. **Inheritance:** Structs can inherit from other structs or classes.

### Initializing Structs

1. Direct initialization: Person p = {25, "John", 1.75};
2. Designated initialization (C++20): Person p = {.age = 25, .name = "John"};

### Accessing Members

1. Dot notation: p.age
2. Pointer notation: (&p)->age or ptr->age

## Const variables

1. Immutable: Const variables cannot be changed after initialization.
2. Read-only: Const variables can only be read, not written to.
3. Compile-time checking: Attempts to modify const variables are caught during compilation.

### variable
```cpp
    const int x = 5;
    x = 3; //You get an error because it's read only;
```

### Pointer to a Constant

That happens when the `const` comes before the `*` examples:

```cpp
    const int* ptr;
    int const *ptr
```

In this case the value pointed to is constant. But the pointer itself can point to another address;

```cpp
    const int* ptr = new int(42);
    *ptr = 3; //get an error because you cannot change the value of the pointer;
    delete ptr;
    ptr = new int(8); // it can point to a different address
    delete ptr;
```

### Constant pointer
That happens when the const comes after the `*` examples:

```cpp
    int* const ptr;
```

In this case the value pointed can be changed. But the pointer itself cannot point to another address;

```cpp
    int* const ptr = new int(42);
    *ptr = 3; //You cannot change the value pointed to freely;
    delete ptr;
    ptr = new int(8); // it gets an error, because it cannot point to a different address;
    delete ptr;
```

# Lesson 4: Improving Makefile

Common terms used in Makefiles:

## Basic Terms

1. Target: The file or goal to be built or generated.
2. Dependency (or Prerequisite): Files required to build the target.
3. Recipe (or Action): Commands to build the target.
4. Rule: Combination of target, dependencies, and recipe.

## Makefile Syntax

1. Target: Starts with the target file name, followed by a colon (:).
2. Dependencies: Listed after the target, separated by spaces.
3. Recipe: Indented commands following the target and dependencies.
Example:

```sh
target: dependency1 dependency2
    recipe_command1
    recipe_command2
```

## Adding pre-defined include paths in your Makefile

That means that you do not need to include the entire path in every file

```cpp
    // If you predefine a path you can use
    #include <config.h>
    // Instead of
    #include "include/config.h"
```

For doing that you have to add the g++ flag -I followed by the path you wanna include

```sh
    PATH = include
    g++ -I$(PATH)-c src/lesson4.cpp -o lesson4.o
```

## Variables 

Variables in Makefiles are defined using the = operator. Once a variable is set, you can use it throughout the Makefile by referencing its name.

```sh
    CC = g++
    SRC_DIR = src
    OBJ_DIR = obj
    CFLAGS = -Iinclude
```

In this example:

1. CC is a variable that defines the C++ compiler to be used.
2. SRC_DIR indicates the directory where source files are located.
3. OBJ_DIR specifies the directory for object files.
4. CFLAGS contains compiler flags, such as including directory paths.

To use a variable, enclose its name in parentheses or braces and prefix it with a dollar sign ($). There are two common forms:

Variable Reference: 

1. Uses parentheses, e.g., $(VAR_NAME).
2. Uses braces, e.g., ${VAR_NAME}. This is particularly useful when the variable is followed by characters that might be interpreted as part of its name.

Example:
```sh
    all: $(OBJ_DIR)/main.o $(OBJ_DIR)/utils.o
    $(CC) -o my_program $(OBJ_DIR)/main.o $(OBJ_DIR)/utils.o $(CFLAGS)
```

## Special Variables

1. $@: Target file name.
2. $<: First dependency file name.
3. $^: All dependency file names.
4. $?: Dependencies newer than the target.
5. %: A wildcard character used for pattern matching

```sh
# Compile all .c files to .o files:

%.o: %.c
    $(CC) -c $< -o $@
```
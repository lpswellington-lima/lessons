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
- [Lesson 5: Classes and Constant Functions](#lesson-5-classes-and-constant-functions)
  - [Key Concepts:](#key-concepts)
  - [Access Specifiers](#access-specifiers)
  - [Class Declaration](#class-declaration)
  - [Scope Resolution Operator](#scope-resolution-operator)
  - [Constructor](#constructor)
    - [Implicit Default Constructor:](#implicit-default-constructor)
      - [Deleting the Default Constructor:](#deleting-the-default-constructor)
    - [Initializer list](#initializer-list)
  - [Getters and Setters](#getters-and-setters)
    - [Const functions](#const-functions)
    - [Function with a const parameter](#function-with-a-const-parameter)
- [Lesson 6: Inheritance in C++](#lesson-6-inheritance-in-c)
  - [Definition of Inheritance](#definition-of-inheritance)
  - [Creating a Class That Inherits from Another Class](#creating-a-class-that-inherits-from-another-class)
  - [How Constructor Reuse Works in Inheritance](#how-constructor-reuse-works-in-inheritance)
  - [The virtual Keyword](#the-virtual-keyword)
  - [The final Keyword](#the-final-keyword)
    - [Final Class:](#final-class)
    - [Final Method:](#final-method)
- [Lesson 7: Static Members in Classes](#lesson-7-static-members-in-classes)
  - [Static Members](#static-members)
  - [Calling Static Functions](#calling-static-functions)
  - [Constructor Behavior with Inheritance](#constructor-behavior-with-inheritance)
  - [Static Scope and Instance Independence](#static-scope-and-instance-independence)
- [Lesson 8: Private Inheritance](#lesson-8-private-inheritance)
  - [Characteristics of Private Inheritance](#characteristics-of-private-inheritance)
    - [Visibility:](#visibility)
    - [Access Levels:](#access-levels)
- [Lesson 9: Protected Inheritance](#lesson-9-protected-inheritance)
  - [Overview](#overview)
  - [Key Points](#key-points)
- [Lesson 10: Multiple Inheritance](#lesson-10-multiple-inheritance)
  - [Ambiguity in Multiple Inheritance](#ambiguity-in-multiple-inheritance)
  - [The Diamond Problem](#the-diamond-problem)
  - [Virtual Inheritance](#virtual-inheritance)
- [Destructor](#destructor)
  - [Key Features of Destructors in C++](#key-features-of-destructors-in-c)
  - [Order of Destruction:](#order-of-destruction)
- [Abstract Class](#abstract-class)
  - [Characteristics of Abstract Classes](#characteristics-of-abstract-classes)
  - [Practical Benefits of Using Abstract Classes](#practical-benefits-of-using-abstract-classes)
- [Lesson 13: Operator Overloading](#lesson-13-operator-overloading)
  - [Operator Overloading with the operator Keyword](#operator-overloading-with-the-operator-keyword)
  - [Syntax](#syntax)
- [Lesson 14: Function Polymorphism](#lesson-14-function-polymorphism)
  - [Types of Polymorphism](#types-of-polymorphism)
    - [Compile-time Polymorphism](#compile-time-polymorphism)
    - [Run-time Polymorphism](#run-time-polymorphism)
  - [Key Points](#key-points-1)
- [Lesson 15: Parameters by reference](#lesson-15-parameters-by-reference)
  - [Passing by Value](#passing-by-value)
  - [Passing by Reference](#passing-by-reference)
  - [Summary of Differences](#summary-of-differences)
- [Lesson 16: Lambda Functions](#lesson-16-lambda-functions)
  - [Syntax](#syntax-1)
  - [Capturing Variables](#capturing-variables)
    - [Capture Modes](#capture-modes)
  - [Key Features of Lambda Functions](#key-features-of-lambda-functions)
- [Lesson 17: Basics of Threads](#lesson-17-basics-of-threads)
  - [What are Threads?](#what-are-threads)
  - [Key Concepts](#key-concepts-1)
  - [Thread Lifecycle](#thread-lifecycle)
  - [How to Run a Thread in C++](#how-to-run-a-thread-in-c)
  - [Joinable Threads](#joinable-threads)
- [Lesson 18: Race Condition and Mutex](#lesson-18-race-condition-and-mutex)
  - [Understanding Race Condition](#understanding-race-condition)
  - [How Mutex Solves Race Conditions](#how-mutex-solves-race-conditions)
  - [Creating a Mutex in C++](#creating-a-mutex-in-c)
  - [Locking and Unlocking Resources](#locking-and-unlocking-resources)
  - [Differences Between lock\_guard and unique\_lock](#differences-between-lock_guard-and-unique_lock)
- [Lesson 19: Linked List Overview](#lesson-19-linked-list-overview)
- [Lesson 20: Templates in C++](#lesson-20-templates-in-c)
  - [Function Templates:](#function-templates)
  - [Class Templates:](#class-templates)
  - [Compilation Process for Templates](#compilation-process-for-templates)
    - [Code Definition:](#code-definition)
    - [Instantiation:](#instantiation)
    - [Translation Units:](#translation-units)
- [Lesson 21: Logical and Bitwise Operators](#lesson-21-logical-and-bitwise-operators)
  - [Logical Operators](#logical-operators)
  - [Bitwise Operators](#bitwise-operators)
  - [std::bitset in C++](#stdbitset-in-c)
    - [Overview](#overview-1)
    - [Common Features](#common-features)
    - [Basic Usage](#basic-usage)
    - [Common Methods](#common-methods)
- [Lesson 22: Smart Pointers](#lesson-22-smart-pointers)
  - [Types of Smart Pointers:](#types-of-smart-pointers)
    - [std::unique\_ptr](#stdunique_ptr)
    - [std::shared\_ptr](#stdshared_ptr)
- [Lesson 23: Maps](#lesson-23-maps)
  - [Key features of std::map:](#key-features-of-stdmap)



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
    *ptr = 3; //You can change the value pointed to freely;
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

# Lesson 5: Classes and Constant Functions

## Key Concepts:

Classes in C++ are a fundamental part of object-oriented programming (OOP), allowing developers to create complex data types that represent real-world entities. A class provides a blueprint for creating objects (instances) and encapsulating data along with methods that operate on that data. 

1. **Encapsulation:** Classes encapsulate data (attributes) and functions (methods) that operate on the data into a single unit. This protects the internal state of an object from unauthorized access and modification, usually by restricting visibility using access specifiers (private, protected, and public).

## Access Specifiers
1. **Public:** Members declared public are accessible from outside the class, allowing external code to view and modify these members.
2. **Private:** Members declared private are only accessible from within the class itself. This restricts access to sensitive data and helps maintain control over how the data is modified.
3. **Protected:** Members declared protected can be accessed in the class itself and by derived classes, but are not accessible from outside these classes.

## Class Declaration

A class in C++ is defined using the class keyword, followed by the class name and a set of curly braces containing its members.

```cpp
class ClassName {
private:
    // Attributes (data members)
    int value = 10;
public:
    // Constructor(s)
    ClassName();
    // Methods (member functions)
    void display();
};
```

Not that this example keeps encapsulation of the class. The attributes are private, which can only be modified through a method

## Scope Resolution Operator

The :: operator in C++ is known as the scope resolution operator. It is used to define the context in which a name (like a variable, function, or class) is defined, allowing you to clarify which entity you are referring to, especially when there might be ambiguity or name conflicts. **When defining member functions outside of a class, the scope resolution operator is used to indicate that the function belongs to a specific class.**

```cpp
void ClassName::display() { // Here, :: is used to define the member function outside the class
    std::cout << "Hello from MyClass!" << std::endl;
}
```

## Constructor

In C++, a constructor is a special member function that is automatically called when an object of a class is created.

### Implicit Default Constructor:

If you define no constructors in your class, the compiler provides a default constructor that initializes member variables (default initialization for built-in types and zero-initialization for objects of user-defined types).

#### Deleting the Default Constructor:

If you explicitly define any constructor, even if it's a parameterized constructor, the compiler will not generate the default constructor. In such cases, if you try to create an object without any arguments, it will result in a compilation error.

That is how to fix that problem:
```cpp
class MyClass {
public:
    MyClass() = default; // Forces the compiler to generate a default constructor
    // You can define other constructors here
};
```
After that you can delete the explicit constructor and the compiler will use the default

### Initializer list

In C++, the colon (:) operator is used in the context of constructors to create an initializer list. An initializer list allows you to initialize member variables before the constructor's body is executed. This is particularly useful for several reasons, including efficiency, ordering of initialization, and directly initializing const and reference members.

```cpp
class ClassName {
private:
    int x;
    const int y;
    int& ref;

public:
    // Constructor using initializer list
    ClassName(int val1, int val2) : x(val1), y(val2), ref(val2) {
        // Constructor body (optional)
    }
};
```

## Getters and Setters

**Getters:** Getters are methods that allow you to retrieve (get) the value of a private member variable from outside the class.
**Setters:** Setters are methods that allow you to set (modify) the value of a private member variable from outside the class.

Differently from constructors **you can not use initializer lists for setting variables**

### Const functions

In C++, const functions are member functions declared with the const keyword at the end of their declaration. This indicates that the function does not modify any member variables of the class. It is a good practice to use it for getters, since you wanna make sure that the return does not take any modifications throughout the function.

Consider a class person that has an attribute named "name":
```cpp
// Getter for name
std::string Person::getName() const {
    // name = "wellington";  //You'll get an error cause const methods (or functions) can not modify the object parameters before returning them.
    return name;
}
```

### Function with a const parameter

In C++, a function can take a const parameter to ensure that the argument passed to it cannot be modified within the function body. This is useful for enforcing immutability and providing read-only access to the input data. It is a good practice to use it for setters, since you wanna make sure that the value you are setting is not modified throughout the function.

```cpp
void Person::setName(const std::string& name) {
    // name = "wellington"; //you can't do that cause the parameter is const, it can't be modified inside the function
    this->name = name;
}
```

# Lesson 6: Inheritance in C++

## Definition of Inheritance

Inheritance is a fundamental concept in object-oriented programming that allows one class (the derived class) to inherit properties and behaviors (attributes and methods) from another class (the base class). This mechanism promotes code reuse and establishes a hierarchical relationship between classes, enabling more organized and manageable code structures.

## Creating a Class That Inherits from Another Class
To create a class that inherits from another class in C++, you use the following syntax:

```cpp
class BaseClass {
    // Base class members
};

class DerivedClass : public BaseClass {
    // Derived class members
};
```
In this example, DerivedClass inherits from BaseClass with public access. The derived class can access public and protected members of the base class.

## How Constructor Reuse Works in Inheritance

1. Calling Base Class Constructor:

When a derived class is instantiated, the constructor of the base class is called automatically before executing the constructor of the derived class. If you want to pass parameters to the base class constructor, you can do so using an initializer list in the derived class constructor.

2. Initializer List:

This is a special syntax used to initialize base class members and derived class members directly. You can specify which base class constructor to call and pass the required arguments.

```cpp
#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    // Constructor for base class
    Animal(const std::string& nameInput) : name(nameInput) {
        std::cout << "Animal constructor called for " << name << std::endl;
    }

    void speak() const {
        std::cout << name << " makes a sound." << std::endl;
    }
};

class Dog : public Animal { // Dog inherits from Animal
public:
    // Constructor for derived class
    Dog(const std::string& nameInput) : Animal(nameInput) { // Calling base class constructor
        std::cout << "Dog constructor called for " << name << std::endl;
    }

    void bark() const {
        std::cout << name << " barks!" << std::endl;
    }
};

int main() {
    Dog myDog("Buddy"); // Create an instance of Dog
    myDog.speak();      // Calls the speak method from Animal
    myDog.bark();       // Calls the bark method from Dog

    return 0;
}
```

## The virtual Keyword
The virtual keyword is used in C++ to declare a method in a base class that can be overridden in derived classes. Declaring a method as virtual allows for polymorphism, enabling the program to call the correct method implementation based on the type of the object being referenced, rather than the type of the reference itself.

Example:
```cpp
class Base {
public:
    virtual void show() { // Virtual function
        std::cout << "Base class show()" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override { // Override the base class method
        std::cout << "Derived class show()" << std::endl;
    }
};

void display(Base* b) {
    b->show(); // Calls the appropriate show() based on the object type
}
```

In this case, if you create a Derived object and call display(&derivedObject), the output will be "Derived class show()" due to the use of the virtual keyword in the base class.

## The final Keyword
The final keyword is used in C++ to indicate that a class cannot be inherited from or that a virtual function cannot be overridden in derived classes. This helps to prevent further derivations or modifications, which can be useful to maintain specific behavior and integrity.

Example:
### Final Class:
```cpp
class Base {
public:
    virtual void show() {
        std::cout << "Base class show()" << std::endl;
    }
};

class Derived final : public Base { // Cannot inherit from Derived
public:
    void show() override {
        std::cout << "Derived class show()" << std::endl;
    }
};
// class AnotherDerived : public Derived {} // Error: Cannot derive from final class
```
### Final Method:
```cpp
class Base {
public:
    virtual void sound() final { // sound() cannot be overridden
        std::cout << "Base sound!" << std::endl;
    }
};

class Derived : public Base {
public:
    // void sound() override { } // Error: cannot override final function
};
```
In this example, the final keyword is used to prevent further inheritance from the Derived class or to prevent overriding the sound method in any derived classes.

# Lesson 7: Static Members in Classes

## Static Members

Static members are shared across all instances of a class. They can be either static data members or static member functions.

**Static Data Member:** A variable that is shared among all instances of a class. In our example, count is a static member that keeps track of how many objects of Counter and its derived classes are created.

**Static Member Function:** A function that can be called on the class itself rather than on instances. It can access static members but not non-static members.

```cpp
class Counter {
protected:
    static int count; // Static data member

public:
    static void displayCount(); // Static member function
};
```

## Calling Static Functions
Static functions in the base class can be called without creating an instance of that class. You can also call them using an instance, but this is considered less clear.

```cpp
Counter::displayCount(); // Recommended way to call static function
Counter c; 
c.displayCount(); // Allowed, but not recommended
```

## Constructor Behavior with Inheritance

When a derived class object is created, the constructor of the base class is automatically invoked before executing the derived class constructor. This ensures that the base class is properly initialized.

```cpp
Counter c1;      // Calls the Counter constructor
Counter2 c2;     // Calls the Counter constructor again during Counter2 construction
```

## Static Scope and Instance Independence
Static members, including static functions, are shared across all instances of the class. This behavior allows them to function independently of any specific object and maintains a consistent state across all instances.

**Practical Implication:**
Creating an instance of Counter increments the static count. Creating an instance of Counter2 also increments the same count because it inherits from Counter.

# Lesson 8: Private Inheritance

Private inheritance is a key concept in C++, often used to restrict access to the members of a base class from outside the scope of the derived class. Below, we'll explore private inheritance in more detail, including its mechanics, use cases, and implications.

## Characteristics of Private Inheritance
### Visibility:

- When a class inherits from another class with private inheritance (e.g., class Derived : private Base), all public and protected members of the base class become private members of the derived class.
- This means that those inherited members cannot be accessed directly by objects of the derived class outside of its member functions.
### Access Levels:

- The derived class can access the inherited members within its member functions but cannot expose them to the outside world.
- This means that while you can call base class functions from within derived class methods, you cannot call them from outside the derived class or through its objects.

# Lesson 9: Protected Inheritance
## Overview
Protected inheritance is a type of inheritance in C++ where the access level for the base class members changes when they are inherited by a derived class. Specifically, public and protected members of the base class become protected members of the derived class.

## Key Points
- When a derived class inherits from a base class using protected inheritance, all public and protected members from the base class become protected in the derived class.
- Members inherited through protected inheritance are accessible from within the derived class and by further derived classes but are not accessible through objects of the derived class and are hidden from users of the derived class.

# Lesson 10: Multiple Inheritance

Multiple inheritance in C++ is a feature that allows a class (derived class) to inherit characteristics (attributes and methods) from more than one base class. This can be useful when you want to create a class that combines functionalities from various sources. However, it also introduces certain complexities that developers need to be cautious about, such as ambiguity and the diamond problem.

1. Syntax:
The syntax for multiple inheritance is straightforward. You can simply list the base classes separated by commas in the class declaration.
```cpp
class Derived : public Base1, public Base2 {
};
```
2. Derived Class Access:
In a derived class from multiple base classes, the derived class has access to all public and protected members of the base classes.

3. Constructor Execution:
When a derived class object is created, the constructors for the base classes are called in the order they are listed in the inheritance declaration.

## Ambiguity in Multiple Inheritance
While multiple inheritance can be powerful, it can also lead to ambiguity when two base classes have methods or attributes with the same name. Consider this example:

```cpp
    class A {
public:
    void show() {
        cout << "Class A\n";
    }
};

class B {
public:
    void show() {
        cout << "Class B\n";
    }
};

// Derived class from both A and B
class C : public A, public B {
};

int main() {
    C obj;

    // obj.show(); // Error: Ambiguous call to show()

    // To resolve ambiguity, you can specify which base class's method to call:
    obj.A::show(); // Calls show() from class A
    obj.B::show(); // Calls show() from class B

    return 0;
}
```

## The Diamond Problem
The diamond problem is a specific case of ambiguity that arises when a class inherits from two classes that both inherit from a common base class. This can create issues with member access and lead to multiple instances of the base class.

Here's a quick diagram of the diamond structure:

```txt
          A
         / \
        B   C
         \ /
          D
```

## Virtual Inheritance

Virtual inheritance is a feature in C++ that addresses the "diamond problem" that occurs with multiple inheritance. The diamond problem arises when a class inherits from two classes that both derive from a common base class. This can lead to ambiguity regarding which instance of the base class should be accessed or even result in multiple copies of the base class being created.

By using virtual inheritance, you ensure that only one instance of the common base class is created, regardless of how many classes inherit from it, thereby eliminating ambiguity.

Key Features of Virtual Inheritance
1. **Single Instance:** When a class uses virtual inheritance, it reduces multiple copies of the base class, ensuring that there is only one instance.
2. **Constructor Call:** The constructor of the virtually inherited base class is called only once, even if it is inherited through multiple paths.
3. **Access Control:** It preserves the access control of the base class members (public, protected, private).

```cpp
#include <iostream>
using namespace std;

class A { // Base class
public:
    void display() {
        cout << "This is class A\n";
    }
};

class B : virtual public A { // Virtual inheritance from A
};

class C : virtual public A { // Virtual inheritance from A
};

class D : public B, public C { // D inherits from B and C
};

int main() {
    D d;
    d.display(); // Calls method from class A, no ambiguity

    return 0;
}
```

# Destructor

A destructor is a special member function that is automatically called when an object is deleted from memory. The main purpose of a destructor is to release resources that the object may have acquired during its lifetime, such as dynamically allocated memory, file handles, or network connections.

## Key Features of Destructors in C++

1. **Syntax:** The destructor for a class is defined using the tilde (~) followed by the class name. It does not take any parameters and does not return a value.

```cpp
class MyClass {
public:
    ~MyClass(); // Destructor declaration
};
```

2. **Automatic Invocation:** Destructors are invoked automatically when an object goes out of scope (for objects with automatic storage) or when the delete operator is called on an object (for dynamically allocated objects).

3. **Single Destructor:** A class can have only one destructor. You cannot overload destructors based on parameters.

4. **Virtual Destructors:** If a class is intended to be used as a base class, it is a good practice to declare its destructor as virtual. This ensures that the destructor of the derived class is called correctly when an object is deleted via a base class pointer.

## Order of Destruction: 
The order of destruction follows the reverse of construction:
- Members of the derived class are destroyed first.
- Then the destructor of the derived class is called.
- Finally, the destructor of the base class is called.


# Abstract Class

An abstract class in C++ is a class that cannot be instantiated on its own and is intended to be used as a base class for other derived classes. The main purpose of using an abstract class is to define an interface that derived classes must implement, enforcing a specific contract for behavior without providing a concrete implementation in the abstract class itself.

## Characteristics of Abstract Classes

1. Contains Pure Virtual Functions: An abstract class declares at least one pure virtual function. A pure virtual function is declared by assigning = 0 in its declaration. This signals that derived classes must provide an implementation for this function.

```cpp
class AbstractClass {
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function
};
```

2. **Cannot be Instantiated:** You cannot create objects of an abstract class directly. This prevents the creation of instances that do not have complete functionality.

3. **Derived Classes:** Any class that derives from an abstract class must implement all of its pure virtual functions to be instantiated. If a derived class does not implement all the pure virtual functions, it, too, becomes an abstract class.

4. **Virtual Destructor:** If you intend to use the base class polymorphically (i.e., pointer/reference to the base class pointing to derived class objects), it is a good practice to declare a virtual destructor in the abstract class.

## Practical Benefits of Using Abstract Classes

- **Enforcing a Contract:** An abstract class defines a set of methods that any derived class must implement, ensuring that certain behaviors are guaranteed to be present.
- **Code Reusability:** You can implement shared functionality in the abstract class while requiring derived classes to provide specialized behavior.
- **Polymorphism:** Abstract classes enable polymorphic behavior, allowing you to work with derived classes through base class pointers or references.

# Lesson 13: Operator Overloading

The `operator` keyword allows developers to define how operators work with user-defined types (classes). By overloading operators, you can enable intuitive operations on objects, allowing them to behave similarly to built-in types.

## Operator Overloading with the operator Keyword

When you overload an operator, you define a function that specifies how the operator behaves when applied to instances of your class. The syntax for defining an overloaded operator uses the operator keyword followed by the operator symbol.

## Syntax
The general syntax for operator overloading is as follows:
```cpp
ReturnType operator OperatorSymbol (Parameters) {
    // Implementation
}
```

# Lesson 14: Function Polymorphism

Polymorphism is a key feature of object-oriented programming in C++. It allows for functions to operate on different data types and to invoke the correct function based on the type of object passed to it. There are two main types of polymorphism in C++: compile-time (static) polymorphism and run-time (dynamic) polymorphism.

## Types of Polymorphism

### Compile-time Polymorphism

This type of polymorphism is resolved during compilation. It can be achieved using:

Function Overloading: Multiple functions with the same name but different parameters (number, type, or order).
```cpp
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};
```

### Run-time Polymorphism

Run-time polymorphism is resolved during program execution and is typically implemented using inheritance and virtual functions.

Inheritance and Virtual Functions: The base class function is declared as virtual, allowing derived classes to override this function.

```cpp
class Base {
public:
    virtual void display() {
        std::cout << "Display Base" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "Display Derived" << std::endl;
    }
};

void show(Base* obj) {
    obj->display(); // Calls the appropriate display method
}

int main() {
    Base b;
    Derived d;

    show(&b); // Output: Display Base
    show(&d); // Output: Display Derived
    return 0;
}
```

## Key Points

*Function Overloading* enables different functions with the same name to exist within the same scope, providing flexibility in function usage.
*Virtual Functions*, when used with inheritance, allow a function to behave differently depending on the object that invokes it, providing the foundation for polymorphism in object-oriented design.

# Lesson 15: Parameters by reference

## Passing by Value

When you pass a parameter by value, a copy of the argument is made. Modifications made to the parameter inside the function do not affect the original argument.

```cpp
#include <iostream>

void increment(int num) {
    num++; // Increment the copy
    std::cout << "Inside increment (by value): " << num << std::endl;
}

int main() {
    int value = 5;
    std::cout << "Before increment (by value): " << value << std::endl;
    increment(value);
    std::cout << "After increment (by value): " << value << std::endl;
    return 0;
    /* output:
    Before increment (by value): 5
    Inside increment (by value): 6
    After increment (by value): 5
    */
}
```

## Passing by Reference

When you pass a parameter by reference, you pass the actual memory location of the argument. This means that modifications made to the parameter inside the function affect the original argument.

```cpp
#include <iostream>

void increment(int &num) {
    num++; // Increment the original variable
    std::cout << "Inside increment (by reference): " << num << std::endl;
}

int main() {
    int value = 5;
    std::cout << "Before increment (by reference): " << value << std::endl;
    increment(value);
    std::cout << "After increment (by reference): " << value << std::endl;
    return 0;
}
/*
Before increment (by reference): 5
Inside increment (by reference): 6
After increment (by reference): 6
*/
```

## Summary of Differences

| Feature	| Passing by Value	| Passing by Reference |
| -------   | ----------------  | -------------------- |
| Copy Creation	| Creates a new copy | No copy created (works on original) |
| Modifications	 | Do not affect the original |	Affect the original |
| Performance |	Slower for large objects (due to copying) | Generally faster (no copying) |
| Syntax | void functionName(Type param) | void functionName(Type &param) |

# Lesson 16: Lambda Functions

Lambda functions in C++ are a powerful feature introduced in C++11 that allow you to define anonymous functions or function objects at runtime. They are primarily used for short, inline functions that are often passed as arguments to algorithms, callbacks, or thread execution, among other places. 

## Syntax

```cpp
[ capture ] ( parameters ) -> return_type {
    // function body
}
```
* **Capture**: The capture clause defines which variables from the surrounding scope are accessible inside the lambda. You can specify captures by value or by reference.
* **Parameters**: Just like regular functions, you can define parameters, which can be optional.
* **Return type**: This is optional and can often be inferred by the compiler.
* **Function body**: Contains the implementation of the function.

## Capturing Variables

You can capture variables from the surrounding scope using the capture clause:

1. **By Value**: Copies the variable, read only.
2. **By Reference**: Accesses the original variable and can be modified.

### Capture Modes

* **No capture**: []
* **Capture by value**: [x] (makes a copy of variable x).
* **Capture by reference**: [&x] (uses the original variable x).
* **All by value**: [=] (captures all variables from the surrounding scope by value).
* **All by reference**: [&] (captures all variables by reference).
* **Mixed capture**: Combination of the above, e.g., [x, &y] (captures x by value and y by reference).

## Key Features of Lambda Functions

* **Anonymous**: Lambda functions do not require a name, which makes them especially useful for quick operations that are only needed once or in a limited scope.
* **Capture**: Lambda functions can capture variables from their surrounding scope, allowing you to use local variables within the lambda body. Captures can be done by value or by reference.
* **Parameters and Return Type**: Similar to regular functions, lambda functions can take parameters and specify a return type, although the return type can often be omitted as the compiler can deduce it.

# Lesson 17: Basics of Threads

## What are Threads?

In computing, a thread is the smallest unit of processing that can be scheduled by the operating system. Threads allow multiple sequences of instructions (threads of execution) to run concurrently within a single process. This means that a program can perform multiple tasks at the same time, which can improve the overall efficiency and responsiveness of applications, especially in modern multi-core processors.

## Key Concepts
* **Concurrency**: Threads enable a program to structure its operations to do multiple tasks at the same time, enhancing parallelism.
* **Multithreading**: The programming technique of creating and managing multiple threads within a single application.
* **Main Thread**: The default thread that runs when a program starts. Additional threads can be created to perform other tasks concurrently.
Basic Theory

When multiple threads share the same memory space, they can communicate more easily but must also sync access to shared resources to avoid conflicts and data corruption. This synchronization can be managed using mutexes, semaphores, or other concurrency control mechanisms.

## Thread Lifecycle
* **New**: The thread is created but not yet started.
* **Runnable**: The thread is ready to run but the scheduler has not selected it to run.
* **Blocked**: The thread is waiting for an event (like I/O) to occur.
* **Terminated**: The thread has finished executing.

## How to Run a Thread in C++
To create and run a thread in C++, you typically use the <thread> library, which provides an easy interface for creating and managing threads.

* Example Code
Here’s a simple example demonstrating how to create and run a thread in C++:

```cpp
#include <iostream>
#include <thread>

// Function to be executed by the thread
void threadFunction() {
    std::cout << "Hello from the thread!" << std::endl;
}

int main() {
    // Create a thread that runs the threadFunction
    std::thread myThread(threadFunction);

    // Check if the thread is joinable before joining
    if (myThread.joinable()) {
        myThread.join(); // Wait for the thread to finish
    }

    std::cout << "Thread has finished execution." << std::endl;
    return 0;
}
```
**Explanation of Key Functions**
* std::thread: This is the class that allows you to create a new thread. The thread is started by passing a function (or callable object) to the constructor.
* join(): This function blocks the current thread (usually the main thread) until the thread represented by myThread finishes execution. It's a way to ensure that your main thread waits for the child thread to complete.
* joinable(): This function checks if the thread object is associated with a thread of execution. If a thread is created but not yet joined or detached, it's joinable.

## Joinable Threads
A thread is considered joinable if it has been successfully started but has not yet been joined or detached. Once a thread has terminated, it can no longer be joined; you can't join a thread more than once, nor can you join a thread that has been detached.

# Lesson 18: Race Condition and Mutex

A mutex (short for "mutual exclusion") is a synchronization primitive that prevents multiple threads from accessing a shared resource simultaneously. This is crucial in multithreaded programming to avoid a situation called a race condition.

## Understanding Race Condition
A race condition occurs when multiple threads or processes access shared data concurrently, and at least one of the accesses is a write. This can lead to unpredictable results, bugs, or data corruption. For example, consider a shared counter that multiple threads are incrementing. If two threads read the counter's value simultaneously, they might both increment it based on the same initial value, resulting in a final count that is lower than expected.

Example of Race Condition:

* Thread A reads the value of the counter (let's say it’s 5).
* Thread B also reads the counter while A hasn't finished writing back.
* A increments it (now it’s 6) and writes it back.
* B increments the original value (turning it into 6) and writes that back.
* As a result, the final value of the counter is 6 instead of the expected 7.

## How Mutex Solves Race Conditions
A mutex allows only one thread to access a resource (like a variable or file) at any given time. When a thread locks a mutex, other threads that try to lock the same mutex are blocked until the mutex is unlocked. By serializing access to shared resources, mutexes help prevent race conditions and ensure data consistency.

## Creating a Mutex in C++
In C++, you can create a mutex using the std::mutex class from the <mutex> header. Here’s how to create a mutex:

```cpp
#include <mutex>

std::mutex mtx; // Declare a mutex
```

## Locking and Unlocking Resources
There are several methods for locking and unlocking a mutex, including:

1. Manual Locking with lock() and unlock():

You can explicitly call lock() to acquire the lock and unlock() to release it. This is the basic way of using a mutex.
```cpp
mtx.lock(); // Lock the mutex
// Critical section
mtx.unlock(); // Unlock the mutex
 Caution: You must ensure that unlock() is always called, even if an exception occurs, to avoid deadlocks.
```

2. Using std::lock_guard:

std::lock_guard provides a safer way to manage mutex locking. It locks the mutex upon creation and automatically unlocks it when it goes out of scope (RAII pattern).
```cpp
{
    std::lock_guard<std::mutex> lock(mtx); // Locking the mutex
    // Critical section
} // Automatically unlocks when lock goes out of scope
```
3. Using std::unique_lock:

std::unique_lock provides more flexibility than lock_guard. It can be locked and unlocked manually, allows deferred locking, and is compatible with condition variables.
```cpp
std::unique_lock<std::mutex> lock(mtx); // Lock the mutex
// Critical section
lock.unlock(); // Manual unlock if needed
 Note: If lock is destroyed without an explicit unlock, the mutex will be unlocked automatically.
```

## Differences Between lock_guard and unique_lock
| Feature	| std::lock_guard	| std::unique_lock |
| -------   | ----------------  | -------------------- |
| Locking Behavior	| Locks upon construction; unlocks on destruction |	Flexible; can be locked and unlocked manually |
| Ownership	| Does not allow transfer of ownership	| Ownership can be transferred; supports move semantics |
| Locking Options |	No deferred locking	| Supports deferred locking (std::defer_lock) |
| Condition Variable Compatibility	| Limited support	| Fully compatible with condition variables |
| Complexity	| Simple and straightforward	| More complex due to added functionality |

# Lesson 19: Linked List Overview

A linked list is a dynamic data structure consisting of nodes, where each node contains data and a pointer to the next node. Unlike arrays, linked lists do not require contiguous memory, allowing efficient insertions and deletions at arbitrary positions. This implementation includes common operations such as inserting at the head, tail, or specific positions, deleting nodes, checking if the list is empty, and printing all elements. Proper memory management is handled with destructors and copy operations to ensure no memory leaks or dangling pointers. Linked lists are fundamental for understanding more complex data structures and are widely used in various applications like stacks, queues, and associative data structures.

<p align="left">
<img src="https://private-user-images.githubusercontent.com/57189129/490507508-37e3115a-3542-4ff7-8676-ad4671347adb.png?jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3NTgxMDc2MDIsIm5iZiI6MTc1ODEwNzMwMiwicGF0aCI6Ii81NzE4OTEyOS80OTA1MDc1MDgtMzdlMzExNWEtMzU0Mi00ZmY3LTg2NzYtYWQ0NjcxMzQ3YWRiLnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNTA5MTclMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjUwOTE3VDExMDgyMlomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPThiZTI5OWI1MDM1MjIxMjUzNzA4NWQ1MTllNDY3MTFjN2JkZWNiNThmNGVhMjI5MzM3YzI5ZWM3YWU2YmNkODImWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0In0.xU8-HRwxZhRcIx0SDSAS49lpHeEo8E3U2sp6wFjlz3I" alt="drawing" width="812"/> 
</p>

# Lesson 20: Templates in C++
Templates in C++ enable writing generic and reusable code that works with any data type. They allow you to define functions and classes that are independent of specific types, making your code more flexible and reducing redundancy.

## Function Templates:
Define a generic function that can operate on different data types.
Example:  

```cpp
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}
```

## Class Templates:
Define a template class that can store or manipulate various data types.
Example:  

```cpp
template <typename T>
class MyContainer {
private:
    T value;
public:
    void set(T val) { value = val; }
    T get() { return value; }
};
```

## Compilation Process for Templates
### Code Definition:
Templates are usually defined in header files. When the compiler encounters a template class or function, it doesn't generate code immediately.

### Instantiation:
The actual code (called instantiation) is generated only when you create an object or call a function of a specific type, e.g., MyContainer<int> or getMax<double>.
The compiler produces concrete versions of these templates for the specific types used.

### Translation Units:
Since templates are often defined in header files included in multiple source files, the compiler generates the instantiated code in each compilation unit that uses them.
To avoid multiple definitions, the typical approach is to put the entire template implementation in header files, or explicitly instantiate templates in one source file.

# Lesson 21: Logical and Bitwise Operators

## Logical Operators
Logical operators are used to combine boolean expressions and evaluate to a boolean result (true or false):

* && (AND): Returns true if both operands are true.
Example: (a > 0) && (b < 10)
* || (OR): Returns true if at least one operand is true.
Example: (a > 0) || (b < 10)
* ! (NOT): Inverts the boolean value.
Example: !(a > 0) (true if a is not greater than 0)

## Bitwise Operators
Bitwise operators operate directly on the individual bits of integral types (like int, char, etc.):

* `&` (AND): Performs AND on each bit.
Example: 5 & 3 (binary 0101 & 0011 = 0001 which is 1)
* `|` (OR): Performs OR on each bit.
Example: 5 | 3 (binary 0101 | 0011 = 0111 which is 7)
* `^` (XOR): Performs XOR on each bit.
Example: 5 ^ 3 (binary 0101 ^ 0011 = 0110 which is 6)
* `~` (COMPLEMENT): Flips all bits in the operand.
Example: ~5 (binary 0101 becomes 1010 in binary, which is -6 in signed integers)
* `<<` (Left shift): Shifts bits to the left, filling with zeros.
Example: 3 << 2 (binary 0011 becomes 1100 which is 12)
* `>>` (Right shift): Shifts bits to the right.
Example: 12 >> 2 (binary 1100 becomes 0011 which is 3)
Note: Bitwise operators are typically used for low-level programming, flags, and performance-critical code.

## std::bitset in C++
### Overview
std::bitset is a container that manages a fixed-size sequence of bits. It provides a convenient way to work with individual bits efficiently, using high-level operations inspired by bitwise operators.

### Common Features
Fixed size specified at compile time.
Supports bitwise operations (AND, OR, XOR, NOT).
Allows setting, resetting, toggling, and testing individual bits.
Can be converted to and from strings for easy display and input.

### Basic Usage
```cpp
Copy
#include <bitset>
#include <iostream>

int main() {
    std::bitset<8> bits; // Creates an 8-bit bitset initialized to 0
    bits.set(2);          // Set bit at position 2 (0-based from the right)
    bits.flip(4);         // Toggle bit at position 4
    std::cout << bits << std::endl; // Output: 00010100

    // Check if a specific bit is set
    if (bits.test(2)) {
        std::cout << "Bit 2 is set." << std::endl;
    }

    // Convert to string
    std::string bitString = bits.to_string();
    std::cout << "Bitset as string: " << bitString << std::endl;

    return 0;
}
```

### Common Methods
* set(pos): Set the bit at position pos to 1.
* reset(pos): Reset the bit at position pos to 0.
* flip(pos): Toggle the bit at position pos.
* test(pos): Return true if bit at pos is 1.
* to_string(): Convert the bitset to a string representation.
* count(): Return the number of bits set to 1.
* size(): Return the total size of the bitset.

# Lesson 22: Smart Pointers

Smart pointers are objects in C++ that manage the lifetime of dynamically allocated memory automatically, helping to prevent memory leaks and dangling pointers. They resemble regular pointers but handle resource deallocation when the smart pointer goes out of scope.

## Types of Smart Pointers:
### std::unique_ptr
Owns the resource exclusively.
Cannot be copied, only moved.
Automatically deletes the managed object when it goes out of scope.
Use case: Unique ownership, when only one part of your program should own the resource.
Example:

```cpp
#include <memory>
std::unique_ptr<int> ptr = std::make_unique<int>(10);
```
### std::shared_ptr
Allows multiple owners of the same resource.
Uses reference counting to keep track of how many shared_ptrs point to the same object.
Deletes the object when the last shared_ptr goes out of scope.
Use case: Shared ownership scenarios.
Example:

```cpp
#include <memory>
std::shared_ptr<int> ptr1 = std::make_shared<int>(20);
std::shared_ptr<int> ptr2 = ptr1; // both share ownership
```

# Lesson 23: Maps

In C++, maps are part of the Standard Template Library (STL) and are used to store key-value pairs in an ordered manner. They are implemented as balanced binary search trees, typically red-black trees, which means they automatically sort the elements based on the keys.

## Key features of std::map:

* Stores pairs of keys and values.
* Keys are unique; no duplicate keys are allowed.
* Elements are stored in sorted order according to the key.
* Provides efficient lookup, insertion, and deletion operations (logarithmic time complexity).

```cpp
#include <map>
#include <iostream>

int main() {
    std::map<int, std::string> myMap;

    // Insert elements
    myMap[1] = "Apple";
    myMap[2] = "Banana";

    // Access elements
    std::cout << myMap[1] << std::endl; // Output: Apple

    // Iterate over the map
    for (auto const &pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
```

* insert() requires an existing object (like a pair).
* emplace() constructs the object in-place, potentially more efficient.
* find() to search for a key.
* erase() to remove elements.
* Access via operator[] or at().
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

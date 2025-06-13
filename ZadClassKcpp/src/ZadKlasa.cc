#include "ZadKlasa.h"
#include <iostream>

void ZadKlasa::execute() {
    std::cout << "\n=== Zadanie 5.1 - Klasa ===\n";
    
    SimpleClass obj1;
    SimpleClass obj2(42);
    
    obj1.publicMethod();
    obj1.inlineMethod();
}

// Fix initialization order (protectedVar before privateVar)
ZadKlasa::SimpleClass::SimpleClass() : protectedVar(0), privateVar(0) {
    std::cout << "Default constructor called\n";
}

// Fix initialization order (protectedVar before privateVar)
ZadKlasa::SimpleClass::SimpleClass(int val) : protectedVar(val), privateVar(val) {
    std::cout << "Parameterized constructor called with " << val << "\n";
}

ZadKlasa::SimpleClass::~SimpleClass() {
    std::cout << "Destructor called\n";
}

void ZadKlasa::SimpleClass::publicMethod() {
    std::cout << "Public method called\n";
    privateMethod();
}

void ZadKlasa::SimpleClass::protectedMethod() {
    std::cout << "Protected method called\n";
}

void ZadKlasa::SimpleClass::privateMethod() {
    std::cout << "Private method called\n";
}
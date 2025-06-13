#include "ZadOperatory.h"
#include <iostream>

void ZadOperatory::execute() {
    std::cout << "\n=== Zadanie 3.12 - Operatory ===\n";
    operatorExamples();
    assignmentOperators();
}

void ZadOperatory::operatorExamples() {
    int a = 10, b = 3;
    std::cout << "Arithmetic operators:\n";
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
}

void ZadOperatory::assignmentOperators() {
    int x = 5;
    std::cout << "\nAssignment operators:\n";
    std::cout << "Original x: " << x << std::endl;
    
    x += 3; std::cout << "x += 3: " << x << std::endl;
    x -= 2; std::cout << "x -= 2: " << x << std::endl;
    x *= 4; std::cout << "x *= 4: " << x << std::endl;
}

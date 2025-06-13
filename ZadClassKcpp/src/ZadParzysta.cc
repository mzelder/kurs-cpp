#include "ZadParzysta.h"
#include <iostream>

void ZadParzysta::execute() {
    std::cout << "\n=== Zadanie 4.7 - Parzysta/Nieparzysta ===\n";
    
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    std::cout << "Bitwise check: " << (isEvenBitwise(num) ? "Even" : "Odd") << std::endl;
    std::cout << "Modulo check: " << (isEvenModulo(num) ? "Even" : "Odd") << std::endl;
    std::cout << "Conditional check: " << (isEvenConditional(num) ? "Even" : "Odd") << std::endl;
}

bool ZadParzysta::isEvenBitwise(int num) {
    return !(num & 1);
}

bool ZadParzysta::isEvenModulo(int num) {
    return (num % 2) == 0;
}

bool ZadParzysta::isEvenConditional(int num) {
    return (num % 2 == 0) ? true : false;
}

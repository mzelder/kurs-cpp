#include "ZadPetle.h"
#include <iostream>

void ZadPetle::execute() {
    std::cout << "\n=== Zadanie 4.9 - Petle ===\n";
    loopExamples();
}

void ZadPetle::loopExamples() {
    std::cout << "Loop examples:\n";
    whileLoop();
    doWhileLoop();
    forLoop();
}

void ZadPetle::whileLoop() {
    std::cout << "\nWhile loop (i++): ";
    int i = 0;
    while (i < 5) {
        std::cout << i++ << " ";
    }
    
    std::cout << "\nWhile loop (++i): ";
    i = 0;
    while (i < 5) {
        std::cout << ++i << " ";
    }
    std::cout << std::endl;
}

void ZadPetle::doWhileLoop() {
    std::cout << "\nDo-while loop (i++): ";
    int i = 0;
    do {
        std::cout << i++ << " ";
    } while (i < 5);
    
    std::cout << "\nDo-while loop (++i): ";
    i = 0;
    do {
        std::cout << ++i << " ";
    } while (i < 5);
    std::cout << std::endl;
}

void ZadPetle::forLoop() {
    std::cout << "\nFor loop: ";
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        if (i == 4) break;
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

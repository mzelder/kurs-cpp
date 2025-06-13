#include "ZadFigura.h"
#include <iostream>

void ZadFigura::execute() {
    std::cout << "\n=== Zadanie 5.6 - Metody abstrakcyjne (Figury) ===\n";
    
    Kwadrat k(5);
    Kolo kol(3);
    
    std::cout << "Kwadrat:\n";
    std::cout << "Obwod: " << k.obliczObwod() << "\n";
    std::cout << "Pole: " << k.obliczPole() << "\n\n";
    
    std::cout << "Kolo:\n";
    std::cout << "Obwod: " << kol.obliczObwod() << "\n";
    std::cout << "Pole: " << kol.obliczPole() << "\n";
    std::cout << "Dystans dla X=10: " << kol.dystans(10) << "\n";
}

#include "ZadPrzeciazanie.h"
#include <iostream>

void ZadPrzeciazanie::execute() {
    std::cout << "\n=== Zadanie 2.3-2.5 - Przeciazanie ===\n";
    
    std::cout << "add(5, 3): " << add(5, 3) << std::endl;
    std::cout << "add(3.14, 2.71): " << add(3.14, 2.71) << std::endl;
    std::cout << "add(\"Hello\", \"World\"): " << add("Hello", "World") << std::endl;
    
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3 = p1 + p2;
    std::cout << "Point addition: (" << p1.x << "," << p1.y << ") + (" 
              << p2.x << "," << p2.y << ") = (" << p3.x << "," << p3.y << ")\n";
}

int ZadPrzeciazanie::add(int a, int b) {
    return a + b;
}

double ZadPrzeciazanie::add(double a, double b) {
    return a + b;
}

std::string ZadPrzeciazanie::add(const std::string& a, const std::string& b) {
    return a + b;
}

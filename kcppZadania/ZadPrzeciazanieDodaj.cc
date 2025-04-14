#include <iostream>
#include <string>

int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double a, double b) {
    return a + b;
}

std::string dodaj(const std::string& a, const std::string& b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    double d1 = 3.14, d2 = 2.71;
    std::string s1 = "Hello, ", s2 = "world!";

    std::cout << "Suma int: " << dodaj(x, y) << std::endl;
    std::cout << "Suma double: " << dodaj(d1, d2) << std::endl;
    std::cout << "Konkatenacja stringów: " << dodaj(s1, s2) << std::endl;

    return 0;
}

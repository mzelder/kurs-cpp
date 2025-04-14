#include <iostream>
#include <cmath>

int potega(int base, int exponent) {
    return static_cast<int>(pow(base, exponent));
}

double potega(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    int a = 2, b = 3;
    double x = 2.5;
    int exp = 3;

    std::cout << "Potega int: " << potega(a, b) << std::endl;
    std::cout << "Potega double: " << potega(x, exp) << std::endl;

    return 0;
}

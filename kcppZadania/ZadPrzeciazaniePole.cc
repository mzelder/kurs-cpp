#include <iostream>
#include <cmath>

double pole(double bok) {
    std::cout << "Obliczam pole kwadratu...\n";
    return bok * bok;
}

double pole(double bok1, double bok2) {
    std::cout << "Obliczam pole prostokąta...\n";
    return bok1 * bok2;
}

double pole(int promien) {
    std::cout << "Obliczam pole koła...\n";
    return M_PI * promien * promien;
}

int main() {
    double bokKwadratu = 4.0;
    double bok1 = 5.0, bok2 = 3.0;
    int promienKola = 2;

    std::cout << "Pole kwadratu: " << pole(bokKwadratu) << std::endl;
    std::cout << "Pole prostokąta: " << pole(bok1, bok2) << std::endl;
    std::cout << "Pole koła: " << pole(promienKola) << std::endl;

    return 0;
}

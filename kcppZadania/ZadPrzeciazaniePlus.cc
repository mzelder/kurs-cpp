#include <iostream>

class Punkt {
private:
    double x, y;

public:
    Punkt(double x = 0, double y = 0) : x(x), y(y) {}

    Punkt operator+(const Punkt& other) const {
        return Punkt(x + other.x, y + other.y);
    }

    void wyswietl() const {
        std::cout << "Punkt(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Punkt p1(2.5, 3.5);
    Punkt p2(1.5, 4.0);
    Punkt p3 = p1 + p2;

    std::cout << "Punkt 1: ";
    p1.wyswietl();
    std::cout << "Punkt 2: ";
    p2.wyswietl();
    std::cout << "Suma punktów: ";
    p3.wyswietl();

    return 0;
}

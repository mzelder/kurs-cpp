#include <iostream>

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    std::cout << "Przed zamianą: x = " << x << ", y = " << y << std::endl;

    zamien(&x, &y);

    std::cout << "Po zamianie: x = " << x << ", y = " << y << std::endl;

    return 0;
}

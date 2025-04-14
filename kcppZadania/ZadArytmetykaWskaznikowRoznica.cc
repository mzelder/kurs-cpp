#include <iostream>

int main() {
    int tablica[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* ptr1 = &tablica[3];
    int* ptr2 = &tablica[8];

    int roznica = ptr2 - ptr1;

    std::cout << "Różnica między wskaźnikami: " << roznica << std::endl;

    return 0;
}

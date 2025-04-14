#include <iostream>

void kopiujTablice(int* zrodlo, int* cel, int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        *(cel + i) = *(zrodlo + i);
    }
}

int main() {
    int tablica1[5] = {1, 2, 3, 4, 5};
    int tablica2[5];

    kopiujTablice(tablica1, tablica2, 5);

    std::cout << "Tablica 2 po kopiowaniu: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << tablica2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

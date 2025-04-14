#include <iostream>

void przesun(int* tablica, int rozmiar) {
    int ostatni = *(tablica + rozmiar - 1);
    for (int i = rozmiar - 1; i > 0; --i) {
        *(tablica + i) = *(tablica + i - 1);
    }
    *tablica = ostatni;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    std::cout << "Tablica przed przesunięciem: ";
    for (int i = 0; i < rozmiar; ++i) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;

    przesun(tablica, rozmiar);

    std::cout << "Tablica po przesunięciu: ";
    for (int i = 0; i < rozmiar; ++i) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

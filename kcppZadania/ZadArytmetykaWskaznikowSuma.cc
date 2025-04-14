#include <iostream>

int suma(int* tablica, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; ++i) {
        suma += *(tablica + i);
    }
    return suma;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int wynik = suma(tablica, rozmiar);

    std::cout << "Suma elementów tablicy: " << wynik << std::endl;

    return 0;
}

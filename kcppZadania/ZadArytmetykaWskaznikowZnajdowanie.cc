#include <iostream>

int* maxElement(int* tablica, int rozmiar) {
    int* max = tablica;
    for (int i = 1; i < rozmiar; ++i) {
        if (*(tablica + i) > *max) {
            max = tablica + i;
        }
    }
    return max;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int* max = maxElement(tablica, rozmiar);

    std::cout << "Największy element w tablicy: " << *max << std::endl;

    return 0;
}

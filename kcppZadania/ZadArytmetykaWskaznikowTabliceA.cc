#include <iostream>

int main() {
    const int SIZE = 10;
    int tablica[SIZE];

    // Wypełnianie tablicy wartościami od 1 do 10
    int* ptr = tablica;
    for (int i = 0; i < SIZE; ++i) {
        *(ptr + i) = i + 1;
    }

    // Obliczanie sumy elementów tablicy
    int suma = 0;
    for (int* p = tablica; p < tablica + SIZE; ++p) {
        suma += *p;
    }
    std::cout << "Suma elementów tablicy: " << suma << std::endl;

    // Znajdowanie maksymalnego elementu
    int max = *tablica;
    for (int* p = tablica + 1; p < tablica + SIZE; ++p) {
        if (*p > max) {
            max = *p;
        }
    }
    std::cout << "Maksymalny element tablicy: " << max << std::endl;

    // Odwracanie tablicy przy użyciu wskaźników
    int* start = tablica;
    int* end = tablica + SIZE - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }

    // Wyświetlanie odwróconej tablicy
    std::cout << "Tablica po odwróceniu: ";
    for (int* p = tablica; p < tablica + SIZE; ++p) {
        std::cout << *p << " ";
    }
    std::cout << std::endl;

    return 0;
}

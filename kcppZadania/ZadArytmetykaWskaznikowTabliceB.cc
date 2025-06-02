#include <iostream>

int main() {
    const int SIZE = 5;
    double tab1[SIZE];
    double tab2[SIZE];
    double tab3[SIZE];

    // Wczytywanie wartości do pierwszej tablicy
    std::cout << "Podaj " << SIZE << " liczb zmiennoprzecinkowych:" << std::endl;
    for (double* p = tab1; p < tab1 + SIZE; ++p) {
        std::cout << "Liczba: ";
        std::cin >> *p;
    }

    // Wypełnianie drugiej tablicy wartościami z pierwszej * 2
    double* p1 = tab1;
    double* p2 = tab2;
    while (p1 < tab1 + SIZE) {
        *p2 = *p1 * 2;
        ++p1;
        ++p2;
    }

    // Tworzenie trzeciej tablicy jako suma elementów z tab1 i tab2
    double* ptab1 = tab1;
    double* ptab2 = tab2;
    double* ptab3 = tab3;
    while (ptab1 < tab1 + SIZE) {
        *ptab3 = *ptab1 + *ptab2;
        ++ptab1;
        ++ptab2;
        ++ptab3;
    }

    // Wyświetlanie zawartości wszystkich trzech tablic
    std::cout << "\nZawartość tablic:\n";

    std::cout << "Tablica 1: ";
    for (double* p = tab1; p < tab1 + SIZE; ++p)
        std::cout << *p << " ";
    std::cout << std::endl;

    std::cout << "Tablica 2 (x2): ";
    for (double* p = tab2; p < tab2 + SIZE; ++p)
        std::cout << *p << " ";
    std::cout << std::endl;

    std::cout << "Tablica 3 (suma): ";
    for (double* p = tab3; p < tab3 + SIZE; ++p)
        std::cout << *p << " ";
    std::cout << std::endl;

    return 0;
}

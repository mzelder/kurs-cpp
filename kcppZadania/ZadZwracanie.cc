#include <iostream>

// 1. Zwracanie przez wartość
int zwrocWartosc() {
    int x = 10;
    return x;
}

// 2. Zwracanie przez referencję
int& zwrocReferencje(int& x) {
    return x;
}

// 3. Zwracanie przez wskaźnik
int* zwrocWskaznik(int* x) {
    return x;
}

// 4. Zwracanie tablicy (zwrócenie wskaźnika do pierwszego elementu tablicy)
int* zwrocTablice() {
    static int tab[5] = {1, 2, 3, 4, 5}; // Musi być statyczna, aby nie utracić danych po wyjściu z funkcji
    return tab;
}

int main() {
    int a = 20;
    int b = 30;
    int c = 40;
    
    // Przez wartość
    int wynikWartosc = zwrocWartosc();
    std::cout << "Zwrócona wartość: " << wynikWartosc << std::endl;
    
    // Przez referencję
    int& wynikReferencja = zwrocReferencje(a);
    wynikReferencja = 50; // Modyfikacja wartości przez referencję
    std::cout << "Zmieniona wartość a: " << a << std::endl;
    
    // Przez wskaźnik
    int* wynikWskaznik = zwrocWskaznik(&b);
    *wynikWskaznik = 60; // Modyfikacja wartości przez wskaźnik
    std::cout << "Zmieniona wartość b: " << b << std::endl;
    
    // Tablica
    int* tablica = zwrocTablice();
    std::cout << "Elementy tablicy: ";
    for (int i = 0; i < 5; i++) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
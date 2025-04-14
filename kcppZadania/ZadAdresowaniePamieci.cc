#include <iostream>

int main() {
    int x = 10;  // Deklaracja zmiennej całkowitej x i przypisanie jej wartości 10
    double y = 3.14;  // Deklaracja zmiennej zmiennoprzecinkowej y i przypisanie jej wartości 3.14
    char z = 'A';  // Deklaracja zmiennej znakowej z i przypisanie jej wartości 'A'

    // Wypisanie adresu zmiennej x
    // Operator & zwraca adres pamięci, w którym przechowywana jest zmienna x
    std::cout << "Adres zmiennej x: " << &x << std::endl;

    // Wypisanie adresu zmiennej y
    // Operator & zwraca adres pamięci, w którym przechowywana jest zmienna y
    std::cout << "Adres zmiennej y: " << &y << std::endl;

    // Wypisanie adresu zmiennej z
    // Operator & zwraca adres pamięci, w którym przechowywana jest zmienna z
    // Dla zmiennych typu char adres może być traktowany jako znak, dlatego używamy (void*)&z, 
    // aby wymusić interpretację jako adres, a nie znak.
    std::cout << "Adres zmiennej z: " << (void*)&z << std::endl;

    return 0;  // Zakończenie programu
}

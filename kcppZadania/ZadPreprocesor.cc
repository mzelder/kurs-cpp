#include <iostream>
using namespace std;

// Definicja makra PI
#define PI 3.14159

// Makro z argumentem - pokazujące # (stringify)
#define TO_STRING(x) #x

// Makro z ## (łączenie tokenów)
#define CONCAT(a, b) a##b

// #ifdef i #ifndef przykład:
#define DEBUG 1

int main() {
    cout << "=== Przykład #ifdef, #ifndef ===\n";

#ifdef DEBUG
    cout << "DEBUG jest zdefiniowane.\n";
#else
    cout << "DEBUG nie jest zdefiniowane.\n";
#endif

#ifndef RELEASE
    cout << "RELEASE nie jest zdefiniowane.\n";
#else
    cout << "RELEASE jest zdefiniowane.\n";
#endif

    cout << "\n=== Przykład użycia makra #define ===\n";
    cout << "Wartość PI z makra: " << PI << endl;

    cout << "\n=== Przykład # (stringify) ===\n";
    cout << "TO_STRING(123 + 456) = " << TO_STRING(123 + 456) << endl;

    cout << "\n=== Przykład ## (token pasting) ===\n";
    int xy = 100;
    cout << "CONCAT(x, y) = " << CONCAT(x, y) << endl;

    cout << "\n=== Przykład bez preprocesora ===\n";
    // Zamiast makra PI używamy stałej
    const double pi_const = 3.14159;
    cout << "Wartość pi_const: " << pi_const << endl;

    // Zamiast TO_STRING tworzymy funkcję
    auto toStringFunc = [](int x) {
        return to_string(x);
    };
    cout << "toStringFunc(123 + 456) = " << toStringFunc(123 + 456) << endl;

    // Zamiast CONCAT - łączenie nazw zmiennych na etapie kompilacji jest niemożliwe,
    // ale pokazujemy dostępną alternatywę:
    int x_var = 42, y_var = 99;
    cout << "x_var = " << x_var << ", y_var = " << y_var << endl;

    return 0;
}

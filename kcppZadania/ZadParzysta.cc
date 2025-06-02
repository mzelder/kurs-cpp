#include <iostream>
using namespace std;

bool jestParzystaBit(int liczba) {
    return (liczba & 1) == 0;
}

// (b) Sprawdzenie parzystości za pomocą modulo
bool jestParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}

// (c) Sprawdzenie parzystości z operatorem warunkowym
bool jestParzystaTernary(int liczba) {
    // zamiast if, używamy ?: operatora
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    cout << "Sprawdzenie bitowe: "
         << (jestParzystaBit(liczba) ? "parzysta" : "nieparzysta") << endl;

    cout << "Sprawdzenie modulo: "
         << (jestParzystaModulo(liczba) ? "parzysta" : "nieparzysta") << endl;

    cout << "Sprawdzenie operator ternarny: "
         << (jestParzystaTernary(liczba) ? "parzysta" : "nieparzysta") << endl;

    return 0;
}

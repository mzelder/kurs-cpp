#include <iostream>
using namespace std;

// (a) Sprawdzenie parzystości za pomocą operacji bitowej AND (&)
bool jestParzystaBit(int liczba) {
    return (liczba & 1) == 0;
}

// (b) Sprawdzenie parzystości za pomocą modulo
bool jestParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}

// (c) Sprawdzenie parzystości z operatorem warunkowym
bool jestParzystaTernary(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    cout << "Wybierz metode sprawdzenia parzystosci:" << endl;
    cout << "1 - operacje bitowe (&)" << endl;
    cout << "2 - modulo (%)" << endl;
    cout << "3 - operator warunkowy (?:)" << endl;
    cout << "Twoj wybor: ";

    int wybor;
    cin >> wybor;

    bool wynik = false;
    switch (wybor) {
        case 1:
            wynik = jestParzystaBit(liczba);
            cout << "Wybrano metode bitowa: ";
            break;
        case 2:
            wynik = jestParzystaModulo(liczba);
            cout << "Wybrano metode modulo: ";
            break;
        case 3:
            wynik = jestParzystaTernary(liczba);
            cout << "Wybrano metode operatora warunkowego: ";
            break;
        default:
            cout << "Niepoprawny wybor!" << endl;
            return 1;
    }

    cout << (wynik ? "parzysta" : "nieparzysta") << endl;

    return 0;
}

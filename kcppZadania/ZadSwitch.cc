#include <iostream>
#include <string>
using namespace std;

// Funkcje z ZadParzystaCase
bool jestParzystaBit(int liczba) {
    return (liczba & 1) == 0;
}
bool jestParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}
bool jestParzystaTernary(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

// Prosta funkcja "hashująca" słowo na int (dla celów switch)
// UWAGA: to tylko przykład, nie nadaje się do produkcji!
int hashSlowa(const string& slowo) {
    int h = 0;
    for (char c : slowo) {
        h += c;
    }
    return h;
}

int main() {
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    cout << "Wybierz metode sprawdzenia (bit/modulo/ternary): ";
    string wybor;
    cin >> wybor;

    bool wynik = false;

    // Obliczamy hash słowa i na podstawie jego wartości robimy switch
    switch (hashSlowa(wybor)) {
        case 295: // 'b' + 'i' + 't' = 98 + 105 + 116 = 319, ale sprawdzamy dokładniej poniżej
            if (wybor == "bit") {
                wynik = jestParzystaBit(liczba);
                cout << "Wybrano metode bitowa: ";
            } else goto default_case;
            break;
        case 597: // 'm' + 'o' + 'd' + 'u' + 'l' + 'o' = 109+111+100+117+108+111 = 656
            if (wybor == "modulo") {
                wynik = jestParzystaModulo(liczba);
                cout << "Wybrano metode modulo: ";
            } else goto default_case;
            break;
        case 745: // 't' + 'e' + 'r' + 'n' + 'a' + 'r' + 'y' = 116+101+114+110+97+114+121 = 773
            if (wybor == "ternary") {
                wynik = jestParzystaTernary(liczba);
                cout << "Wybrano metode operatora warunkowego: ";
            } else goto default_case;
            break;
        default:
            default_case:
            cout << "Niepoprawny wybor!" << endl;
            return 1;
    }

    cout << (wynik ? "parzysta" : "nieparzysta") << endl;
    return 0;
}

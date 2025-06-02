#include <iostream>
using namespace std;

int main() {
    int rozmiar;
    cout << "Podaj rozmiar kwadratu / trójkątów: ";
    cin >> rozmiar;

    cout << "\nKwadrat:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < rozmiar; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nTrojkat prostokatny:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nTrojkat rownoramienny:" << endl;
    for (int i = 1; i <= rozmiar; i++) {
        // Spacje z lewej strony
        for (int sp = 0; sp < rozmiar - i; sp++) {
            cout << "  ";
        }
        // Gwiazdki
        for (int gw = 0; gw < 2 * i - 1; gw++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nPiramida z liczb:" << endl;
    for (int i = 1; i <= rozmiar; i++) {
        // Spacje z lewej strony
        for (int sp = 0; sp < rozmiar - i; sp++) {
            cout << "  ";
        }
        // Wypisujemy i powtarzane i razy
        for (int k = 0; k < i; k++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

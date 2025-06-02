#include <iostream>
using namespace std;

// Funkcja przetwarzająca tablicę binarną na liczbę całkowitą z ustawionymi bitami
int TablicaDoLiczby(const int tab[8]) {
    int wynik = 0;
    for (int i = 0; i < 8; i++) {
        if (tab[i] == 1) {
            wynik |= (1 << (7 - i)); // ustaw bit na odpowiedniej pozycji
        }
    }
    return wynik;
}

// Funkcja pomocnicza do wypisania liczby w postaci binarnej
void WyswietlBinarna(int liczba) {
    for (int i = 7; i >= 0; i--) {
        cout << ((liczba >> i) & 1);
    }
    cout << endl;
}

int main() {
    int tablica[8];

    cout << "Podaj 8 elementów (0 lub 1):" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "tablica[" << i << "] = ";
        cin >> tablica[i];

        if (tablica[i] != 0 && tablica[i] != 1) {
            cout << "Błąd: dozwolone tylko 0 lub 1." << endl;
            return 1;
        }
    }

    int liczba = TablicaDoLiczby(tablica);

    cout << "Wynik jako liczba dziesiętna: " << liczba << endl;
    cout << "Wynik jako liczba binarna : ";
    WyswietlBinarna(liczba);

    return 0;
}

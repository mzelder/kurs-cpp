#include <iostream>
#include <string>
using namespace std;

// Funkcja konwertująca liczbę dziesiętną na binarną
string Dec2Bin(int dec) {
    if (dec == 0) return "0";

    string bin = "";
    while (dec > 0) {
        bin = char((dec % 2) + '0') + bin;  // dodaj bit na początek
        dec /= 2;
    }
    return bin;
}

int main() {
    int liczba;
    cout << "Podaj liczbę dziesiętną: ";
    cin >> liczba;

    if (liczba < 0) {
        cout << "Liczba musi być nieujemna." << endl;
        return 1;
    }

    string binarna = Dec2Bin(liczba);
    cout << "Wartość binarna: " << binarna << endl;

    return 0;
}

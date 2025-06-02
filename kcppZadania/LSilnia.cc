#include <iostream>
using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe nieujemna do obliczenia sumy silni od 1 do n: ";
    cin >> liczba;

    if (liczba < 0) {
        cout << "Blad: liczba musi byc nieujemna." << endl;
        return 1;
    }

    long long sumaSilni = 0;
    long long silnia = 1;

    for (int i = 1; i <= liczba; i++) {
        silnia *= i;         // oblicz i!
        sumaSilni += silnia; // dodaj do sumy
    }

    cout << "Suma silni od 1 do " << liczba << " wynosi: " << sumaSilni << endl;

    return 0;
}

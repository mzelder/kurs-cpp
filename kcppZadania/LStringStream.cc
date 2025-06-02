#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string dane = "123 456 789";
    stringstream ss(dane);

    int a, b, c;
    ss >> a >> b >> c;

    cout << "Dane wejściowe (string): " << dane << endl;
    cout << "Liczby odczytane za pomocą stringstream:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // Przykład: tworzenie stringa ze zmiennych
    stringstream ss2;
    string imie = "Jan";
    int wiek = 30;

    ss2 << "Imię: " << imie << ", Wiek: " << wiek;
    string wynik = ss2.str();

    cout << "Złożony tekst: " << wynik << endl;

    return 0;
}

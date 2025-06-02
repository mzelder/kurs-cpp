#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Dane produktów
    struct Produkt {
        string nazwa;
        double cena;
        int ilosc;
    };

    Produkt produkty[] = {
        {"Chleb", 4.99, 5},
        {"Mleko", 3.20, 10},
        {"Jajka (10 szt)", 8.50, 3}
    };

    // Nagłówek tabeli
    cout << "|"
         << left << setw(15) << "Nazwa"
         << "|"
         << right << setw(8) << "Cena"
         << "  |"
         << right << setw(7) << "Ilosc"
         << " |" << endl;

    cout << "|" << string(15, '-') 
         << "|" << string(8, '-') 
         << "--|" << string(7, '-') << " |" << endl;

    // Wypisanie produktów
    for (const auto& p : produkty) {
        cout << "|"
             << left << setw(15) << p.nazwa
             << "|"
             << fixed << setprecision(2) << right << setw(8) << p.cena
             << "  |"
             << right << setw(7) << p.ilosc
             << " |" << endl;
    }

    return 0;
}

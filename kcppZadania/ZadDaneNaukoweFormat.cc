#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Funkcja do wypisania nagłówka z wyśrodkowaniem tekstu w kolumnie
void printCentered(const string& text, int width) {
    int len = static_cast<int>(text.length());
    int padLeft = (width - len) / 2;
    int padRight = width - len - padLeft;
    cout << string(padLeft, ' ') << text << string(padRight, ' ');
}

int main() {
    const int col1Width = 15;
    const int col2Width = 20;

    // Stałe
    struct Stala {
        string nazwa;
        double wartosc;
    };

    Stala stale[] = {
        {"Pi", 3.141592653589793},
        {"e", 2.718281828459045},
        {"Złoty podział", 1.6180339887}
    };

    // Nagłówki
    cout << "|";
    printCentered("Stała", col1Width);
    cout << "|";
    printCentered("Wartość (domyślnie)", col2Width);
    cout << "|";
    printCentered("Notacja stała", col2Width);
    cout << "|";
    printCentered("Notacja naukowa", col2Width);
    cout << "|" << endl;

    cout << "|"
         << string(col1Width, '-')
         << "|"
         << string(col2Width, '-')
         << "|"
         << string(col2Width, '-')
         << "|"
         << string(col2Width, '-')
         << "|" << endl;

    // Wypisanie wartości
    for (const auto& s : stale) {
        cout << "|"
             << left << setw(col1Width) << s.nazwa << "|";

        // Domyślna notacja (ustawiona na precision 6)
        cout << right << setw(col2Width) << setprecision(6) << s.wartosc << "|";

        // fixed z precyzją 6
        cout << right << setw(col2Width) << fixed << setprecision(6) << s.wartosc << "|";

        // scientific z precyzją 6
        cout << right << setw(col2Width) << scientific << setprecision(6) << s.wartosc << "|";

        cout << endl;

        // Reset formatowanie na domyślne (przed kolejnym wierszem)
        cout.unsetf(ios::fixed | ios::scientific);
    }

    return 0;
}

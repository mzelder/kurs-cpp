#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Funkcja konwertująca binarny ciąg znaków na liczbę dziesiętną
int Bin2Dec(const string& binStr) {
    int result = 0;
    int power = 0;

    // Iterujemy od końca (najmłodszy bit)
    for (int i = binStr.length() - 1; i >= 0; --i) {
        if (binStr[i] == '1') {
            result += pow(2, power);
        } else if (binStr[i] != '0') {
            // Błąd w zapisie binarnym
            cout << "Niepoprawny znak w liczbie binarnej: " << binStr[i] << endl;
            return -1;
        }
        power++;
    }
    return result;
}

int main() {
    string bin;
    cout << "Podaj liczbę binarną (np. 1011): ";
    cin >> bin;

    int dec = Bin2Dec(bin);
    if (dec != -1) {
        cout << "Wartość dziesiętna: " << dec << endl;
    } else {
        cout << "Błąd konwersji." << endl;
    }

    return 0;
}

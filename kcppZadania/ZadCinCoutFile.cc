#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // 1. Wypisywanie na ekran
    cout << "To jest zwykły komunikat na ekran (cout)." << endl;

    // 2. Wypisywanie do strumienia błędów
    cerr << "To jest komunikat błędu (cerr)." << endl;

    // Prosze odkomentowac aby przetestowac 
    
    // 3. Zapis do pliku
    /*
    ofstream plikWy("dane.txt");
    if (!plikWy) {
        cerr << "Nie można otworzyć pliku do zapisu!" << endl;
        return 1;
    }
    plikWy << "Linia zapisana do pliku." << endl;
    plikWy.close();
    */

    // 4. Odczyt z pliku
    /*
    ifstream plikWe("dane.txt");
    if (!plikWe) {
        cerr << "Nie można otworzyć pliku do odczytu!" << endl;
        return 1;
    }
    string linia;
    cout << "Zawartość pliku:" << endl;
    while (getline(plikWe, linia)) {
        cout << linia << endl;
    }
    plikWe.close();
    */

    return 0;
}

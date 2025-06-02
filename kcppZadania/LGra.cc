#include <iostream>
#include <cstdlib>  // dla rand()
#include <ctime>    // dla time()
using namespace std;

int main() {
    srand(time(0));
    
    int maxZakres;
    int poziom;
    
    cout << "Wybierz poziom trudnosci:\n1 - Latwy (1-50)\n2 - Trudny (1-200)\nWybor: ";
    cin >> poziom;
    
    if (poziom == 1) {
        maxZakres = 50;
    } else if (poziom == 2) {
        maxZakres = 200;
    } else {
        cout << "Niepoprawny wybor, ustawiam poziom latwy (1-50)." << endl;
        maxZakres = 50;
    }
    
    int wylosowana = rand() % maxZakres + 1; // liczba od 1 do maxZakres
    int proba, licznik = 0;
    const int maxProby = 10;
    
    cout << "Zgadnij liczbe (1-" << maxZakres << "), masz " << maxProby << " prob:" << endl;

    while (licznik < maxProby) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            return 0;  // koniec programu
        }
    }

    cout << "Przekroczyles limit prob. Prawidlowa liczba to: " << wylosowana << endl;

    return 0;
}

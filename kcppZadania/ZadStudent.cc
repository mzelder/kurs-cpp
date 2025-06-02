#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;

struct Student {
    string imie;
    string nazwisko;
    string nrIndeksu;
};

// Funkcja do porównywania studentów alfabetycznie po nazwisku, potem imieniu
bool porownajStudentow(const Student& a, const Student& b) {
    if (a.nazwisko != b.nazwisko)
        return a.nazwisko < b.nazwisko;
    return a.imie < b.imie;
}

// Sprawdza, czy numer indeksu jest unikalny
bool czyNumerUnikalny(const vector<Student>& lista, const string& nr) {
    for (const auto& s : lista) {
        if (s.nrIndeksu == nr)
            return false;
    }
    return true;
}

// Sprawdza, czy student o danym numerze indeksu istnieje
bool czyStudentIstnieje(const vector<Student>& lista, const string& nr) {
    for (const auto& s : lista) {
        if (s.nrIndeksu == nr)
            return true;
    }
    return false;
}

void dodajStudenta(vector<Student>& lista) {
    Student nowy;
    cout << "Podaj imie: ";
    getline(cin, nowy.imie);
    if (nowy.imie.empty()) {
        cout << "Imie nie moze byc puste!\n";
        return;
    }
    cout << "Podaj nazwisko: ";
    getline(cin, nowy.nazwisko);
    if (nowy.nazwisko.empty()) {
        cout << "Nazwisko nie moze byc puste!\n";
        return;
    }
    cout << "Podaj numer indeksu: ";
    getline(cin, nowy.nrIndeksu);
    if (nowy.nrIndeksu.empty()) {
        cout << "Numer indeksu nie moze byc pusty!\n";
        return;
    }
    if (!czyNumerUnikalny(lista, nowy.nrIndeksu)) {
        cout << "Numer indeksu musi byc unikalny!\n";
        return;
    }

    lista.push_back(nowy);
    cout << "Student dodany.\n";
}

void usunStudenta(vector<Student>& lista) {
    cout << "Podaj numer indeksu studenta do usuniecia: ";
    string nr;
    getline(cin, nr);
    auto it = find_if(lista.begin(), lista.end(), [&nr](const Student& s) { return s.nrIndeksu == nr; });
    if (it != lista.end()) {
        lista.erase(it);
        cout << "Student usuniety.\n";
    } else {
        cout << "Nie znaleziono studenta o takim numerze indeksu.\n";
    }
}

void wyswietlListe(const vector<Student>& lista) {
    if (lista.empty()) {
        cout << "Lista studentow jest pusta.\n";
        return;
    }
    cout << "Lista studentow:\n";
    for (const auto& s : lista) {
        cout << s.imie << " " << s.nazwisko << " (Indeks: " << s.nrIndeksu << ")\n";
    }
}

void sortujListe(vector<Student>& lista) {
    sort(lista.begin(), lista.end(), porownajStudentow);
    cout << "Lista posortowana alfabetycznie.\n";
}

int main() {
    vector<Student> listaStudentow;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Dodaj studenta\n";
        cout << "2. Usun studenta\n";
        cout << "3. Wyswietl liste studentow\n";
        cout << "4. Sortuj liste\n";
        cout << "5. Sprawdz czy student istnieje\n";
        cout << "0. Wyjscie\n";
        cout << "Wybierz opcje: ";

        string wybor;
        getline(cin, wybor);

        if (wybor == "1") {
            dodajStudenta(listaStudentow);
        } else if (wybor == "2") {
            usunStudenta(listaStudentow);
        } else if (wybor == "3") {
            wyswietlListe(listaStudentow);
        } else if (wybor == "4") {
            sortujListe(listaStudentow);
        } else if (wybor == "5") {
            cout << "Podaj numer indeksu do sprawdzenia: ";
            string nr;
            getline(cin, nr);
            if (czyStudentIstnieje(listaStudentow, nr)) {
                cout << "Student o numerze indeksu " << nr << " istnieje.\n";
            } else {
                cout << "Nie znaleziono studenta o numerze indeksu " << nr << ".\n";
            }
        } else if (wybor == "0") {
            cout << "Koniec programu.\n";
            break;
        } else {
            cout << "Niepoprawna opcja, sprobuj ponownie.\n";
        }
    }

    return 0;
}

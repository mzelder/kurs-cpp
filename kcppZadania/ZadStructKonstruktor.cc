#include <iostream>
#include <string>
using namespace std;

struct Student {
    string imie;
    int wiek;
    double srednia;

    // Domyślny konstruktor z inicjalizacją standardową (C++11+)
    Student() : imie("Nieznany"), wiek(0), srednia(0.0) {
        cout << "Domyślny konstruktor struktury wywolany\n";
    }

    // Konstruktor z listą inicjalizacyjną
    Student(const string& im, int w, double s) : imie(im), wiek(w), srednia(s) {
        cout << "Konstruktor struktury z argumentami wywolany\n";
    }

    // Destruktor (opcjonalny, tutaj domyślny)
    ~Student() {
        cout << "Destruktor struktury dla " << imie << " wywolany\n";
    }

    void pokaz() const {
        cout << "Imie: " << imie << ", Wiek: " << wiek << ", Srednia: " << srednia << endl;
    }
};

int main() {
    Student s1; // domyślny konstruktor
    s1.pokaz();

    Student s2("Jan", 22, 3.8); // konstruktor z argumentami
    s2.pokaz();

    return 0;
}

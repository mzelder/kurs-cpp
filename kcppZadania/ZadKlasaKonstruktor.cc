#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string imie;
    int wiek;
    double srednia;

public:
    // Domyślny konstruktor (zmienne standardowo inicjalizowane)
    Student() : imie("Nieznany"), wiek(0), srednia(0.0) {
        cout << "Domyślny konstruktor wywolany\n";
    }

    // Konstruktor z listą inicjalizacyjną
    Student(const string& im, int w, double s) : imie(im), wiek(w), srednia(s) {
        cout << "Konstruktor z argumentami wywolany\n";
    }

    // Domyślny destruktor
    ~Student() {
        cout << "Destruktor dla " << imie << " wywolany\n";
    }

    void pokaz() const {
        cout << "Imie: " << imie << ", Wiek: " << wiek << ", Srednia: " << srednia << endl;
    }
};

int main() {
    Student s1; // domyślny konstruktor
    s1.pokaz();

    Student s2("Anna", 21, 4.5); // konstruktor z argumentami
    s2.pokaz();

    return 0;
}

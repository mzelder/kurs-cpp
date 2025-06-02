#include <iostream>
using namespace std;

// Definicja struktury z konstruktorem
struct Student {
    string imie;
    string nazwisko;
    int indeks;

    // Konstruktor standardowy
    Student() {
        imie = "Jan";
        nazwisko = "Kowalski";
        indeks = 0;
    }

    // Konstruktor z listą inicjalizacyjną
    Student(const string& i, const string& n, int ind)
        : imie(i), nazwisko(n), indeks(ind) {}
};

int main() {
    // Deklaracja obiektu z konstruktorem domyślnym
    Student s1;
    cout << "Student s1: " << s1.imie << " " << s1.nazwisko << ", indeks: " << s1.indeks << endl;

    // Deklaracja obiektu z konstruktorem parametrycznym (lista inicjalizacyjna)
    Student s2("Anna", "Nowak", 12345);
    cout << "Student s2: " << s2.imie << " " << s2.nazwisko << ", indeks: " << s2.indeks << endl;

    // Zmiana wartości pól
    s2.imie = "Maria";
    s2.indeks = 54321;
    cout << "Po zmianie s2: " << s2.imie << " " << s2.nazwisko << ", indeks: " << s2.indeks << endl;

    // Dynamiczne tworzenie obiektu
    Student* s3 = new Student("Tomasz", "Wójcik", 11111);
    cout << "Student s3: " << s3->imie << " " << s3->nazwisko << ", indeks: " << s3->indeks << endl;

    // Zmiana i odczyt przez wskaźnik
    s3->nazwisko = "Zieliński";
    cout << "Po zmianie s3: " << s3->imie << " " << s3->nazwisko << ", indeks: " << s3->indeks << endl;

    delete s3;  // zwolnienie pamięci

    return 0;
}

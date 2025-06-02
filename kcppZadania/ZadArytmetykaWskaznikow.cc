#include <iostream>
using namespace std;

// Funkcja 1 – analiza operacji wskaźnikowych
void Funkcja1() {
    cout << "=== Funkcja1: Operacje wskaźnikowe ===\n";

    int tab[5] = {10, 20, 30, 40, 50};
    int* p = tab;

    cout << "Start: *p = " << *p << endl;

    p++;        // przesunięcie wskaźnika na kolejny element
    cout << "p++; *p = " << *p << endl;

    ++p;        // przesunięcie wskaźnika na jeszcze kolejny
    cout << "++p; *p = " << *p << endl;

    ++*p;       // zwiększenie wartości wskazywanej przez p
    cout << "++*p; *p = " << *p << endl;

    ++(*p);     // to samo co wyżej, inna forma zapisu
    cout << "++(*p); *p = " << *p << endl;

    ++*(p);     // i to samo co wyżej, wszystkie zwiększają wartość
    cout << "++*(p); *p = " << *p << endl;

    *p++;       // odczyt wartości, potem p++
    cout << "*p++; *p = " << *p << endl;

    (*p)++;     // zwiększ wartość wskazywaną przez p
    cout << "(*p)++; *p = " << *p << endl;

    *(p)++;     // zwróć wartość i przesuń p (identyczne jak *p++)
    cout << "*(p)++; *p = " << *p << endl;

    *++p;       // najpierw ++p, potem *p
    cout << "*++p; *p = " << *p << endl;

    *(++p);     // identycznie
    cout << "*(++p); *p = " << *p << endl;
}

// Funkcja 2 – analogiczna do LArytmetykaWskaznikowZmienne.cc
void Funkcja2() {
    cout << "\n=== Funkcja2: Wartości A, B, C po operacjach ===\n";

    int a = 0, b = 0, c = 0;
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    cout << "1.  A, B, C: " << a << "  " << b << "  " << c << endl;

    *pb = 10;
    cout << "2.  A, B, C: " << a << "  " << b << "  " << c << endl;

    *pc = 20;
    cout << "3.  A, B, C: " << a << "  " << b << "  " << c << endl;

    *pb = 30;
    cout << "4.  A, B, C: " << a << "  " << b << "  " << c << endl;

    *pa = 40;
    cout << "5.  A, B, C: " << a << "  " << b << "  " << c << endl;

    *pb = 50;
    cout << "6.  A, B, C: " << a << "  " << b << "  " << c << endl;

    *pc = 60;
    cout << "7.  A, B, C: " << a << "  " << b << "  " << c << endl;

    *pb = 70;
    cout << "8.  A, B, C: " << a << "  " << b << "  " << c << endl;

    *pa = 80;
    cout << "9.  A, B, C: " << a << "  " << b << "  " << c << endl;

    *pb = 90;
    cout << "10. A, B, C: " << a << "  " << b << "  " << c << endl;
}

int main() {
    Funkcja1();
    Funkcja2();
    return 0;
}

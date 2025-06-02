#include <iostream>
using namespace std;

union Dane {
    int i;
    float f;
    char c;
};

int main() {
    Dane d;

    d.i = 65;
    cout << "Po ustawieniu i = 65:" << endl;
    cout << "d.i = " << d.i << endl;
    cout << "d.f (niezdefiniowane) = " << d.f << endl;
    cout << "d.c (niezdefiniowane) = " << d.c << endl;

    d.f = 3.14f;
    cout << "\nPo ustawieniu f = 3.14:" << endl;
    cout << "d.i (nadpisane) = " << d.i << endl;
    cout << "d.f = " << d.f << endl;
    cout << "d.c (nadpisane) = " << d.c << endl;

    d.c = 'A';
    cout << "\nPo ustawieniu c = 'A':" << endl;
    cout << "d.i (nadpisane) = " << d.i << endl;
    cout << "d.f (nadpisane) = " << d.f << endl;
    cout << "d.c = " << d.c << endl;

    // UWAGA: unie pozwalają na oszczędność pamięci, ale użycie innych pól niż ostatnio ustawione
    // prowadzi do niezdefiniowanego zachowania i błędnych danych!

    return 0;
}

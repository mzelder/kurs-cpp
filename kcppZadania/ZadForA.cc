#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    cout << "Liczby nieparzyste od 1 do " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // zmiana: nieparzyste zamiast parzystych
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Liczby podzielne przez 3 i 5 od 1 do " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Liczby podzielne przez 7 od 1 do " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

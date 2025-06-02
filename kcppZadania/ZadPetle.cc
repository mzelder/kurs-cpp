#include <iostream>
using namespace std;

// (a) while z i++ i ++i oraz break, continue, return
void petlaWhile() {
    cout << "(a) Pętla while:\n";
    int i = 0;
    while (i < 10) {
        if (i == 7) {
            cout << " break przy i=7\n";
            break; // przerywa pętlę gdy i=7
        }
        i++;  // inkrementacja postinkrementacją i++
        if (i % 2 == 0) {
            cout << " continue przy i=" << i << " (parzysta)\n";
            continue; // pomija poniższy kod dla parzystych
        }
        cout << " i = " << i << endl;
        ++i; // inkrementacja preinkrementacją ++i
        if (i > 8) {
            cout << " return przy i > 8\n";
            return; // wychodzi z funkcji gdy i > 8
        }
    }
    cout << "Koniec pętli while\n\n";
}

// (b) do-while z i++ i ++i oraz break, continue, return
void petlaDoWhile() {
    cout << "(b) Pętla do-while:\n";
    int i = 0;
    do {
        if (i == 6) {
            cout << " break przy i=6\n";
            break;
        }
        i++;  // postinkrementacja
        if (i % 3 == 0) {
            cout << " continue przy i=" << i << " (podzielne przez 3)\n";
            continue;
        }
        cout << " i = " << i << endl;
        ++i; // preinkrementacja
        if (i > 8) {
            cout << " return przy i > 8\n";
            return;
        }
    } while (i < 10);
    cout << "Koniec pętli do-while\n\n";
}

// (c) for z i++ i ++i oraz break, continue, return
void petlaFor() {
    cout << "(c) Pętla for:\n";
    for (int i = 0; i < 10; ) {
        if (i == 5) {
            cout << " break przy i=5\n";
            break;
        }
        i++; // postinkrementacja
        if (i % 2 == 1) {
            cout << " continue przy i=" << i << " (nieparzysta)\n";
            continue;
        }
        cout << " i = " << i << endl;
        ++i; // preinkrementacja
        if (i > 7) {
            cout << " return przy i > 7\n";
            return;
        }
    }
    cout << "Koniec pętli for\n\n";
}

int main() {
    petlaWhile();
    petlaDoWhile();
    petlaFor();
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << right << setw(8) << "Celsjusz" << "   " << setw(10) << "Fahrenheit" << endl;
    cout << setw(7) << "-------" << "   " << setw(9) << "---------" << endl;

    for (int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32.0;
        cout << setw(8) << c << "   "
             << fixed << setprecision(2) << setw(10) << f << endl;
    }

    return 0;
}

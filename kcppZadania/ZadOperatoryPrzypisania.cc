#include <iostream>
using namespace std;

// (1) Operatory arytmetyczne
void OperatoryArytmetyczne() {
    int a = 10, b = 3;

    cout << "=== Operatory Arytmetyczne ===" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << " (dzielenie całkowite)" << endl;
    cout << "a % b = " << (a % b) << " (reszta z dzielenia)" << endl;
}

// (2) Operatory przypisania
void OperatoryPrzypisania() {
    int x = 5;

    cout << "\n=== Operatory Przypisania ===" << endl;
    cout << "Początkowa wartość x = " << x << endl;

    x += 2;
    cout << "x += 2  → x = " << x << endl;

    x -= 1;
    cout << "x -= 1  → x = " << x << endl;

    x *= 3;
    cout << "x *= 3  → x = " << x << endl;

    x /= 2;
    cout << "x /= 2  → x = " << x << endl;

    x %= 4;
    cout << "x %= 4  → x = " << x << endl;
}

int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;
}

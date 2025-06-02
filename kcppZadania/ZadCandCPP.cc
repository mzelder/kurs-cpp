#include <iostream>
#include <cstdio>   // dla printf, scanf
using namespace std;

int main() {
    // --- Styl C ---
    int a_c, b_c;
    printf("Styl C - Podaj dwie liczby całkowite: ");
    scanf("%d %d", &a_c, &b_c);
    int suma_c = a_c + b_c;
    printf("Styl C - Suma: %d + %d = %d\n", a_c, b_c, suma_c);

    // --- Styl C++ ---
    int a_cpp, b_cpp;
    cout << "Styl C++ - Podaj dwie liczby całkowite: ";
    cin >> a_cpp >> b_cpp;
    int suma_cpp = a_cpp + b_cpp;
    cout << "Styl C++ - Suma: " << a_cpp << " + " << b_cpp << " = " << suma_cpp << endl;

    return 0;
}

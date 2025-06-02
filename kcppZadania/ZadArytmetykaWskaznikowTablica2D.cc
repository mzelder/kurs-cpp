#include <iostream>

int main() {
    const int WIERSZE = 3;
    const int KOLUMNY = 3;
    int Tab[WIERSZE][KOLUMNY] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Adresy elementów tablicy Tab[3][3]:\n\n";

    for (int i = 0; i < WIERSZE; ++i) {
        for (int j = 0; j < KOLUMNY; ++j) {
            std::cout << "Adres Tab[" << i << "][" << j << "] = "
                      << &(Tab[i][j]) << " | Wartość: " << Tab[i][j] << std::endl;
        }
    }
    return 0;
}

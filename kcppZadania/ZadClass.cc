#include <iostream>
using namespace std;

class Przykład {
public:
    int publicVar;                 // zmienna publiczna

    // Metoda deklarowana i definiowana w klasie (implicit inline)
    void setPublicVar(int val) {
        publicVar = val;
    }

    // Deklaracja metody, definicja poza klasą
    void showPrivateVar();

    // Funkcja inline deklarowana i definiowana w klasie
    inline void showProtectedVar() {
        cout << "Protected var = " << protectedVar << endl;
    }

protected:
    int protectedVar;              // zmienna chroniona

    // Funkcja dostępna tylko w klasie i klasach dziedziczących
    void setProtectedVar(int val) {
        protectedVar = val;
    }

private:
    int privateVar;                // zmienna prywatna

    // Metoda dostępna tylko w klasie
    void setPrivateVar(int val) {
        privateVar = val;
    }

public:
    // Metoda, która ma dostęp do private i protected i je ustawia
    void setVars(int pvt, int prot) {
        setPrivateVar(pvt);
        setProtectedVar(prot);
    }

    // Metoda do wyświetlania wartości zmiennych private i protected
    void showAllVars() {
        cout << "Private var = " << privateVar << endl;
        cout << "Protected var = " << protectedVar << endl;
        cout << "Public var = " << publicVar << endl;
    }
};

// Definicja metody poza klasą
void Przykład::showPrivateVar() {
    cout << "Private var = " << privateVar << endl;
}

int main() {
    Przykład obj;

    obj.setPublicVar(10);
    obj.setVars(20, 30);

    obj.showAllVars();

    obj.showPrivateVar();

    obj.showProtectedVar();

    return 0;
}

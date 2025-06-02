#include <iostream>
#include <string>
#include <vector>

// Funkcje zadeklarowane jako extern "C"
extern "C" void functionC1() {
    std::cout << "Wykonano functionC1 (extern \"C\")" << std::endl;
}

extern "C" void functionC2() {
    std::cout << "Wykonano functionC2 (extern \"C\")" << std::endl;
}

// Pozostałe funkcje
void function1() {
    std::cout << "Wykonano function1" << std::endl;
}

void function2() {
    std::cout << "Wykonano function2" << std::endl;
}

void function3() {
    std::cout << "Wykonano function3" << std::endl;
}

// Funkcja pomocnicza do mapowania nazw funkcji na wywołania
void executeFunctionByName(const std::string& name) {
    if (name == "function1") {
        function1();
    } else if (name == "function2") {
        function2();
    } else if (name == "function3") {
        function3();
    } else if (name == "functionC1") {
        functionC1();
    } else if (name == "functionC2") {
        functionC2();
    } else {
        std::cerr << "Nieznana funkcja: " << name << std::endl;
    }
}

// Funkcja main z obsługą argumentów
int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Użycie: " << argv[0] << " <nazwa_funkcji> [<nazwa_funkcji> ...]" << std::endl;
        std::cout << "Dostępne funkcje: function1, function2, function3, functionC1, functionC2" << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        std::string funcName = argv[i];
        executeFunctionByName(funcName);
    }

    return 0;
}

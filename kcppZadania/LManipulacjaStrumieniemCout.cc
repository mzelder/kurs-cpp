#include <iostream>
#include <iomanip>   // dla manipulatorów
using namespace std;

int main() {
    // Przykładowe dane do wyświetlenia (wyniki działań)
    double output  = 12.34567 / 100;     // 0.1234567
    double T       = 0.456789;
    double output1 = 1.234567 / 10;      // 0.1234567
    double T1      = 12.3456789;
    double output2 = 2.34567 / 10;       // 0.234567
    double T2      = 23.456789;

    // Oblicz średnie wartości
    double avgOutput = (output + output1 + output2) / 3;
    double avgT      = (T + T1 + T2) / 3;

    cout << "==================================================" << endl;
    cout << "Wynika naszego działania: x.xxxxx jest niepoprawny ale:" << endl;

    // output:   xx.xxx    T:  x.xxx 
    cout << "   output:  "
         << setw(6) << fixed << setprecision(3) << output * 100 << "   "
         << "T: " 
         << setw(6) << fixed << setprecision(3) << T << endl;

    // output1:   x.xxxx   T: xx.xxxxx
    cout << "   output1: "
         << setw(7) << fixed << setprecision(4) << output1 << "   "
         << "T: "
         << setw(8) << fixed << setprecision(5) << T1 << endl;

    // output2:   x.xxxx   T: xx.xxxxxx
    cout << "   output2: "
         << setw(7) << fixed << setprecision(4) << output2 << "   "
         << "T: "
         << setw(9) << fixed << setprecision(6) << T2 << endl;

    cout << "   ---------------------------------" << endl;

    // average:  xx.xxxx   T: xx.xxxxxx
    cout << "   average: "
         << setw(7) << fixed << setprecision(4) << avgOutput << "   "
         << "T: "
         << setw(9) << fixed << setprecision(6) << avgT << endl;

    cout << "==================================================" << endl;

    // Przykład manipulacji hex i dec na koniec (nie obowiązkowe)
    int val = 255;
    cout << "\nPrzykład hex i dec:" << endl;
    cout << "dec: " << val << ", hex: " << hex << val << dec << endl;

    // Przykład setfill i setw
    cout << "\nPrzykład setfill i setw:" << endl;
    cout << "|" << setfill('*') << setw(10) << 123 << "|" << endl;

    // Przykład scientific
    double sci = 12345.6789;
    cout << "\nPrzykład scientific:" << endl;
    cout << scientific << sci << endl;

    return 0;
}

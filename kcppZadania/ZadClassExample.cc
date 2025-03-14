#include <iostream>
using namespace std;

class Dog {
    public:
        string name;
        string color;
        int age;

        Dog(string n, string c, int a) : name(n), color(c), age(a) {}

        void showInformations() {
            cout << "Name: " << name << " Color: " << color << " Age: " << age;
        }
};

int main() {
    Dog dog1("John", "Brown", 3);
    dog1.showInformations();
 
    return 0;
}
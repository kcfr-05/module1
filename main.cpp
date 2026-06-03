#include <iostream>
using namespace std;

int main() {
    // Variable 1: integer
    int age = 20;

    // Variable 2: string
    string name = "Kien";

    // Display values and memory addresses
    cout << "Variable 1 (int):" << endl;
    cout << "  Value:   " << age << endl;
    cout << "  Address: " << &age << endl;

    cout << "\nVariable 2 (string):" << endl;
    cout << "  Value:   " << name << endl;
    cout << "  Address: " << &name << endl;

    return 0;
}

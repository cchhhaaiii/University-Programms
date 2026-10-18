#include <iostream>
using namespace std;

void changeByValue(int x) {
    x = 100;
    cout << "Inside changeByValue: " << x << "\n";
}

void changeByReference(int &x) {
    x = 100;
    cout << "Inside changeByReference: " << x << "\n";
}

int main() {
    int a = 10, b = 10;

    changeByValue(a);
    cout << "After call by value: " << a << "\n";

    changeByReference(b);
    cout << "After call by reference: " << b << "\n";

    return 0;
}
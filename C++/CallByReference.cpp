#include <iostream>
using namespace std;

// The '&' means 'x' is a reference to the original variable
void callByReference(int &x) {
    x = x + 10; 
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 20;

    cout << "Original value before function: " << num << endl;
    callByReference(num);
    cout << "Value after function finishes: " << num << endl; // Changes to 30

    return 0;
}

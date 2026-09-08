#include <iostream>
using namespace std;

// The function creates a local copy of the passed data
void callByValue(int x) {
    x = x + 10; 
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 20;

    cout << "Original value before function: " << num << endl;
    callByValue(num);
    cout << "Value after function finishes: " << num << endl; // Remains 20

    return 0;
}

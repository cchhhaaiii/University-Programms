#include <iostream>
using namespace std;

int main() {
    int n;
    int f = 1; 
    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: " << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            f = f * i;
        }
        cout << "Factorial of " << n << " = " << f << endl;
    }

    return 0;
}
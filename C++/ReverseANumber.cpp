#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (; n > 0; n /= 10) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
    }

    cout << reversed << endl;
    return 0;
}
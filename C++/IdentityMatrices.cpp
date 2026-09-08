#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of Identity Matrix (N x N): ";
    cin >> n;

    cout << "\nIdentity Matrix of size " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            if (i == j) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
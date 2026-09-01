#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 23, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Maximum number is: " << maxVal << endl;
    return 0;
}
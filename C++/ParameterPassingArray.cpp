#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sum(arr, size) << endl;
    return 0;
}
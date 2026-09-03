//program to search an element in an array taken from the user
#include <iostream>
using namespace std;

int main (){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int search;
    cout << "Enter the element to search: ";
    cin >> search;

    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            cout << "Element found at index: " << i << endl;

            break;
        }
        else if (i == size - 1) {
            cout << "Element not found in the array." << endl;
        }
    }
    return 0;
}

// positive, negative or zero
#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number to check wheather a number is Positive, Negative or Zero : ";
    cin >> n;
    if (n>0){
        cout << "The entered number, " << n << " is Positive." << endl;
    }
    else if (n<0){
        cout << "The entered number, " << n << " is Negative." << endl;
    }
    else {
        cout << "The entered number, " << n << " is Zero." << endl;
    }
    return 0;
}
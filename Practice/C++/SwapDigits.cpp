#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cout << "Enter Value of A" << endl;
    cin >> a;
    cout << "Enter Value of B" << endl;
    cin >> b;
    cout << "Value enterd for A is " << a << " and the value entered for B is " << b << " ." << endl;
    c = a;
    a = b;
    b = c;
    cout << "\nValues swapped now A is " << a << " and B is " << b << " ." << endl;

}
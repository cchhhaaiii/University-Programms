#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cout << "Enter Value of A" << endl;
    cin >> a;
    cout << "Enter Value of B" << endl;
    cin >> b;
    cout << "Enter Value of C" << endl;
    cin >> c;
    if (a>b && b>c){
        cout << "A : " << a << " is the Greatest out of the Three Numbers.";
    }
    else if (b>a){
        cout << "B : " << b << " is the Greatest out of the Three Numbers.";
    }
    else {
        cout << "C : " << c << " is the Greatest out of the Three Numbers.";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main (){
    int a;
    cout <<"Enter a value to check if it is Positive, Negative or Zero: ";
    cin >> a;
    if (a>0)
        cout <<"The Number " << a << " is Positive";
    
    else if (a == 0)
        cout <<"The Number " << a << " is Zero";

    else if (a<0)
        cout <<"The Number " << a << " is Negative";
    
    return 0;
}
#include <iostream>
using namespace std;

inline int larger (int a, int b){
    return (a>b) ? a : b;
}

int main (){
    int a, b;
    cout << "Enter two numbers to find the greatest of the two :";
    cin >> a >> b;
    cout << "The greatest of the two numbers is :" << larger(a, b);
    return 0;
}
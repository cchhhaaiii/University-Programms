#include <iostream>
using namespace std;

int main (){
    int a = 9;
    int b = 10;
    cout <<"Values of variables before swap, a = " << a << " ,b = " << b;
    int temp = a;
    a = b;
    b = temp;
    cout <<" and Values after swap, a = " << a << " , b = " << b;
    return 0;
}
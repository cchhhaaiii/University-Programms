// factorial
#include <iostream>
using namespace std;

int main (){
    int n;
    long long factorial = 1;
    cout << "Enter a number whos factorial is to be calculated :";
    cin >> n;
    for (int i = 1; i <=n; i++){
        factorial = factorial * i;
    }
    cout << "The factorial of the number " << n << " is " << factorial << endl;
    return 0;
}
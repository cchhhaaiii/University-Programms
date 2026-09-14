// sum of digits
#include <iostream>
using namespace std;

int main (){
    int num, digit, sum =0 ;
    cout << "Enter a number to find its sum of digits : ";
    cin >> num;
    while (num >0){
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    cout << "The Sum of digits of the entered number is : " << sum << endl;
    return 0;
}
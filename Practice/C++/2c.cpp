//calculator
#include <iostream>
using namespace std;

int main (){
    double num1, num2;
    char op;
    cout << "Enter the first number : " << endl;
    cin >> num1;
    cout << "Enter the second number : " << endl;
    cin >> num2;
    cout << "Enter the opperator to execute (+, -, * and /)";
    switch (op)
    {
        case '+':
        cout << "Result is :" << num1 + num2;
        break;

        case '-':
        cout << "Result is :" << num1 - num2;
        break;

        case '*':
        cout << "Result is :" << num1 * num2;
        break;

        case '/':
        if (num2!=0){
        cout << "Result is :" << num1 / num2;}
        else {
            cout << "Error";
        }
        break;
        default:
        cout << "Enter a valid operator";
    }
    return 0;
}
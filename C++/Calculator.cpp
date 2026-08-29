#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op, choice;
    do {
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, / or %): ";
    cin >> op;
         switch (op) {
             case '+':
             cout << "Result: " << num1 + num2 << endl;
             break;
            
             case '-':
             cout << "Result: " << num1 - num2 << endl;
             break;
            
             case '*':
             cout << "Result: " << num1 * num2 << endl;
             break;
            
             case '/':
             cout<< "Result: " << num1 / num2 << endl;
             break;

             case '%':
             cout<< "Result: " << num1 % num2 << endl;
             break;
         
        default:
            cout << "Error: Invalid operator entered!" << endl;
         }
        cout << "Want to calculate again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
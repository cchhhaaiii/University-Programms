#include <iostream>
using namespace std;

int main (){
    int num;
    char choice;
    do{
    cout << "Enter a Number to check wheather it is Odd or Even :" << endl;
    cin >> num;
    if (num % 2 == 0){
        cout << "The entered Number " << num << " is Even." << endl;
    }
    else {
        cout << "The entered Number " << num << " is Odd." << endl;
    }
    cout << "\nDo you wanna check another number??? (y/n)";
    cin >> choice;
} while (choice=='y'||choice=='Y');
    return 0;
}
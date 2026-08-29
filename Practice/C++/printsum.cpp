#include <iostream>
using namespace std;

int main (){
    int a, b;
    char choice;
    do{
    cout <<"Enter the value of a: ";
    cin >> a;   
    
    cout <<"Enter the value of b: ";
    cin >> b;   

    cout <<"The sum of a and b is: " << a+b << endl;
    cout <<"\nDo you want to continue? (y/n): ";
    cin >> choice;
    }while(choice=='y' || choice=='Y');
    return 0;
}
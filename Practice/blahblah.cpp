#include <iostream>
using namespace std;
int main (){
    float a, b,
    int choice;
    do{
        cout<<"1. addition, 2. subraction, 3. multiplication and 4. Division";
        cout << "enter your choice :";
        cin >> choice;
        if (choice >=1 && choice <= 4){
            cout<<"Enter the values for a and b";
            cin>>a>>b;
        }
        switch (choice){
            case 1:
            cout<<"Result = " << a+b;
            break;

            case 2:
            cout<<"Result = " << a-b;
            break;

            case 3:
            cout<<"Result = " << a*b;
            break;

            case 4:
            if (b!=0)
            cout<<"Result = " << a/b;
            else 
            cout<<"cannot divide by zero";
            break;

            case 5:
            cout << "Exitting";
            break;

            default:
            cout<<"Invalid Choice";
        }
        
        }while(choice !=5);
        return 0;
    }
//Positive Negative or Zero
#include <iostream>
using namespace std;

int main() {
    int num;
    char choice;
    do{
    cout<<"\nEnter a number to CHECK wheather its Positive, Negative or Zero :"<<endl;
    cin>>num;
    if (num > 0){
        cout<<"The entered number, " << num << " is Positive."<<endl;
    }
    else if (num == 0){
        cout<<"The entered number, " << num << " is Zero."<<endl;
    }
    else if (num < 0){
        cout<<"The entered number, " << num << " is Negative."<<endl;
    }
    cout<<"\nDo you wanna check another number?? (y/n)";
    cin>>choice;
    }while (choice=='y'||choice=='Y');
    return 0;
}
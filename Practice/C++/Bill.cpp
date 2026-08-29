#include <iostream>
using namespace std;
int main (){
    double units, bill;
    char choice;
    cout <<"CALCULATE ELECTRICITY BILL"<<endl;
    do{
        cout <<"\n enter the number of Units used : ";
        cin >> units;
        if (units <=100){
            cout<<"\n The Bill Amount is : Rs " << units*2 << endl;
        }
        else if (units <=200){
            cout<<"\n The Bill Amount is : Rs " << (100*2)+(units-100)*3<<endl;
        }
        else if (units > 200){
            cout<<"\n The Bill Amount is : Rs " <<(100*2)+(100*3)+(units-200)*5<<endl;
        }
        cout <<"\n Do you wanna calculate another bill? (y/n)";
        cin >> choice;
    }while (choice == 'y'||choice=='Y');
    return 0;
    }

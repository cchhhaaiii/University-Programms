#include <iostream>
using namespace std;

int main (){
    int age;
    cout << "Enter the Person's Age : " << endl;
    cin >> age;
    if (age < 18){
        cout << "The Person is a Minor.";
    }
    else if (age >= 18 && age <60){
        cout << "The Person is a Major.";
    }
    else if (age >= 60){
        cout << "The Person is a Senior Citizen.";
    }
    return 0;
}
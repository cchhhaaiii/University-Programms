// slab wise tariff bill
#include <iostream>
using namespace std;

int main (){
    int units;
    cout << "Enter the Units Consumed :";
    cin >> units;
    if (units <= 100) {
        cout << "The Total Bill amount is : " << units * 2 << endl;
    }
    else if (units <= 200) {
        cout << "The Total Bill amount is : " << (100*2) + (units-100) * 3 << endl;
    }
    else {
        cout << "The Total Bill amount is : " << (100*2) + (100*3) + (units - 200) * 5 << endl;
    }
    return 0;
}
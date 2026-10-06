#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0.0;
    char choice;

    do {
        cout << "Enter units consumed: ";
        cin >> units;

        if (units <= 100) {
            bill = units * 2.0;
        } 
        else if (units <= 200) {
            bill = (100 * 2.0) + (units - 100) * 3.0;
        } 
        else {
            bill = (100 * 2.0) + (100 * 3.0) + (units - 200) * 5.0;
        }

        cout << "Total Electricity Bill: Rs " << bill << endl;

        cout << "Want to calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    char dayCode;
    
    cout << "Enter day code (m, t, w, h, f, s, u): " << endl;
    cout << "m = Monday" << endl;
    cout << "t = Tuesday" << endl;
    cout << "w = Wednesday" << endl;
    cout << "h = Thursday" << endl;
    cout << "f = Friday" << endl;
    cout << "s = Saturday" << endl;
    cout << "u = Sunday" << endl;
    cout << "Enter choice: ";
    cin >> dayCode;
    dayCode = tolower(dayCode);

    switch (dayCode) {
        case 'm':
            cout << "Monday is Day 1 of the week." << endl;
            break;
        case 't':
            cout << "Tuesday is Day 2 of the week." << endl;
            break;
        case 'w':
            cout << "Wednesday is Day 3 of the week." << endl;
            break;
        case 'h':
            cout << "Thursday is Day 4 of the week." << endl;
            break;
        case 'f':
            cout << "Friday is Day 5 of the week." << endl;
            break;
        case 's':
            cout << "Saturday is Day 6 of the week." << endl;
            break;
        case 'u':
            cout << "Sunday is Day 7 of the week." << endl;
            break;
        default:
            cout << "Invalid code entered!" << endl;
    }

    return 0;
}
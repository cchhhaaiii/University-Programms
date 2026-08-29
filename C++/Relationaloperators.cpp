#include <iostream>
using namespace std;

int main (){
    int x = 5;
    int y = 10;

    // Greater than
    bool isGreater = x > y;
    cout << "Is x greater than y? " << isGreater << endl;

    // Less than
    bool isLess = x < y;
    cout << "Is x less than y? " << isLess << endl;

    // Greater than or equal to
    bool isGreaterOrEqual = x >= y;
    cout << "Is x greater than or equal to y? " << isGreaterOrEqual << endl;

    // Less than or equal to
    bool isLessOrEqual = x <= y;
    cout << "Is x less than or equal to y? " << isLessOrEqual << endl;

    // Equal to
    bool isEqual = x == y;
    cout << "Is x equal to y? " << isEqual << endl;

    // Not equal to
    bool isNotEqual = x != y;
    cout << "Is x not equal to y? " << isNotEqual << endl;
    return 0;
}
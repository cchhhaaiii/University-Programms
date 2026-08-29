#include <iostream>
using namespace std;

int main () {
    int a = 5;
    int b = 10; 

    // Logical AND
    bool logicalAnd = (a < b) && (b > 0);
    cout << "Logical AND: " << logicalAnd << endl;

    // Logical OR
    bool logicalOr = (a > b) || (b > 0);
    cout << "Logical OR: " << logicalOr << endl;

    // Logical NOT
    bool logicalNot = !(a < b);
    cout << "Logical NOT: " << logicalNot << endl;

    return 0;
}
#include <iostream>
using namespace std;

inline int larger(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Larger number = " << larger(num1, num2);

    return 0;
}

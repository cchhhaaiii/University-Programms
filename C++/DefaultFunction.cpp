#include <iostream>
#include <cmath>
using namespace std;

double compoundInterest(double p, double r = 5, double t = 2)
{
    double amount;

    amount = p * pow((1 + r / 100), t);

    return amount - p;
}

int main()
{
    double principal;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Compound Interest = "
         << compoundInterest(principal);

    return 0;
}

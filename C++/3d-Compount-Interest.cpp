#include <iostream>
#include <cmath>
using namespace std;

double compoundinterest (double p, double r = 5, double t = 2) {
    return p*pow(1+r/100, t)-p;
}
int main (){
    double p;
    cout<<"Enter the principle amount :";
    cin>>p;
    cout<<"The Compound Interest is :" << compoundinterest(p);
    return 0;
}   



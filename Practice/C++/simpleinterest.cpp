#include <iostream>
using namespace std;
float simpleinterest (float p, float r, float t){
    return p*r*t/100;
}
int main (){
    float p, r, t;
    cout << "Enter Principle Amount, Rate of Interest and Time :";
    cin >> p >> r >> t;
    cout << "The Simple Interest is :" << simpleinterest(p, r, t);
    return 0;
}
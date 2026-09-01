#include <iostream>
using namespace std;

int main (){
    int i =0, num;
    cout << "Enter an upper limit : ";
    cin >> num;
    while (i++ <= num)
    {
       if (i%5==0)
          continue;
    else 
    
        cout << i << endl;
    }
}
    
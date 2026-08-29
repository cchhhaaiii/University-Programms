#include <iostream>
using namespace std;

int main (){
    string name;
    getline (cin, name); // reads an entire line of text from an input stream
    cout <<"Hello, " << name << "!!!";
    return 0;
}
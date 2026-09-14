// check if its vowel or conosnents 
#include <iostream>
using namespace std;

int main (){
    char ch;
    cout << "Enter a character to check wheather its Vowel or Consonent :";
    cin >> ch;
    ch = tolower(ch);
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':
        cout << "The entered character " << ch << " is a Vowel." << endl;
        break;
        default:
        cout << "The entered character " << ch << " is a Consonent." << endl;
    }
    return 0;
}
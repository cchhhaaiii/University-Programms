#include <iostream>
using namespace std;
int main (){
    char ch, choice;
    do {
    cout<<"Enter a letter to check if its a Vowel or a Cosonent: ";
    cin >> ch;
    ch = tolower(ch);
    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<ch<<" is a Vowel." << endl;
        break;
        default :
        cout <<ch<<" is a Consonent." << endl;
    } 
    cout<<"\nDo you wanna check if another letter is a Vowel or a Consonent? (y/n)";
    cin >> choice;
    } while (choice == 'y'||choice == 'Y');
    return 0;
    }

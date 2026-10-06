#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch);
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << ch << " is a Vowel." << endl;
                break;
            default:
                cout << ch << " is a Consonant." << endl;
        }
    return 0;
}
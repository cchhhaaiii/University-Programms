//C++
#include <iostream>
using namespace std;

int main() {
    char choice;
    string name;
    do {
    cout << "Enter name to be greeted: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;
    cout << "\nDo you want to greet another person? (y/n): ";
    cin >> choice;
    cin.ignore();
} while (choice == 'y' || choice == 'Y');
    return 0;
}
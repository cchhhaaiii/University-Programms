#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    void accept() {
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter name: ";
        getline(cin >> ws, name);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll number: " << rollNumber;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;

public:
    Student(int r, string n) {
        rollNumber = r;
        name = n;
    }

    void display() {
        cout << "Roll number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Anita");
    Student s2(s1);

    cout << "First student:\n";
    s1.display();

    cout << "\nCopied student:\n";
    s2.display();

    return 0;
}
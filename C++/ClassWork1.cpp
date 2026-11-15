#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;

    void getRollNo() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Test : virtual public Student {
public:
    int marks = 85;
};

class Sports : virtual public Student {
public:
    int score = 10;
};

class Result : public Test, public Sports {
public:
    void display() {
        cout << "Roll number: " << rollNo << endl;
        cout << "Academic marks: " << marks << endl;
        cout << "Sports score: " << score << endl;
        cout << "Total: " << marks + score << endl;
    }
};

int main() {
    Result r;
    r.getRollNo();
    r.display();

    return 0;
}
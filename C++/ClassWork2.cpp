#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
};

class Test : virtual public Student {
public:
    int marks;
};

class Sports : virtual public Student {
public:
    int score;
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

    r.rollNo = 101;
    r.marks = 85;
    r.score = 10;

    r.display();

    return 0;
}
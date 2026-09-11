#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNumber;
};

int main() {
    Student student1;
    Student student2;
    Student student3;

    student1.name = "Alice";
    student1.rollNumber = 101;

    student2.name = "Bob";
    student2.rollNumber = 102;

    student3.name = "Charlie";
    student3.rollNumber = 103;

    cout << student1.name << "'s ID is " << student1.rollNumber << endl;
    cout << student2.name << "'s ID is " << student2.rollNumber << endl;
    cout << student3.name << "'s ID is " << student3.rollNumber << endl;

    return 0;
}

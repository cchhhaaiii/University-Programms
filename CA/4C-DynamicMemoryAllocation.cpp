#include <iostream>
using namespace std;

struct Student {
    string name;
    int regno;
    float tot_marks;
};

int main() {
    Student *ptr = new Student;

    cout << "Enter name: ";
    getline(cin, ptr->name);

    cout << "Enter reg no and marks: ";
    cin >> ptr->regno >> ptr->tot_marks;

    cout << "\nDetails - Name: " << ptr->name 
         << " | RegNo: " << ptr->regno 
         << " | Marks: " << ptr->tot_marks << "\n";

    delete ptr;
    ptr = nullptr;

    return 0;
}
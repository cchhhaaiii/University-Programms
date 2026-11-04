#include <iostream>
#include <string>
using namespace std;

class person {
protected:
    string name;
    int age;
public:
    void inputperson(string n, int a) {
        name = n;
        age = a;
    }
    void displayperson() {
        cout << "Name: " << name << "Age: " << age;
    }
};

class employee {
protected:
    int empId;
    double salary;
public:
    void inputemployee(int id, double s) {
        empId = id;
        salary = s;
    }
    void displayemployee() {
        cout << "Emp ID: " << empId << "Salary: " << salary;
    }
};

class Manager : public person, public employee {
private:
    string department;
public:
    void input(string d) {
        department = d;
    }
    void display() {
        displayperson();
        displayemployee();
        cout << "Department: " << department;
    }
};

int main() {
    Manager m;
    m.inputperson("Yuva", 30);
    m.inputemployee(101, 75000);
    m.input("IT");
    m.display();
    return 0;
}
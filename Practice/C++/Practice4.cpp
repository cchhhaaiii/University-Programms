#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    double basicSalary;

public:
    void accept() {
        cout << "Enter employee ID: ";
        cin >> employeeId;

        cout << "Enter employee name: ";
        getline(cin >> ws, name);

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    void displaySalary() {
        double hra = basicSalary * 0.20;
        double da = basicSalary * 0.10;
        double grossSalary = basicSalary + hra + da;

        cout << "\nEmployee ID: " << employeeId;
        cout << "\nName: " << name;
        cout << "\nBasic salary: " << basicSalary;
        cout << "\nHRA: " << hra;
        cout << "\nDA: " << da;
        cout << "\nGross salary: " << grossSalary << endl;
    }
};

int main() {
    Employee e;
    e.accept();
    e.displaySalary();

    return 0;
}

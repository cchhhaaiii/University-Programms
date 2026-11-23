#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    string designation;

public:
    Employee(int id, const string& n, const string& d)
        : employeeId(id), name(n), designation(d) {}

    void displayEmployee() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
    }
};

class Scientist : public Employee {
private:
    int journals;
    int conferences;

public:
    Scientist(int id, const string& name, const string& designation,
              int journalCount, int conferenceCount)
        : Employee(id, name, designation),
          journals(journalCount),
          conferences(conferenceCount) {}

    int totalPublications() const {
        return journals + conferences;
    }

    void display() const {
        displayEmployee();
        cout << "Journal publications: " << journals << endl;
        cout << "Conference publications: " << conferences << endl;
        cout << "Total publications: " << totalPublications() << endl;
    }
};

int main() {
    Scientist scientist(101, "Riya Sharma", "Research Scientist", 8, 5);
    scientist.display();
    return 0;
}

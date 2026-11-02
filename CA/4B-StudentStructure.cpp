#include <iostream>
using namespace std;

struct Student {
    char name[30];
    int reg;
    float totm;
};

int main() {
    Student s[10], temp;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Student" << i + 1 << " (Name, RegNo, Marks): ";
        cin >> s[i].name >> s[i].reg >> s[i].totm;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].totm < s[j].totm) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    cout << "\nMerit List\n";
    for (int i = 0; i < n; i++) {
        cout << "Rank " << i + 1 << ": " << s[i].name 
             << " | Reg: " << s[i].reg 
             << " | Marks: " << s[i].totm << "\n";
    }

    return 0;
}
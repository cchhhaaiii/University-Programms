#include <iostream>
using namespace std;

class Number {
private:
    int a, b;

public:
    void accept() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void findLargest() {
        if (a > b) {
            cout << a << " is larger." << endl;
        } else if (b > a) {
            cout << b << " is larger." << endl;
        } else {
            cout << "Both numbers are equal." << endl;
        }
    }
};

int main() {
    Number n;
    n.accept();
    n.findLargest();

    return 0;
}

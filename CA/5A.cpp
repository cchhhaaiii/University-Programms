#include <iostream>
using namespace std;

class ar {
private:
    float a;
    int b;

public:
    void input() {
        cout << "Enter a float and an integer value: ";
        cin >> a >> b;
    }

    void add() const { cout << "Addition: " << a + b << "\n"; }
    void sub() const { cout << "Subtraction: " << a - b << "\n"; }
    void mul() const { cout << "Multiplication: " << a * b << "\n"; }

    void div() const {
        if (b == 0)
            cout << "Division is not possible: divisor is zero.\n";
        else
            cout << "Division: " << a / b << "\n";
    }

    void display() const {
        cout << "Values: " << a << " and " << b << "\n";
    }
};

int main() {
    ar obj;
    obj.input();
    obj.display();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}
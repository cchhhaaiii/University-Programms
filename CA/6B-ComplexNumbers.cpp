#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0)
        : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    bool operator==(const Complex& other) const {
        return real == other.real && imag == other.imag;
    }

    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);
    Complex sum = c1 + c2;

    cout << "First number: ";
    c1.display();
    cout << "Second number: ";
    c2.display();
    cout << "Sum: ";
    sum.display();

    if (c1 == c2)
        cout << "The two complex numbers are equal.\n";
    else
        cout << "The two complex numbers are not equal.\n";

    return 0;
}

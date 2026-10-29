#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    void accept() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void display() {
        const float PI = 3.14159f;

        cout << "Area = " << PI * radius * radius << endl;
        cout << "Circumference = " << 2 * PI * radius << endl;
    }
};

int main() {
    Circle c;
    c.accept();
    c.display();

    return 0;
}

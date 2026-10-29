#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    void accept() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    void display() {
        cout << "Area = " << length * breadth << endl;
        cout << "Perimeter = " << 2 * (length + breadth) << endl;
    }
};

int main() {
    Rectangle r;
    r.accept();
    r.display();

    return 0;
}

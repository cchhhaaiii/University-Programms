#include <iostream>
using namespace std;

class Box {
private:
    int length, breadth, height;

public:
    // Default constructor
    Box() {
        length = breadth = height = 1;
    }

    // Constructor for a cube
    Box(int side) {
        length = breadth = height = side;
    }

    // Constructor for a rectangular box
    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    void displayVolume() {
        cout << "Volume = " << length * breadth * height << endl;
    }
};

int main() {
    Box b1;
    Box b2(3);
    Box b3(2, 3, 4);

    b1.displayVolume();
    b2.displayVolume();
    b3.displayVolume();

    return 0;
}
#include <iostream>
using namespace std;
class Box {
private:
    int length, breadth, height;
public:
    Box() {
        length = breadth = height = 1;
    }
    Box(int side) {
        length = breadth = height = side;
    }
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
    int choice;

    cout << "\n1 - Default box";
    cout << "\n2 - Cube";
    cout << "\n3 - Rectangular box";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        Box b;
        b.displayVolume();
    }
    else if (choice == 2) {
        int side;
        cout << "Enter side: ";
        cin >> side;

        Box b(side);
        b.displayVolume();
    }
    else if (choice == 3) {
        int l, br, h;
        cout << "Enter length, breadth, height: ";
        cin >> l >> br >> h;

        Box b(l, br, h);
        b.displayVolume();
    }
    else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

class Box {
private:
    float length, width, height;

public:
    Box() : length(1), width(1), height(1) {
        cout << "Default constructor called\n";
    }

    Box(float l, float w, float h) : length(l), width(w), height(h) {
        cout << "Parameterized constructor called\n";
    }

    Box(const Box& other) : length(other.length), width(other.width), height(other.height) {
        cout << "Copy constructor called\n";
    }

    void display() const {
        cout << "Dimensions: " << length << "x" << width << "x" << height 
             << " | Volume: " << length * width * height << "\n";
    }
};

int main() {
    Box box1;
    Box box2(2, 3, 4);
    Box box3(box2);

    box1.display();
    box2.display();
    box3.display();

    return 0;
}
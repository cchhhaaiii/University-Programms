#include <iostream>
using namespace std;

const double PI = 3.14159;

// Volume of sphere
double volume(double r)
{
    return (4.0 / 3.0) * PI * r * r * r;
}

// Volume of cylinder
double volume(double r, double h)
{
    return PI * r * r * h;
}

// Volume of cuboid
double volume(double l, double b, double h)
{
    return l * b * h;
}

int main()
{
    double r, h, l, b;

    cout << "Enter radius of sphere: ";
    cin >> r;
    cout << "Volume of Sphere = " << volume(r) << endl;

    cout << "\nEnter radius and height of cylinder: ";
    cin >> r >> h;
    cout << "Volume of Cylinder = " << volume(r, h) << endl;

    cout << "\nEnter length, breadth and height of cuboid: ";
    cin >> l >> b >> h;
    cout << "Volume of Cuboid = " << volume(l, b, h) << endl;

    return 0;
}

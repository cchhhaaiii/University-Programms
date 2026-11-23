#include <cmath>
#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    virtual double cal_area() const = 0;
    virtual double cal_peri() const = 0;

    virtual ~Shape() = default;
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double cal_area() const override {
        return side * side;
    }

    double cal_peri() const override {
        return 4 * side;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double cal_area() const override {
        return length * width;
    }

    double cal_peri() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double a, b, c;

public:
    Triangle(double side1, double side2, double side3)
        : a(side1), b(side2), c(side3) {}

    double cal_area() const override {
        double s = cal_peri() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    }

    double cal_peri() const override {
        return a + b + c;
    }
};

void display(const string& name, const Shape& shape) {
    cout << name << " area: " << shape.cal_area() << endl;
    cout << name << " perimeter: " << shape.cal_peri() << endl;
}

int main() {
    Square square(4);
    Rectangle rectangle(5, 3);
    Triangle triangle(3, 4, 5);

    display("Square", square);
    display("Rectangle", rectangle);
    display("Triangle", triangle);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    double price;

public:
    Book() {
        title = "C++ Programming";
        price = 450;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;
    b.display();

    return 0;
}
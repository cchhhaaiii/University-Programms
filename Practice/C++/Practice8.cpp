#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    double price;

public:
    Book(string t, double p) {
        title = t;
        price = p;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1("Harry Potter and the Philosopher's Stone", 450);
    Book b2("Harry Potter and the Chamber of Secrets", 480);
    Book b3("Harry Potter and the Prisoner of Azkaban", 520);

    b1.display();
    b2.display();
    b3.display();

    return 0;
}
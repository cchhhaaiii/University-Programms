#include <iostream>
using namespace std;
class Counter {
private:
    int count;
public:
    Counter(int value = 0) : count(value) {}

    Counter& operator++() {
        ++count;
        return *this;
    }

    Counter operator++(int) {
        Counter old = *this;
        count++;
        return old;
    }

    Counter& operator--() {
        --count;
        return *this;
    }

    Counter operator--(int) {
        Counter old = *this;
        count--;
        return old;
    }

    void display() const {
        cout << count << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Initial value: ";
    c.display();

    cout << "Returned by ++c: ";
    (++c).display();              

    cout << "Returned by c++: ";
    (c++).display();              
    cout << "Current value: ";
    c.display();                 

    cout << "Returned by --c: ";
    (--c).display();              

    cout << "Returned by c--: ";
    (c--).display();            
    cout << "Current value: ";
    c.display();                

    return 0;
}

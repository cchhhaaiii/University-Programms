#include <iostream>
#include <string>
using namespace std;

class Demo {
private:
    string name;

public:
    Demo(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    ~Demo() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Demo d1("Object 1");
    Demo d2("Object 2");

    return 0;
}

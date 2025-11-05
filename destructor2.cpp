#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v) {
        value = v;
        cout << "Constructor called! Value = " << value << endl;
    }

    // Destructor
    ~Number() {
        cout << "Destructor called! Value = " << value << endl;
    }

    void square() {
        cout << "Square of " << value << " is " << (value * value) << endl;
    }
};

int main() {
    Number n1(5);  // Object n1 created
    n1.square();

    Number n2(10); // Another object n2
    n2.square();

    // Destructors will be called automatically when n1 and n2 go out of scope
    return 0;
}

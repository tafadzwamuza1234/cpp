#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called!" << endl;
    }

    void show() {
        cout << "Hello from Demo class." << endl;
    }
};

int main() {
    Demo obj; // Object created, constructor is called

    obj.show(); // Member function called

    // When main() ends, obj goes out of scope, destructor is automatically called
    return 0;
}

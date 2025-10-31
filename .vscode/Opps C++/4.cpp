#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called!" << endl;
    }

    ~MyClass() { // Destructor
        cout << "Destructor called!" << endl;
    }
};

int main() {
    MyClass obj; // Creating an object of MyClass
    return 0; // Destructor will be called when the program exits or obj goes out of scope
}

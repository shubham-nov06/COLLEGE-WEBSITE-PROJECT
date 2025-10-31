#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base class show function\n";
    }
};

class Derived : public Base {
public:
    void show() override { // Overriding the virtual function
        cout << "Derived class show function\n";
    }
};

int main() {
    Base* ptr;  // Pointer to base class
    Derived d;  // Derived class object

    ptr = &d;  // Base class pointer points to Derived object
    ptr->show(); // Calls Derived's overridden function (Runtime Polymorphism)

    return 0;
}
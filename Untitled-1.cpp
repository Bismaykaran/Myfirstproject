#include <iostream>
using namespace std;

class Base {
public:
    void show() { cout << "Base class function\n"; }
};

class Derived : public Base {
public:
    void display() { cout << "Derived class function\n"; }
};

int main() {
    Derived d;
    d.show();
    d.display();
    return 0;
}
#include <iostream>
using namespace std;

class Parent {
    int value;
public:
    Parent() {
        cout << "Parent default constructor called" << endl;
    }
    Parent(int p) {
        cout << "Parent parameterized constructor called with value: " << p << endl;
    }
};

class Child1 : public Parent {
public:
    Child1(int p) : Parent(p) {
        cout << "Child1 parameterized constructor called" << endl;
    }
};

class Child2 : public Parent {
public:
    Child2(int q) : Parent(q) {
        cout << "Child2 parameterized constructor called" << endl;
    }
};

int main() {
    Child1 c1(10);
    Child2 c2(20);
    return 0;
}


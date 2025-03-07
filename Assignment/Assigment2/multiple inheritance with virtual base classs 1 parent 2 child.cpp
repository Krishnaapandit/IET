#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A called" << endl;
    }
    void showA() {
        cout << "Function of A" << endl;
    }
};

class B : virtual public A {
public:
    B() {
        cout << "Constructor of B called" << endl;
    }
    void showB() {
        cout << "Function of B" << endl;
    }
};

class C : virtual public A {
public:
    C() {
        cout << "Constructor of C called" << endl;
    }
    void showC() {
        cout << "Function of C" << endl;
    }
};

int main() {
    B objB;  
    C objC;  

    cout << "Calling functions from B's object:\n";
    objB.showA();
    objB.showB();

    cout << "Calling functions from C's object:\n";
    objC.showA();
    objC.showC();

    return 0;
}


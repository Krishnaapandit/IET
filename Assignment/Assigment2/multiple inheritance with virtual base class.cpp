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

class B {
public:
    B() {
        cout << "Constructor of B called" << endl;
    }
    void showB() {
        cout << "Function of B" << endl;
    }
};

class C : public virtual A, public B {
public:
    C() {
        cout << "Constructor of C called" << endl;
    }
    void showC() {
        cout << "Function of C" << endl;
    }
};

int main() {
    C obj;  
    obj.showA();
    obj.showB();
    obj.showC();

    return 0;
}


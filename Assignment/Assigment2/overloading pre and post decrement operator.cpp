#include <iostream>
using namespace std;

class Counter {
private:
    int value;
public:
    Counter(int v = 0) : value(v) {}

    // Overloading Pre-decrement (--x)
    Counter& operator--() {
        --value;  
        return *this;  
	}
    // Overloading Post-decrement (x--)
    Counter operator--(int) {
        Counter temp = *this;  
        value--;  
        return temp;  
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c1(10);

    cout << "Original Value: \n";
    c1.display();

    cout << "Using Pre-decrement (--c1): \n";
    --c1;
    c1.display();

    cout << "Using Post-decrement (c1--): \n";
    c1--;
    c1.display();

    return 0;
}


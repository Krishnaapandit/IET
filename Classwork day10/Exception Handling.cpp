//Exception Handling
#include <iostream>
#include <stdexcept>
using namespace std;
int divide(int a, int b) {
    if (b == 0) {
        throw invalid_argument("division by zero");
    }
    return a / b;
}

int main() {
    try {
        int result = divide(1, 0);
        std::cout << result << std::endl;
    } 
	catch (invalid_argument& e) {
        std::cout << "An exception occurred: " << e.what() << std::endl;
    }
    return 0;
}


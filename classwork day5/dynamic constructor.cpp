#include <iostream>
using namespace std;
 class Demo {
    int* ptr;
 public:
      Demo()
    {
        //dynamically intialize ptr
        ptr = new int;
        *ptr = 20;
    }

    void display()
    {
        cout << *ptr << endl;
    }
};
 int main()
{
    Demo obj1;
    obj1.display();
}


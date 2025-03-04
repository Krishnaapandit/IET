// malloc and new
#include <iostream>
using namespace std;
 #include<stdlib.h>
class A {
    int a;
 
public:
    int* ptr;

    A()
    {
        cout << "Constructor was Called!"<< endl;           
    }
    
    ~A(){
    	cout<<"Deconstructor was called!"<<endl;
	}
};
 
int main()
{
 
    A* a = new A;  // difference between new and malloc iis malloc doesnt invoke constructor but new operator does invoke constructor
    cout << "Object of class A was "// typecasting require in malloc but not require in new operator.
        << "created using new operator!" << endl;
    delete a;// constructor will get called
 
    A* b = (A*)malloc(sizeof(A));
    cout << "Object of class A was created using malloc()!"<< endl;
 	free(b);//destructor will not get called.
    return 0;
}


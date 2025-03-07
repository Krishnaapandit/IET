#include <iostream>
using namespace std;
class W
{
	int a;
public:
	W()
	{
		cout<<"default constructor of W\n";
	}
		W(int a)
	{
		cout<<"parameterized construtor W\n";
		this->a=a;
	}
};
class X:virtual public W
{
	int b;
public:
	X()
	{
		cout<<"default constructor X\n";
	}
	X(int a,int b):W(a)
	{
		cout<<"parameterized constructor of X\n";
		this->b=b;
	}
};
class Y:virtual public W
{
	int c;
public:
	Y()
	{
		cout<<"default constructor of Y\n";
	}
	Y(int a,int c):W(a)
		{
			cout<<"parametrized constructor of Y\n";
			this->c=c;
		}
};
class Z:public X,public Y
{
	
public:
	Z()
	{
		cout<<"default constructor of Z\n";
	}
	Z(int a,int b,int c):X(a,b),Y(a,c),W(a)
		{
			cout<<"parameterized constructor of Z\n";
			
		}
};
int main()
{
    Z obj(10,20,30);
}



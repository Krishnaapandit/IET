#include<iostream>
using namespace std;
class A
{
	int a;
public:
	A(int);
 };
A::A(int p)
{
	cout<<"in para of A\n";
	cout<<p<<endl;
}
class B:public A
{
	int b;
public:
	
	B(int,int);
};
B::B(int p, int q):A(p) //error
{
	cout<<"in default of B\n";
	cout<<q<<endl;
}


int main()
{
	B obj(45,65);	
}


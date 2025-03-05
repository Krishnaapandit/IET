//Why base class's constructor is called on creating an object of derived class?
//case1 
#include<iostream>
using namespace std;

class A{
	int a;
public:
	A();
	void display();
};
A::A(){
	cout<<"default constructor\n";
	a=10;
}
void A::display(){
	cout<<a<<endl;
}

class B: public A{
	int b;
public:
	B();
	void display();
};
B::B(){
	cout <<"default constructor\n";
	b=20;
}
void B::display(){
	A::display();
	cout<<b<<endl;
}

int main(){
	B obj;
	obj.display();
}



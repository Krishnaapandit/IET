//Why base class's constructor is called on creating an object of derived class?
//case2
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
	a=0;
}
void A::display(){
	cout<<a<<endl;
}

class B: public A{
	int b;
public:
	B(int ,int);
	void display();
};
B::B(int p, int q){
	cout <<"default constructor\n";
	b=q;
}
void B::display(){
	A::display();
	cout<<b<<endl;
}

int main(){
	B obj(40,60);
	obj.display();
}



//Why base class's constructor is called on creating an object of derived class?
//case3
#include<iostream>
using namespace std;

class A{
	int a;
public:
	A(int);
	void display();
};
A::A(int p){
	cout<<"default constructor\n";
	a=p;
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
B::B(int p, int q):A(p){
	cout <<"default constructor\n";
	b=q;
}
void B::display(){
	A::display();
	cout<<b<<endl;
}

int main(){
	B obj(60,40);
	obj.display();
}



#include<iostream>
using namespace std;
class P;
class K{
	int a;
	public:
		int geta();
		friend void abc(K&, P&);
};
int K::geta(){
	cout<<"enter the value of a\n";
	cin>>a;
}
class P{
	int b;
	public:
		int getb();
		friend void abc(K&, P&);
};

int P::getb(){
	cout<<"enter the value of b\n";
	cin>>b;
}

void abc(K& x,P& y){
	if (x.a>y.b)
		cout<<"x.a is greater"<<x.a<<"\n";
	if (y.b>x.a)
		cout<<"y.b is greater"<<y.b<<"\n";
	else
		cout<<"both are equal \n";	
}

int main(){
	K obj;
	P obj1;
	obj.geta();
	obj1.getb();
	abc(obj,obj1);
}

//Address testing using this keyword
#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		void show(){
			a=20;
			b=10;
		cout<<"address\n"<<this<<endl;
		cout<<"value\n"<<a<<endl;
		cout<<"value\n"<<b<<endl;
		}
};

int main(){
	test t;
	cout<<"address of t\n"<<&t<<endl;
	t.show();
	
}

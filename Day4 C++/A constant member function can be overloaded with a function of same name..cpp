//A constant member function can be overloaded with a function of same name.
#include<iostream>
using namespace std;

class tempo{
	public:
		void show();
		void show()const;
};
void tempo::show(){
	cout<<"non constant\n";
}
void tempo::show()const{
	cout<<"constant\n";	
}
int main(){
	tempo t;
	t.show();
	const tempo t1;
	t1.show();
	
}

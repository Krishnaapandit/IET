// constructor in multilevel inheritance
#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Base class A constructor\n";
		}	
		~A(){
			cout<<"Base class A destructor\n";
	}
};
class B: public A
{
	public:
		B(){
			cout<<"Base class B constructor\n";
		}	
		~B(){
			cout<<"Base class B destructor\n";
	}
};
class C: public B{
	public:
		C(){
			cout<<"Base class C constructor\n";
		}	
		~C(){
			cout<<"Base class C destructor\n";
	}
};

class D: public C{
	public:
		D(){
			cout<<"Base class C constructor\n";
		}	
		~D(){
			cout<<"Base class C destructor\n";
	}
};


int main(){
	C obj;
	return 0;
}

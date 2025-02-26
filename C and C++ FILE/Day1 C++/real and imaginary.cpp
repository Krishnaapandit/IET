//real and imaginary number

#include<iostream>
using namespace std;

class formula{
	
	int real, imaginary;
	public:
		
	void accept(){
		cout<<"Enter the number";
		cin>>real>>imaginary;
		
	}	
	void display(){
		cout<<"complex number is"<<real<<"+"<<imaginary<<"i"<<endl;
	}
	void setReel(int r){
		real=r;
    }
    int getReel(){
    	return real;
	}
};
int main(){
	
	formula f1;
	f1.accept();
	f1.display();
	f1.setReel(6);
	f1.display();
	
}

#include<iostream>
using namespace std;
class Complex{
	int real, img;
	public:
		void show();
		Complex();
		Complex(int, int);
};
void Complex::show(){
	cout<<"the real and imaginary no are "<<real<<"+"<<img<<"i"<<endl;
}
Complex::Complex()
{
	cout<<"Default Constructor\n";
	cout<<"Accept the elements\n";
	cin>>real;
	cin>>img;
}
Complex::Complex(int r, int i){
	real=r;
	img=i;
}
int main(){
	Complex c1;
	c1.show();
	Complex c2(2,9);
	c2.show();
}

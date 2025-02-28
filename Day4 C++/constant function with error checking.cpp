//constant function real and imaginary
#include <iostream>
using namespace std;
#include<string.h>
class Complexs{
	int real;
	int img;
	public:
		void accept();
		void setReal(int);
		int getImg() const;
		void show()const {
			cout<<"complex no\n"<<real<<"+"<<img<<"i";		
		}
		Complexs (int r , int i){
			real=r;
			img=i;
		}
};

void Complexs::accept(){
	cout<<"enter the number\n";
	cin>>real>>img;
}
void Complexs::setReal(int r){
	real=r;
}
int Complexs::getImg()const{
	return img;
}
int main(){
	const Complexs a1(10,5);
	//a1.setReal(11); // error due to const
	
	Complexs a2(11,5);
	a2.setReal(55); 
 	a1.show();
 	a2.show();
	cout<<"\nimaginary part is "<<a1.getImg();

}

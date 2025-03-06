#include<iostream>
using namespace std;

class Complex{
	int real,img;
	public:
		Complex(){
			img=real =0;
		}
		Complex(int real, int img){
			this->real = real;
			this->img = img;
		}
		
		void display(){
			cout<<real<<" + "<<img<<"i"<<endl;
		}
		
		Complex operator--(){
			this->real = this->real-1;
			this->img = this->img-1;
			return *this;
		}
		
		Complex operator--(int){
			Complex temp = *this;
			this->real = this->real-1;
			this->img = this->img-1;
			return temp;
		}
};

int main(){
	Complex c1(2,3);

	Complex c2;
	c2 = --c1;
	c2.display();
	Complex c3;
	c3 = c1--;
	c3.display();
	c1.display();
}

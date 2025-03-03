#include<iostream>
using namespace std;
class Cdate
{
	int dd,mm,yy;
	public:
		Cdate(int,int,int);
		/*Cdate(){
			dd=25;
			mm=4;
			yy=2024;
		}*/
		void display()
		{
			cout<<"display today's date\n";
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};

Cdate::Cdate(int d,int m ,int y)  // parameterized constructor can be define inside and outside the class
{
	cout<<"para constructor called\n";
	dd=d;
	mm=m;
	yy=y;
	
}
int main()
{
	//Cdate d1;//error because when constructor is define explicitly and no default is define but if we call the default constructor then it will give error.
	//d1.display();
	Cdate d1(26,4,2025);
	d1.display();
}

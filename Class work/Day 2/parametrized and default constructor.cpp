#include<iostream>
using namespace std;
class Ddate{
	int dd,mm,yy;
	public:
		Ddate(int,int,int);
		Ddate(){
		 	cout<<"Default constructor called\n";
		 	dd=15;
		 	mm=7;
		 	yy=2025;
		 }
		void display(){
			cout<<"todays date is:"<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
Ddate::Ddate(int d, int m, int y ){
	cout<<"parameterized constructor called\n";
	dd=d;
	mm=m;
	yy=y;
}
int main(){
	Ddate d1;
	d1.display();
	Ddate d2(26, 1,2025);
	d2.display();
}

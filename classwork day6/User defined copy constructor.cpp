// user defined copy constructor
#include <iostream>
using namespace std;
class Cdate{
	int dd,mm,yy;
	public:
		void show();
		Cdate(Cdate&);
		Cdate(int,int,int);
};
Cdate::Cdate(int d, int m, int y){
	dd=d;
	mm=m;
	yy=y;
}
Cdate::Cdate(Cdate& d_new){   //user defined copy constructor
	this->dd=d_new.dd;
	this->mm=d_new.mm;
	this->yy=d_new.yy;
	
}
void Cdate::show(){
	cout<<"todays date "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main(){
	Cdate d1(06,3,2025);
	Cdate d2(d1); 
	d1.show();
	d2.show();
}

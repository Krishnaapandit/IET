//distinguish object's instance members from local variables
#include<iostream>
using namespace std;
class date{
	int dd,mm,yy;
	public:
		void show();
		date(int,int,int);
		date();
};
date::date(){
	cout<<this->dd<<this->mm<<this->yy;
	}
date::date(int dd,int mm, int yy){
	this->dd=dd;
	this->mm=mm;
	this->yy=yy;
}
void date::show(){
	cout<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<"\n";
	
}
int main(){
	date d(21,1,1981);
	d.show();
	date d1(21,1,1798);
	d1.show();
}

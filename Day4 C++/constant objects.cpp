// Constant object: to create a constant object use constant keyword
#include<iostream>
using namespace std;
#include<string.h>

class Cdate{
	
	int year, month, day;
	public:
		int getDay()const;
		Cdate(int y,int m, int d){
			year=y;
			month=m;
			day=d;
		}
		void display()const{
		cout<<"\n Display Date ";
		cout<<year<<"/"<<month<<"/"<<day;
		}
		int setDay(int d){
			day=d;
		}
};
int Cdate::getDay()const{
	return day;
}
int main(){
	const Cdate A1(2025,02,27);
	A1.display();
	Cdate a2(2024, 02 ,24);
	a2.setDay(20);
	a2.getDay();
	a2.display();
}

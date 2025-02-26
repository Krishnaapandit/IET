#include<iostream>
using namespace std;
#include<string.h>

class Tarik{
	int dd, mm ,yy;
	
	public:
	void accept(){
		cout<<"accept the date\n";
		cin>>dd>>mm>>yy;
		}
	void display(){
		cout<<"Todays date is\n";
		cout<<dd<<"/"<<mm<<"/"<<yy;
	}	
};

int main(){
	Tarik t1;
	cout<<"size of t1 "<<sizeof(t1 )<<endl;
	cout<<"size of Tarik "<<sizeof(Tarik )<<endl;
	
	t1.accept();
	t1.display();
}

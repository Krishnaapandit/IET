#include<iostream>
using namespace std;
class Cdate{
	int dd,mm,yy;
	public:
		void display(){    //here default constructor will get call by the compiler.
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
int main(){
	Cdate d1;
	d1.display();
}




//constant function defined outside the class
#include<iostream>
using namespace std;

class example{
	int x;
	public:
		void setData(int);
		int getData()const;
};
void example::setData(int a){
	x=a;
}
int example::getData()const{
	return x;
}
int main(){
	example A;
	A.setData(10);
	cout<<A.getData();
}

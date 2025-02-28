#include<iostream>
using namespace std;
class ABC{
	public:
	int A;
	ABC(){
		A=10;
	}
};
int main(){
	const ABC D;
	cout<<D.A;
	//D.A=20; // because 
	//cout<<D.A;
	return 0;
	}

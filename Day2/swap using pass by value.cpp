// Swap using pass by value
#include<iostream>
using namespace std;

int main(){
	
	int a, b;
	cout<<"enter two value";
	
	cin>>a>>b;
	swap(a,b);
	cout<<"After the swap";
	cout<<a<<"\t"<<b;
	
}

int swap(int p, int q){
	int temp;
	temp= p;
	p=q;
	q= temp;
}

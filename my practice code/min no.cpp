#include <iostream>
using namespace std;
int main(){
	int a[5];
	int i,min;
	cout<<"accept the elements";
	for(i=0;i<=4;i++)
		cin>>a[i];
	min = a[0];
	for(i=0;i<=4;i++)
	{
		if(min>a[i]){
			min=a[i];
		}
	}
	cout<<"min no is"<< min<<endl;
}

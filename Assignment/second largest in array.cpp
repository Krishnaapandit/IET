#include <iostream>
using namespace std;
int main(){
	int a[5];
	int i,max,smax,temp;
	cout<<"accept the elements";
	for(i=0;i<=4;i++)
		cin>>a[i];
	max=a[0];//2
	smax=a[1];//3
	
	if (smax>max){
		int temp=smax;
		smax=max;
		max=temp;
	}
	for(i=0;i<=4;i++){
		if (max<a[i]){
			max=a[i];
		}
	}
	
	for(i=0;i<=4;i++){
		if (a[i]>smax&&a[i]<max){
		
		smax=a[i];
		}

	}
	cout<<max<<"\n";
	cout<<smax;
}

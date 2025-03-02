#include <iostream>
using namespace std;
int main(){
	int a[5];
	int i,max;
	cout<<"accept the elements";
	for(i=0;i<=4;i++)
		cin>>a[i];
	max=a[0];//2

	for(i=0;i<=4;i++){
		if (max<a[i]){
			max=a[i];
		}
	}
	
	cout<<"max no is "<<max<<"\n";

}

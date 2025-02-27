#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	int i,j;
	
	cout<<"enter the elements \n";
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
	int max=a[0][0];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (max<a[i][j]){
				max=a[i][j];
			}
		} cout<<endl;
	}
	cout<<"max value in 2d array is"<<max;
}

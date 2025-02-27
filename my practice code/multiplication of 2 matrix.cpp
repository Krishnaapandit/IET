#include<iostream>
using namespace std;
int main(){
	int a[3][3], b[3][3], c[3][3];
	int i,j;
	cout<<"enter the for a \n";
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"enter elements for b\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>b[i][j];
		}
	}
	// matrix addition
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	c[i][j]=a[i][j]*b[i][j];
		}
	}
	
	cout<<"addition of a and b is\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

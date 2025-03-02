#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	int i, j;
	cout<<"enter the elements of \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}	
	
	cout<<"printing the original value of matrix\n";
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				cout<<a[i][j]<<"\t";
			}
			cout<<endl;
		}	
	
	cout<<"printing the transpose value of matrix \n";
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				cout<<a[j][i]<<"\t";
			}
			cout<<endl;
		}	
	return 0;
}

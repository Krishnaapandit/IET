// if a(m *n) and b(n*p) then c is c(m*p)
//C[i][j]=A[i][0]×B[0][j]+A[i][1]×B[1][j]+...+A[i][n-1]×B[n-1][j]
#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j,k;
	
	cout<<"enter the array elements\n";
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}cout<<endl;
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>b[i][j];
		}cout<<endl;
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=0;
			for(k=0;k<3;k++){
				c[i][j]+=a[i][k]*b[k][j];
				
			}
			
		}cout<<endl;
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<c[i][j]<<"\t";
		}cout<<endl;
	}
}

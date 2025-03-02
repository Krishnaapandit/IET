//matrix addition using pointer notation
#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j;
	
	cout<<"enter the matrix\n";
	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>*(*(a+i)+j);
		}cout<<endl;
	}
	cout<<"enter the 2nd matrix \n";
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>*(*(b+i)+j);
		}cout<<endl;
	}

	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
			cout<<*(*(c+i)+j)<<"\t";
		}cout<<endl;
	}

}

/*
//matrix addition
#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j;
	
	cout<<"enter the matrix\n";
	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}cout<<endl;
	}
	cout<<"enter the 2nd matrix \n";
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>b[i][j];
		}cout<<endl;
	}

	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j];
		}cout<<endl;
	}

}
*/




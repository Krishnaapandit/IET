// swapping using int*
#include <iostream>  
using namespace std; 
void swap(int*,int*);
int main()  
{  
	int y,z;
	cout<<"enter values of y & z\n"<<endl;
	cin>>y>>z;
	swap(&y,&z);
	cout<<"after swapping "<<endl;
	cout<<"values of y & z is "<<y<<"\t"<<z<<endl;
}
void swap(int* y,int* z)
{
	int temp;
	temp=*y;
	*y=*z;
	*z=temp;
	
}



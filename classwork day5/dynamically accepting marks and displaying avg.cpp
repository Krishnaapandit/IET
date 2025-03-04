//accept name, subjects and marks dynamically from the user 
#include<iostream>
using namespace std;
int main()
{
 	int a,b,i,sum=0;
 	float avg;
	cout<<"accept no of subjects\n";
	cin>>a;//5
	cout<<"accept no of character\n";
	cin>>b;//4
	int* p_marks=new int[a];
	char* p_name=new char[b+1];
	cout<<"enter marks\n";
	for(i=0;i<a;i++)
	cin>>p_marks[i];
	for(i=0;i<a;i++)
	sum=sum+p_marks[i];
	avg=(float)sum/n;
	cout<<"enter name\n";
	cin>>p_name;
	cout<<"name of the student is "<<p_name<<endl;
	cout<<"average is "<<avg<<endl;
	delete[] p_marks;
	delete[] p_name;
} 

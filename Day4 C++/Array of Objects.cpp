//array of objects
#include<iostream>
using namespace std;
class Student{
	int id;
	char name[30];
	public:
		void getdata();
		void putdata();
};
void Student::getdata(){
	cout<<"Your ID: ";
	cin>>id;
	cout<<"Enter the name : ";
	cin>>name; 
}
void Student::putdata(){
	cout<<id<<" ";
	cout<<name<<" ";
}
int main(){
	Student stu[30];
	int n ,i;
	cout<<"Enter number of Student: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	stu[i].getdata();
	
	cout<<"Student Data:";
	
	for(i = 0; i < n; i++)
    stu[i].putdata();
   
}

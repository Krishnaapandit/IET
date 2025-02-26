// write a program to print name, roll no, marks of a student using class
#include<iostream>
using namespace std;
#include<string.h>
class student
{
	int rollno;
	int marks;
	char name[40];

public:
	void display(int r,int m,char* ptr){
	
		rollno=r;
		strcpy(name,ptr);
		marks=m;
		cout<<r<<endl;
		cout<<m<<endl;
		cout<<name<<endl;
	}	
};
int main()
{
	student a;
	a.display(100,90,"Krishna");
}


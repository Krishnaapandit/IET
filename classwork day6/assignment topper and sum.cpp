#include<iostream>
using namespace std;
#include<string.h>
class Student
{
	int rollno;
	int marks[5];
	int sum=0;
	public:
		float avg;	
		char name[20];
		
		void accept()
		{
			int i, m;
			cout<<"enter rollno for student\n";
			cin>>rollno;
			cout<<"enter name for student\n";
			cin>>name;
			cout<<"Entre the number of subject"<<endl;
			cin>>m;
			for(i=0;i<m;i++){
				cout<<"accept marks of subject "<<i+1<<endl;
				cin>>marks[i];
				sum += marks[i];
			}
			avg = (float) sum/m;
			
		}
		void display()
		{
			int i;
			cout<<"rollno is \t"<<rollno<<"name is \t"<<name<<"Avg is :"<<avg<<endl;
			cout<<"marks are \n"<<endl;
			for(i=0;i<=4;i++)
			cout<<marks[i]<<"\t"<<endl;
			
		}
	
};
  
  int main()
  {
  	int n,i;
  	cout<<"enter no of students\n";
  	cin>>n;
    Student* ptr	=new Student[n];
    cout<<"accept details\n";
    for(i=0;i<n;i++)
    {
    	ptr[i].accept();
	}
    cout<<"display details\n";
	
    for(i=0;i<n;i++)
    {
    	(ptr+i)->display();
	}
    
    float top = 0, secTop = 0;
    
    char sname[20];
    
    for(i=0;i<n;i++)
    {
   	if(ptr[i].avg>top){

   		top = ptr[i].avg;
   		strcpy(sname,ptr[i].name);
	   }  
   }
   
   cout<<"Topper name is :"<<sname<<" "<<"Top Avg is : "<<top<<endl;

	delete[] ptr;
}
  







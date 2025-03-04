#include <iostream> 
using namespace std; 
#include<string.h>
class Student 
{ 
	int *p_rollno; 
public: 
    Student() 
    { 
        cout << "Constructor is called!\n"; 
        p_rollno=new int;
        *p_rollno=420;
       
    } 
   ~Student() 
    { 
        cout << "Destructor is called!\n"; 
        
        if(p_rollno)
        {
		cout<<"in if destructor\n";
        delete p_rollno;
        p_rollno=NULL;
    	}
    }
  
}; 
  
int main(){ 
	Student s1;
	//s1.~Student();
 	return 0;
}

  	
  	
  	

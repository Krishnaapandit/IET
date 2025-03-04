#include <iostream> 
using namespace std; 
class Student { 
  
public: 
    Student() 
    { 
        cout << "Constructor is called!\n"; 
    } 
      ~Student() 
    { 
    	cout<<this;
        cout << "Destructor is called!\n"; 
    } 
  
    void write() 
    { 
        cout << "Writing!\n"; 
    } 
}; 
  
int main() 
{ 
	Student* student = new Student[3]; 
	cout<<(student+0);
	cout<<(student+1);
	cout<<(student+2);
    student[0].write(); 
    student[1].write(); 
    student[2].write(); 
    delete student; 
 
    return 0; 
}


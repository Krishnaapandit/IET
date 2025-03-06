//Properties Destructor
#include <iostream>
using namespace std;
  class Exam {
	public:
    Exam()
    { 
   
       cout<<"constructor is called\n";
    }
     ~Exam()
    {
    	
       cout<<"destructor is called"<<endl;; 
	   
    }
};
int main()
{
	Exam e,e1;
    e.~Exam();
    e1.~Exam();
  }



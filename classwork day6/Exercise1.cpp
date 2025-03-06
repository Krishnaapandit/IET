#include <iostream>
using namespace std;
     
class Test {
	private:
		static int cunt1;
		static int cunt2;
public:
 static int getcunt1()
 {
 	return cunt1;
 }
 
    Test()
    { 
    cunt1++;
       cout<<this<<endl;
       cout<<"constructor is called\n";
    }
     ~Test()
    {
    	
       cout<<"destructor is called"<<++cunt2<<endl;; 
	   cout<<this<<endl; 
    }
};
int Test ::cunt1=0;
int Test::cunt2=0;
int main()
{
    Test t;
    cout<<&t<<endl;
	  Test t1;
    cout<<&t1<<endl;
   cout<<"no of cons called"<< Test::getcunt1()<<endl;
   

}



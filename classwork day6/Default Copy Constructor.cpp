//copy constructor
#include<iostream>
using namespace std;
class example{
	int rollno;
	public:
		void init(int a){
			rollno=a;
		}
		void display(){
			cout<<"Rollno= "<<rollno<<endl;
		}
};
int main(){
	example obj1;
	obj1.init(90);
	obj1.display();
	
	//implicit copy constructor
	example obj2(obj1);  //copy constructor creates a backup of the original data
	obj2.display();
	return 0;
	
}

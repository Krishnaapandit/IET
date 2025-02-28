//demonstrate that non-const functions can not be called by const objects
#include<iostream>
using namespace std;

class Exam{
	int marks;
	public:
	 	Exam(int x=0){
	 		marks=x;
		 }
	int getValue(){
		return marks;
	}
};
int main(){
	const Exam obj(100);  
	cout<<obj.getValue();
	
}

//error because constant objects cannot called non constant functions 

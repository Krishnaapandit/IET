//demonstrate that const functions can be called by non const objects
#include<iostream>
using namespace std;

class Exam{
	int marks;
	public:
	 	Exam(int x=0){
	 		marks=x;
		 }
	int getValue()const{
		return marks;
	}
};
int main(){
	Exam obj(100);  // if we add const before exam then also it will work because it can const value
	cout<<obj.getValue();
}

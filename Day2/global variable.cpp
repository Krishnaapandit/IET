//Global Variable
#include<iostream>
using namespace std;

void show();
int y=1;

int main(){
	cout<<y;//1
	y++;//2
	show();
	cout<<y;//2
	
}
void show(){
	cout<<y;//2
	int x=0;
	cout<<x;//0
	x++;//1
	cout<<x;//1
}

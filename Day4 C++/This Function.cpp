// this keyword
#include<iostream>
using namespace std;
class student
{
	int a,b;
public:
void show(int a,int b)
{
	this->a=a;
	this->b=b;

}
void display()
{
	cout<<a<<"\n"<<b;
}
};
int main()
{
	student s;
	s.show(10,40);
	s.display();
}

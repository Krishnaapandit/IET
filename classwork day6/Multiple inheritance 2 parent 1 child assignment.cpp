#include<iostream>
using namespace std;
 
class Parent1
{
	int a;
public:
  Parent1()  { cout << "Parent1 default constructor called" << endl; }
  Parent1(int p) 
{
    cout << "Parent1 parameterized constructor called" << endl;
}
};
 
class Parent2
{
	int b;
public:
  Parent2()  
  	{ 
  		cout << "Parent2 default constructor called" << endl;
	}
  Parent2(int q)
  	{ 
  		cout << "Parent2 parameterized constructor called" << endl;
  	}
};
 
class child1: public Parent2, public Parent1  
{
public:
  child1(int p,int q):Parent1(p),Parent2()
    { 
		cout << "child1 parameterized constructor called" << endl; 
	}
};
 
int main()
{
    child1 c1(10,20);
    return 0;
}


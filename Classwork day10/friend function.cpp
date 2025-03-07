#include<iostream>
using namespace std;
class K{
	int a;
	public:
		int geta();
		friend void abc(K&);
};
int K::geta(){
	cout<<"enter the value of a\n";
	cin>>a;
}
void abc(K& aobj){
	cout<<"friend function accessing private data "<<aobj.a<<"\n";
}

int main(){
	K obj;
	obj.geta();
	abc(obj);
}

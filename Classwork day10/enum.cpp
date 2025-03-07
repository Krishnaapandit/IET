//enum
#include<iostream>
using namespace std;
enum Day{sunda,monday='A',tuesday,wednesday,thursday,friday,saturday
};
int main() 
{ 
    enum Day today;
    today=monday;
  	cout<<today;
    switch (today) { 
    case 65: 
        cout << " it is Monday"; 
        break; 
    case 66: 
        cout << "it is Sunday"; 
        break; 
}
}

#include <iostream>  
using namespace std;    

template<class T>  
T myMax(T x, T y)  
{
    cout << "Same type function template called" << endl;
    return (x > y) ? x : y;
}

template<class T, class Y>  
T myMax(T x, Y y)  
{
    cout << "Different type function template called" << endl;
    return (x > y) ? x : y;
}

int main()  
{  
   cout << "Max: " << myMax(20, 30) << endl;      
   cout << "Max: " << myMax(10.5, 20) << endl;    

   return 0;  
}  


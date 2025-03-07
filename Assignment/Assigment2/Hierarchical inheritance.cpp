#include<iostream>
using namespace std;
class Vehicle
{
	public:
		void info() 
		{
        	cout << "I am a vehicle" << endl;
    	}
};

class Bike : public Vehicle
{
	public:
		void twowheeler()
		{
			cout << "I am a 2 wheeler vehicle" << endl;
		}		
};

class Car : public Vehicle
{
	public:
		void fourwheeler()
		{
			cout << "I am a 4 wheeler vehicle" << endl;
		}
};

int main() {
    
    Bike bike1;
    cout << "\nIn bike class" << endl;
    bike1.info();
    bike1.twowheeler();

    return 0;
}

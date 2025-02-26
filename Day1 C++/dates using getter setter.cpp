// Dates using getter setter
#include<iostream>
using namespace std;
class CTarik
{
	int day,month,saal;
	public:
		void accept()
		{
			cout<<"accept today's date"<<endl;
			cin>>day>>month>>saal;
		}
		void display()
		{
			cout<<"display date\n";
			cout<<day<<"/"<<month<<"/"<<saal<<endl;
		}
		void setDay(int dd)
		{
			day=dd;
		}
	int	getDay()
		{
			return day;
		}
		
};
int main()
{
	CTarik d1;
	cout<<"size of object is "<<sizeof(d1)<<endl;
	cout<<"size of class cdate is "<<sizeof(class CTarik)<<endl;
	d1.accept();
	d1.display();
	d1.setDay(26);
	d1.display();
	int dd=d1.getDay();
	//cout<<"day part is "<<dd<<endl;
	//cout<<"day part is "<<d1.getDay();
}

#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
	private:
		int seconds;
		int hh,mm,ss;
		public:
			void getTime(void);
			void convertintoSeconds(void);
			void displayTime(void);
};
void Time::getTime(void)
{
	cout<<"Enter time:"<<endl;
	cout<<"Hours : ";
	cin>>hh;
	cout<<"Minutes : ";
	cin>>mm;
	cout<<"Seconds : ";
	cin>>ss;
}
void Time::convertintoSeconds(void)
{
	seconds=hh*3600+mm*60+ss;
}
void Time::displayTime(void)
{
	cout<<"The time is = "<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
	cout<<"Time in total second: "<<seconds;
}
int main()
{
	Time t;
	t.getTime();
	t.convertintoSeconds();
	t.displayTime();
	return 0;
}

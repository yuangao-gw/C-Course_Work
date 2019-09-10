#include<iostream>
#include<iomanip>
#include<ctime>
#include<conio.h>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time();
	Time(int h, int m, int s);
	void tick();
	void printUniversal();
	void printStandard();
};
Time::Time()
{
    long now = time(NULL);
	tm local = *localtime(& now);
	hour = local.tm_hour;
	minute = local.tm_min;
	second = local.tm_sec;
}
Time::Time(int h, int m,int s)
{
	hour = h;
	minute = m;
	second = s;
}
void Time::tick()
{
	second++;
	minute = minute + second / 60;
	second = second % 60;
	hour = hour + minute / 60;
	minute = minute % 60;
	hour = hour%24;
}

void Time::printUniversal()
{
	cout<<setfill('0')<<setw(2)<<hour<<":";
	cout<<setfill('0')<<setw(2)<<minute<<":";
	cout<<setfill('0')<<setw(2)<<second<<endl;
}
void Time::printStandard()
{
	if(hour >= 12)
		cout<<"PM ";
	else
		cout<<"AM ";
	if(hour > 12)
		cout<<setfill('0')<<setw(2)<<hour-12<<":";
	else
		cout<<setfill('0')<<setw(2)<<hour<<":";
	cout<<setfill('0')<<setw(2)<<minute<<":";
	cout<<setfill('0')<<setw(2)<<second<<endl;
}
int main()
{
	Time now(9,00,00);
	long t1 = time(NULL),t2;
	
	now.printUniversal();
	now.printStandard();
	while(!-kbhit())
	{
    	t2 = time(NULL);
 		if(t2-t1 == 1)
		{
			system("cls");
			t1 = t2;
			now.tick();
			now.printUniversal();
			now.printStandard();
		}
	}
	return 0;
}

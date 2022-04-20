#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<conio.h>
#include<ctime>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d):year(y), month(m), day(d){}
	Date()
	{
		long now = time(NULL);
		tm local = *localtime(& now);//一个类tm 变量名local 函数*localtime 地址* 入口值now
		year = local.tm_year+1900;
		month = local.tm_mon+1;
		day = local.tm_mday;
	}
	void display()
	{
		cout<<year<<"-"<<month<<"-"<<day<<" ";
	}
};
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int h, int min, int s):hour(h), minute(min), second(s){}
	Time()
	{
		long now = time(NULL);
		tm local = *localtime(& now);
		hour = local.tm_hour;
		minute = local.tm_min;
		second = local.tm_sec;
	}
	void display()
	{
		cout<<hour<<":"<<minute<<":"<<second<<endl;
	}
};
class DateTime: public Date,public Time
{
public:
	DateTime():Date(),Time(){}
	DateTime(int y, int m, int d, int h, int min, int s):Date(y,m,d),Time(h,min,s){}
	DateTime operator ++ ();
	void display()
	{
		Date::display();
		Time::display();
	}
};
DateTime DateTime::operator ++ ()
{
	second = second + 1;
	minute = minute + second/60;
	second = second%60;
	hour = hour + minute/60;
	minute = minute%60;
	day = day + hour/24;
	hour = hour%24;
	if(day > x[cul(year)][month])
	{
		month++;
		day = 1;
		if(month > 12)
		{
			year++;
			month = 1;
		}
	}
	return *this;
}
int main()
{
    DateTime now, t;
	long t1 = time(NULL),t2;
	now.display();
	while(!-kbhit())
	{
		t2 = time(NULL);
		if(t2-t1 == 1)
		{
			system("cls");
			t1 = t2;
			t = ++now;
			t.display();
		}
	}
	return 0;
}
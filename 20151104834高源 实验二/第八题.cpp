#include<iostream>
#include<ctime>
using namespace std;
class Date
{
public:
	Date();
	Date(int y,int m,int d);

	void setDate(int y,int m,int d);
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);

	int getYear() const;
	int getMonth() const;
	int getDay() const;
	void print() const;

private:
	int year;
	int month;
	int day;
};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int Date::getYear() const
{
	return year;
};
int Date::getMonth() const
{
	return month;
}
int Date::getDay() const
{
	return day;
}
void Date::setYear(int y)
{
	year = y;
}
void Date::setMonth(int m)
{
	month = (m > 0 && m <= 12 ? m : 1);
}
void Date::setDay(int d)
{
	day = d;
}
Date::Date()
{
	long now = time(NULL);
	tm local = *localtime(&now);
	setDate(1900 + local.tm_year, local.tm_mon + 1, local.tm_mday);
}
void Date::setDate(int y,int m,int d)
{
	setYear(y);
	setMonth(m);
    setDay(d);
}
void Date::print() const
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}
int main()
{
	const Date OlympicDay(2008,8,8);
	cout<<"我国举办奥运会的日期是：";
	OlympicDay.print();

	Date now;
	cout<<"当前系统时间是：";
	now.print();

	cout<<"用户设置的时间是：";
	now.setDate(2013,4,5);
	now.print();
	return 0;
}
#include<iostream>
using namespace std;
class Date
{
public:
	Date(int y = 1900, int m = 1, int d = 1);
	void setDate(int y,int m,int d);
	void print() const;
	bool IsLeapyear(int y) const;
	Date & operator ++ ();
	Date operator ++ (int);
	Date & operator += (int days);
private:
	void checkDate();
	int year;
	int day;
	int month;
	static const int days[];
};
Date::Date(int y, int m, int d)
{
	setDate(y,m,d);
}
void Date::setDate(int y,int m,int d)
{
	year = y;
	month = m;
	day = d;
}
Date & Date::operator ++()
{
	day++;
	checkDate();
	return *this;
}
Date Date::operator ++ (int)
{
	Date d(*this);
	day++;
	checkDate();
	return d;
}
Date & Date::operator += (int d)
{
	while(d--)
	{
		day++;
		checkDate();
	}
	return *this;
}
const int Date::days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
bool Date::IsLeapyear(int y) const
{
	if(y%400 == 0 || y%4 == 0 && y%100 != 0)
		return 1;
	else
		return 0;
}
void Date::print() const
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}
void Date::checkDate()
{
	if(IsLeapyear(year) == 1 && month == 2)
	{
		if(day > 29)
		{
			month++;
			day = 1;
		}
	}
	else
	{
		if(day > days[month])
		{
			month++;
			day = 1;
		}
	}
	if(month > 12)
	{
		year++;
		month = 1;
	}
}
int main()
{
	Date d(2008,2,28);
	 
	cout<<"��ǰʱ���ǣ�";
	d.print();

	cout<<"ִ��++Date��";
	(++d).print();

	cout<<"ִ��Date++��";
	(d++).print();

	cout<<"ִ��Date += 31��";
	d += 31;
	d.print();

	return 0;
}

#include<iostream.h>
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y=2016, int m=4, int d=15):year(y),month(m),day(d) {}
	void set();
    Date operator ++ ();
	Date operator ++ (int);
	void display();
};
int x[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
int cul(int y)
{
	if(y%400 == 0 || y%4 == 0 && y%100 != 0)
		return 1;
	else
		return 0;
}
Date Date::operator ++ ()
{
	day++;
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
Date Date::operator ++ (int)
{
	Date d(*this);
	++(*this);
	return d;
}
void Date::set()
{
	cin>>year>>month>>day;
}
void Date::display()
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}
int main()
{
	Date d(2016,4,15);
	int n,i;
	d.set();
	cin>>n;
	for(i = 1; i <= n; i++)
	{
		++d;
		d.display();
	}
	return 0;
}

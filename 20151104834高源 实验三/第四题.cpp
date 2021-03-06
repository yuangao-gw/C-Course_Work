#include<iostream>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y = 1900, int m = 1, int d = 1);

	friend istream & operator >> (istream & input, Date &d);
	friend ostream & operator << (ostream & output, Date &d);

	friend bool  operator > (const Date &d1,const Date &d2);
	friend bool  operator < (const Date &d1,const Date &d2);
	friend bool  operator == (const Date &d1,const Date &d2);
};
bool  operator > (const Date &d1,const Date &d2)
{
	if(d1.year > d2.year)
		return true;
	else if(d1.year == d2.year && d1.month > d2.month)
		return true;
	else if(d1.year == d2.year && d1.month == d2.month && d1.day > d2.day)
		return true;
	else
		return false;
}
bool  operator < (const Date &d1,const Date &d2)
{
	if(d1>d2)
		return false;
	else if(d1==d2)
		return false;
	else
		return true;
}
bool  operator == (const Date &d1,const Date &d2)
{
	return(d1.year == d2.year && d1.month == d2.month && d1.day &&d2.day);
}
istream & operator >> (istream & input, Date &d)
{
	input>>d.year>>d.month>>d.day;
	return input;
}
ostream & operator << (ostream & output, Date &d)
{
	output<<d.year<<"-"<<d.month<<"-"<<d.day;
	return output;
}
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int main()
{
	Date d1,d2;
	while(cin>>d1>>d2)
	{
		cout<<d1;
		if(d1 == d2)
			cout<<"����";
		else if(d1 < d2)
			cout<<"С��";
		else
			cout<<"����";
		cout<<d2<<endl;
	}
	return 0;
}
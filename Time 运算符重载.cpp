#include<iostream.h>
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int h=0, int m=0, int s=0):hour(h),minute(m),second(s) {}
	void setdate();
	bool operator > (Time b);
	friend Time operator - (Time a,Time b);
	void display();
};
void Time::setdate()
{
	cin>>hour>>minute>>second;
}
bool Time::operator > (Time b)
{
	int x = hour*3600 + minute*60 + second;
	int y = b.hour*3600 + b.minute*60 + b.second;
	if(x > y)
		return true;
	else 
		return false;
}
Time operator - (Time a,Time b)
{
	Time c;
	c.second = a.second - b.second;
	if(c.second < 0)
	{
		a.minute--;
		c.second = c.second + 60;
	}
	c.minute = a.minute - b.minute;
	if(c.minute < 0)
	{
		a.hour--;
		c.minute = c.minute + 60;
	}
	c.hour = a.hour - b.hour;
	return c;
}
void Time::display()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
/*Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}
Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}*/
int main()
{
	Time t1(8,25,30), t2, t3;
	t2.setdate();
	if(t1 > t2)
		t3 = t1 - t2;
	else
		t3 = t2 - t1;
	t3.display();
	return 0;
}



#include<iostream.h>
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int h=0, int m=0, int s=0):hour(h),minute(m),second(s) {}
	void setdate();
	bool operator > (Time b);
//	friend Time operator - (Time a,Time b);
	bool operator < (Time b);
    Time operator ++ ();
	void display();
};
void Time::setdate()
{
	cin>>hour>>minute>>second;
}
bool Time::operator < (Time b)
{
	int x = hour*3600 + minute*60 + second;
	int y = b.hour*3600 + b.minute*60 + b.second;
	if(x < y)
		return true;
	else 
		return false;
}
/*
Time operator - (Time a,Time b)
{
	Time c;
	c.second = a.second - b.second;
	if(c.second < 0)
	{
		a.minute--;
		c.second = c.second + 60;
	}
	c.minute = a.minute - b.minute;
	if(c.minute < 0)
	{
		a.hour--;
		c.minute = c.minute + 60;
	}
	c.hour = a.hour - b.hour;
	return c;
}*/
bool Time::operator > (Time b)
{
	int x = hour*3600 + minute*60 + second;
	int y = b.hour*3600 + b.minute*60 + b.second;
	if(x > y)
		return true;
	else 
		return false;
}
Time Time::operator ++ ()
{
	second = second + 1;
	minute = minute + second/60;
	second = second%60;
	hour = hour + minute/60;
	minute = minute%60;
	return *this;
}
void Time::display()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
/*Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}
Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}*/
int main()
{
	Time t1(8,25,30), t2, t3;
	t2.setdate();
	if(t1 < t2)
	{
		t3 = t1;
     	t1 = t2;
		t2 = t3;
	}
	while(t1 > t2)
	{
		++t2;
	    t2.display();
	}
	return 0;
}


#include<iostream.h>
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int h=0, int m=0, int s=0):hour(h),minute(m),second(s) {}
	void setdate();
	bool operator > (Time b);
	friend Time operator - (Time a,Time b);
	bool operator < (Time b);
    Time operator ++ ();
	Time operator ++ (int);
	void display();
};
void Time::setdate()
{
	cin>>hour>>minute>>second;
}
bool Time::operator < (Time b)
{
	int x = hour*3600 + minute*60 + second;
	int y = b.hour*3600 + b.minute*60 + b.second;
	if(x < y)
		return true;
	else 
		return false;
}

Time operator - (Time a,Time b)
{
	Time c;
	c.second = a.second - b.second;
	if(c.second < 0)
	{
		a.minute--;
		c.second = c.second + 60;
	}
	c.minute = a.minute - b.minute;
	if(c.minute < 0)
	{
		a.hour--;
		c.minute = c.minute + 60;
	}
	c.hour = a.hour - b.hour;
	return c;
}
bool Time::operator > (Time b)
{
	int x = hour*3600 + minute*60 + second;
	int y = b.hour*3600 + b.minute*60 + b.second;
	if(x > y)
		return true;
	else 
		return false;
}
Time Time::operator ++ ()
{
	second = second + 1;
	minute = minute + second/60;
	second = second%60;
	hour = hour + minute/60;
	minute = minute%60;
	return *this;
}
Time Time::operator ++ (int)
{
	Time t(*this);
	++(*this);
	return t;
}
void Time::display()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
/*Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}
Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}*/
int main()
{
	Time t1(8,25,30), t2, t3;
	t2.setdate();
	if(t1 < t2)
	{
		t3 = t1;
     	t1 = t2;
		t2 = t3;
	}
	while(t1 > t2)
	{
		t2++;
	    t2.display();
	}
	while(t1 > t2)
	{
		++t2;
	    t2.display();
	}
	return 0;
}
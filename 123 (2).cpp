#include<iostream.h>
#include<time.h>
#include<iomanip.h>
#include<stdlib.h>
class Time
{
	private:
		int hour;
		int minute;
		int second;
	public:
		Time(int h, int m, int s):hour(h), minute(m), second(s){}
		Time();
		Time operator ++ ();
		Time operator ++ (int);
		Time operator -- ();
		Time operator -- (int);
		Time operator + (int n);
		friend ostream & operator << (ostream & output, Time &t);
		friend istream & operator >> (istream & input, Time &t);
		friend bool operator != (Time x, Time y);
};
Time::Time()
{
	long now = time(NULL);
	tm l = *localtime(&now);
	hour = l.tm_hour;
	minute = l.tm_min;
	second = l.tm_sec;
}
Time Time::operator ++ ()
{
	second++;
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
Time Time::operator -- ()
{
	second--;
	if(second < 0)
	{
		minute--;
		second = second + 60;
		if(minute < 0)
		{
			hour--;
			minute = minute + 60;
		}
	}
	return *this;
}
Time Time::operator -- (int)
{
	Time t(*this);
	--(*this);
	return t;
}
Time Time::operator + (int n)
{
	Time t(*this);
	while(n--)
		t++;
	return t;
}
ostream & operator << (ostream & output, Time &t)
{
	output<<setfill('0')<<setw(2)<<t.hour<<":";
	output<<setfill('0')<<setw(2)<<t.minute<<":";
	output<<setfill('0')<<setw(2)<<t.second<<endl;
	return output;
}
istream & operator >> (istream & input, Time &t)
{
	input>>t.hour>>t.minute>>t.second;
	return input;
}
bool operator != (Time x, Time y)
{
	if(x.hour==y.hour && x.minute==y.minute && x.second==y.second)
		return false;
	else
		return true;
}
int main()
{
	int n;
	do
	{
		system("cls");
		cout<<"1、查看时间"<<endl;
		cout<<"2、设定闹钟"<<endl;
		cout<<"3、计时功能"<<endl;
		cout<<"4、倒计时功能"<<endl;
		cout<<"0、退出"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
			{
				Time t;
				cout<<t;
				system("pause");
				break;
			}
			case 2:
			{
				Time t;
				long a, b;
				cin>>t;	
				a = time(NULL);
				Time now;
				while(t != now)
				{
					b = time(NULL);
					if(b - a == 1)
					{
						system("cls");
						now++;
						cout<<now;
						a = b;
					}
				}
				cout<<"时间到"<<endl;
				system("pause");
				break;
			}
			case 3:
			{
				system("cls");
				Time t(0,0,0), x;
				long a, b;
				a = time(NULL);
				while(cin.get() == '\n')
				{
					b = time(NULL);
					t = t+(b-a);
					cout<<t;
					a = b;
				}
				cout<<"计时结束"<<endl;
				system("pause");
				break;
			}
			case 4:
			{
				Time t, now(0,0,0);
				long a,b; 
				cin>>t;
				t++;
				a = time(NULL);
				while(t != now)
				{
					b = time(NULL);
					if(b-a == 1)
					{
						system("cls");
						t--;
						cout<<t;
						a = b;
					}
				}
				cout<<"倒计时结束"<<endl;
				system("pause");
				break;
			}
			case 0:
				cout<<"谢谢使用！"<<endl;
		}
	}while(n != 0);
	return 0;
}
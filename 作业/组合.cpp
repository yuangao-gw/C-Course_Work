#include<iostream>
#include<string>
using namespace std;
class Teacher
{
    private:
		int num;
		string name;
		char sex;
	public:
		Teacher(int n, string na, char s):num(n), name(na), sex(s){}
		void display()
		{
			cout<<"num     :"<<num<<endl;
			cout<<"name    :"<<name<<endl;
			cout<<"sex     :"<<sex<<endl;
		}
};
class BirthDate
{
    private:
		int year;
		int month;
		int day;
	public:
		BirthDate(int y, int m, int d):year(y), month(m), day(d){}
		void display()
		{
			cout<<"Dirthday:"<<year<<"-"<<month<<"-"<<day<<endl;
		}
		void change(int y,int m,int d)     //�����޸ĺ���  
		{
			year=y; 
			month=m;  
			day=d;  
		}
};
class Professor: public Teacher
{
    private:
		BirthDate birthday;
		float wages;
	public:
		Professor(int n, string na, char s, int y, int m, int d, float w):Teacher(n, na, s), birthday(y, m, d), wages(w){}
	//	void fun1(Teacher &);
	//	void fun2(BirthDate &);
		void display()
		{
			Teacher::display();
			birthday.display();
			cout<<"wages   :"<<wages<<endl;
		}
		void change(int y,int m,int d)             //�����޸ĺ���  
		{
			birthday.change(y,m,d); 
		}
};
int main()
{ 
	Professor profl(2015110, "����", 'F', 1990, 5, 13, 2000.6);
	cout<<"Before :"<<endl;
	profl.display();
//	fun1(profl);
//	fun2(profl.birthday);
	cout<<endl;
	cout<<"After  :"<<endl;
	profl.change(1997,05,13);
	profl.display();
	return 0;
}

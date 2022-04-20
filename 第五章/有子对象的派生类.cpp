#include<iostream>
#include<string>
using namespace std;
class Student
{
protected:
	int num;
	string name;
	char sex;
public:
	Student(int n, string na, char s):num(n),name(na),sex(s)
	{
		cout<<num<<"基类的构造函数"<<endl;
	}
	~Student()
	{
		cout<<num<<"基类的析构函数"<<endl;
	}
	void display()
	{
		cout<<"num :"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"sex :"<<sex<<endl;
	}
};
class Student1:public Student
{
private:
	Student monitor;
	int age;
	string addr;
public:
	Student1(int n, string na, char s, int n1, string na1, char s1, int a, string ad):Student(n,na,s),monitor(n1,na1,s1)
	{
		cout<<num<<"派生类的构造函数"<<endl;
		age = a;
		addr = ad;
	}
	~Student1()
	{
		cout<<num<<"派生类的析构函数"<<endl;
	}
	void display()
	{
		Student::display();
		cout<<"age :"<<age<<endl;
		cout<<"addr:"<<addr<<endl;
	}
	void monitor_display()
	{
		cout<<"@@@"<<endl;
		monitor.display();
	}
};
int main()
{
	Student s(101010, "asdf", 'f');
	Student1 s1(101020, "fgefs", 'm',104554, "fgjkyuf", 'm', 19, "asadasd");//, s2(101120, "gfkfhjk", 'm', 20, "sdfgdsafg");
	s.display();
	s1.display();
	s1.monitor_display();
//	s2.display();
	return 0;
}
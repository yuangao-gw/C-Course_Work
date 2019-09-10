#include<iostream>
#include<string>
using namespace std;
class Student
{
protected:
	string name;
	char sex;
	int score;
public:
	Student(string na, char s,int sc):name(na),sex(s),score(sc)
	{
		cout<<"Student"<<endl;
	}
	~Student()
	{
		cout<<"Studentd"<<endl;
	}
	void display()
	{
		cout<<"name :"<<name<<endl;
		cout<<"sex  :"<<sex<<endl;
		cout<<"score:"<<score<<endl;
	}
};
class Teacher
{
protected:
	string name;
	int age;
	string title;
public:
	Teacher(string na, int a, string t):name(na),age(a),title(t)
	{
		cout<<"Teacher"<<endl;
	}
	~Teacher()
	{
		cout<<"Teacherd"<<endl;
	}
	void display()
	{
		cout<<"name :"<<name<<endl;
		cout<<"age  :"<<age<<endl;
		cout<<"title:"<<title<<endl;
	}
};
class Graduate:public Teacher,public Student
{
protected:
	float wage;
public:
	Graduate(string na, char s,int sc, int a, string t, float w):Student(na,s,sc),Teacher(na,a,t),wage(w)
	{
		cout<<"Graduate"<<endl;
	}
	~Graduate()
	{
		cout<<"Graduated"<<endl;
	}
	void display()
	{
		cout<<"name :"<<Student::name<<endl;
		cout<<"sex  :"<<sex<<endl;
		cout<<"score:"<<score<<endl;
		cout<<"age  :"<<age<<endl;
		cout<<"title:"<<title<<endl;
	}

};
int main()
{
	Graduate graduate("a san", 'f', 90, 18, "zhujiao", 2000);
	graduate.display();
	return 0;
}

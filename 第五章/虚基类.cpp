#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
	string name;
public:
	Person(string na):name(na){}
	void display()
	{
		cout<<"name :"<<name<<endl;
	}
};
class Student:virtual public Person
{
protected:
	char sex;
	int score;
public:
	Student(string na,char s,int sc):Person(na),sex(s),score(sc){}
	void display()
	{
		cout<<"sex  :"<<sex<<endl;
		cout<<"score:"<<score<<endl;
	}
};
class Teacher:virtual public Person
{
protected:
	int age;
	string title;
public:
	Teacher(string na,int a, string t):Person(na),age(a),title(t){}
	void display()
	{
		cout<<"age  :"<<age<<endl;
		cout<<"title:"<<title<<endl;
	}
};
class Graduate:public Teacher,public Student
{
protected:
	float wage;
public:
	Graduate(string na, char s,int sc, int a, string t, float w):Person(na),Student(na,s,sc),Teacher(na,a,t),wage(w){}
	void display()
	{
		Person::display();
		Student::display();
		Teacher::display();
		cout<<"wage :"<<wage<<endl;
	}

};
int main()
{
	Graduate graduate("a san", 'f', 90, 18, "zhujiao", 2000);
	graduate.display();
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
class Person
{
	protected:
		string name;
		char sex;
		int age;
	public:
		Person(string na, char s, int a):name(na), sex(s), age(a){}
};
class Student: virtual public Person
{
	protected:
		int num;
		double score;
	public:
		Student(string na, char s, int a, int n, double sc):Person(na,s,a), num(n), score(sc){}
};
class Teacher: virtual public Person
{
	protected:
		int num;
		double wage;
	public:
		Teacher(string na, char s, int a, int n, double w):Person(na,s,a), num(n), wage(w){}
};
class Graduate: public Teacher, public Student
{
	public:
		Graduate(int n, string na, char s, int a, double sc, double w):Person(na, s, a),Teacher(na,s,a,n,w),Student(na,s,a,n,sc){}
		void display()
		{
			cout<<"num  : "<<Student::num<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"sex  : "<<sex<<endl;
			cout<<"age  : "<<age<<endl;
			cout<<"score: "<<score<<endl;
			cout<<"wage : "<<wage<<endl;
		}
};
int main()
{
	Graduate g(20151111, "ÀîËÄ", 'm', 19, 95.52, 5000.00);
	g.display();
	return 0;
}
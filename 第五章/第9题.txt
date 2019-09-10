#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
	string name;
	int age;
	char sex;
	string addr;
	long int tel;
public:
	Person(string na, int a, char s, string ad, long int t):name(na), age(a), sex(s), addr(ad), tel(t){}
	void display();
};
void Person::display()
{
	cout<<"name  :"<<name<<endl;
	cout<<"age   :"<<age<<endl;
	cout<<"sex   :"<<sex<<endl;
	cout<<"addr  :"<<addr<<endl;
	cout<<"tel   :"<<tel<<endl;
}
class Teacher:virtual public Person
{
protected:
	string title;
public:
	Teacher(string na, int a, char s, string ad, long int t, string ti);
	void display();
};
Teacher::Teacher(string na, int a, char s, string ad, long int t, string ti):Person(na, a, s, ad, t)
{
	title = ti;
} 
void Teacher::display()
{
	cout<<"title :"<<title<<endl;
}
class Cadre:virtual public Person
{
protected:
	string post;
public:
	Cadre(string na, int a, char s, string ad, long int t, string p):Person(na, a, s, ad, t),post(p){}
	void display();
};
void Cadre::display()
{
	cout<<"post  :"<<post<<endl;
}
class Teacher_Cadre:public Teacher, public Cadre
{
protected:
	float wages;
public:
	Teacher_Cadre(string na, int a, char s, string ad, long int t, string ti, string p, float w):Person(na, a, s, ad, t),Teacher(na, a, s, ad, t,ti),Cadre(na, a, s, ad, t, p), wages(w){}
	void display();
};
void Teacher_Cadre::display()
{
	cout<<"wages :"<<wages<<endl;
}
int main()
{
	Teacher_Cadre ct("a san", 18, 'f', "adadad", 12514524854, "jaoshou", "yuanzhang", 2000.00);
	ct.display();
	return 0;
}
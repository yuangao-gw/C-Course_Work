#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	int num;
	string name;
	char sex;
public:
	Student(int n, string na, char s):num(n),name(na),sex(s){}
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
	int age;
	string addr;
public:
	Student1(int n, string na, char s, int a, string ad):Student(n,na,s),age(a),addr(ad){}
	void display()
	{
		Student::display();
		cout<<"age :"<<age<<endl;
		cout<<"addr:"<<addr<<endl;
	}
};
int main()
{
	Student s(101010, "asdf", 'f');
	Student1 s1(101020, "fgefs", 'm', 19, "asadasd");
	s.display();
	s1.display();
	return 0;
}


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
//	Student(int n, string na, char s):num(n),name(na),sex(s){}
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
	int age;
	string addr;
public:
	Student1(int n, string na, char s, int a, string ad)//:num(n),name(na),sex(s),age(a),addr(ad){}
	{
		num = n;
	}//Student(n,na,s),
	void display()
	{
		Student::display();
		cout<<"age :"<<age<<endl;
		cout<<"addr:"<<addr<<endl;
	}
};
int main()
{
//	Student s(101010, "asdf", 'f');
	Student1 s1(101020, "fgefs", 'm', 19, "asadasd");
//	s.display();
	s1.display();
	return 0;
}
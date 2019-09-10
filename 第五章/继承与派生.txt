#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	void setdate();
	void display();
private:
	int num;
	string name;
	char sex;
};
class Student1:public Student
{
private:
	int age;
	string addr;
public:
	void setdate_1();
	void display_1();
};
void Student::setdate()
{
	cin>>num>>name>>sex;
}
void Student::display()
{
	cout<<"num : "<<num<<endl;
	cout<<"name : "<<name<<endl;
	cout<<"sex : "<<sex<<endl;
}
void Student1::display_1()
{
	cout<<"age : "<<age<<endl;
	cout<<"addr : "<<addr<<endl;
}
void Student1::setdate_1()
{
	cin>>age>>addr;
}
int main()
{
	Student1 s;
	s.setdate();
	s.setdate_1();
	s.display();
	s.display_1();
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	void setdate();
	void display();
private:
	int num;
	string name;
	char sex;
};
class Student1:public Student
{
private:
	int age;
	string addr;
public:
	void setdate();
	void display();
};
void Student::setdate()
{
	cin>>num>>name>>sex;
}
void Student::display()
{
	cout<<"num  : "<<num<<endl;
	cout<<"name : "<<name<<endl;
	cout<<"sex  : "<<sex<<endl;
}
void Student1::setdate()
{
	cin>>age>>addr;
}
void Student1::display()
{
	cout<<"age  : "<<age<<endl;
	cout<<"addr : "<<addr<<endl;
}

int main()
{
	Student1 s;
	s.Student::setdate();
	s.setdate();
	s.Student::display();
	s.display();
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	void setdate();
	void display();
private:
	int num;
	string name;
	char sex;
};
class Student1:private Student
{
private:
	int age;
	string addr;
public:
	void setdate();
	void display();
};
void Student::setdate()
{
	cin>>num>>name>>sex;
}
void Student::display()
{
	cout<<"num  : "<<num<<endl;
	cout<<"name : "<<name<<endl;
	cout<<"sex  : "<<sex<<endl;
}
void Student1::setdate()
{
	Student::setdate();
	cin>>age>>addr;
}
void Student1::display()
{
	Student::display();
	cout<<"age  : "<<age<<endl;
	cout<<"addr : "<<addr<<endl;
}

int main()
{
	Student1 s;
//	s.Student::setdate();
	s.setdate();
//	s.Student::display();
	s.display();
	return 0;
}
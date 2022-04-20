#include<iostream>
#include<string>
using namespace std;
class Teacher;
class Student
{
    private:
		string name;
		int num;
		int age;
		char sex;
		float score;
	public:
		friend Teacher;
		Student(int n, string na, int a, char s, float sc): num(n), name(na), age(a), sex(s), score(sc){}
};
class Teacher
{
	private:
		string name;
		int age;
		char sex;
		int num;
		float wage;
	public:
		Teacher(int n, float w):num(n), wage(w){}
		Teacher operator = (Student s)
		{
			name = s.name;
			age = s.age;
			sex = s.sex;
			return *this;
		}
	/*	void set(Student s)
		{
			name = s.name;
			age = s.age;
			sex = s.sex;
		}*/
		void display()
		{
			cout<<"num : "<<num<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"age : "<<age<<endl;
			cout<<"sex : "<<sex<<endl;
			cout<<"wage: "<<wage<<endl;
		}
};
int main()
{
	Student s(20151111, "ÀîËÄ", 22, 'm', 100);
	Teacher t(151111, 5000);
//	t.set(s);
	t = s;
	t.display();
	return 0;
}
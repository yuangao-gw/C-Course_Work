#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student
{
    private:
		string name;
		char sex;
		int age;
		int chinese;
		int math;
		int english;
		double average;
		int totle;
	public:
		Student(string n, char s, int a):name(n)
		{
			cout<<"请输入语文成绩：";
			cin>>chinese;
			cout<<"请输入数学成绩：";
			cin>>math;
			cout<<"请输入英语成绩：";
			cin>>english;
			average = (chinese+math+english)*1.0/3;
			totle = chinese+math+english;
		}
		~Student()
		{
			cout<<endl<<"姓名"<<"\t平均分"<<"\t总分"<<endl;
			cout<<name<<"\t"<<setfill('0')<<average<<"\t"<<totle<<endl;
		}
};
int main()
{
	Student s("张三", 'm', 20);
	return 0;
}
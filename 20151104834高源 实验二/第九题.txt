#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	int num;
	string name;
	float math;
	float english;
	float computer;
public:
	void set_inf(int n,string ch,float m,float e,float c);
	float sum();
	float average();
	int get_num();
	void print();
};
void Student::set_inf(int n, string ch,float m,float e,float c)
{
	num = n;
	name = ch;
	math = m;
	english = e;
	computer = c;
}
float Student::sum()
{
	return math+english+computer;
}
float Student::average()
{
	return (math+english+computer)/3;
}
int Student::get_num()
{
	return num;
}
void Student::print()
{
	cout<<"学号："<<num<<endl;
	cout<<"姓名："<<name<<endl;
	cout<<"数学："<<math<<endl;
	cout<<"英语："<<english<<endl;
	cout<<"计算机："<<computer<<endl;
	cout<<"总分："<<sum()<<endl;
	cout<<"平均分："<<average()<<endl<<endl;
} 
int main()
{
	int a, n, i, m, x, y = 0;
	string b;
	float c,d,e;
	cout<<"请输入人数（最多五十人）：";
	cin>>n;
	cout<<"请输入学生的学号、姓名、数学成绩、英语成绩、计算机成绩："<<endl;
	Student s[50];
	for(i = 0; i < n; i++)
	{
		cin>>a>>b>>c>>d>>e;
		s[i].set_inf(a,b,c,d,e);
	}
	for(i = 0; i < n; i++)
		s[i].print();
	x = s[0].sum();
	for(i = 0; i < n; i++)
	{
		y = s[i].sum()+y;
		if(s[i].sum() > x)
			x = s[i].sum();
	}
	cout<<"全班学生总成绩最高分为："<<x<<endl;
	cout<<"全班学生总平均分为："<<y/3<<endl;
	cout<<"请输入要查询的学生的学号：";
	cin>>m;
	for(i = 0; i < n; i++)
		if(s[i].get_num() == m)
		{
			cout<<"此学生信息为：";
			s[i].print();
		}
	return 0;
}
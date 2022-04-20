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
	cout<<"ѧ�ţ�"<<num<<endl;
	cout<<"������"<<name<<endl;
	cout<<"��ѧ��"<<math<<endl;
	cout<<"Ӣ�"<<english<<endl;
	cout<<"�������"<<computer<<endl;
	cout<<"�ܷ֣�"<<sum()<<endl;
	cout<<"ƽ���֣�"<<average()<<endl<<endl;
} 
int main()
{
	int a, n, i, m, x, y = 0;
	string b;
	float c,d,e;
	cout<<"�����������������ʮ�ˣ���";
	cin>>n;
	cout<<"������ѧ����ѧ�š���������ѧ�ɼ���Ӣ��ɼ���������ɼ���"<<endl;
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
	cout<<"ȫ��ѧ���ܳɼ���߷�Ϊ��"<<x<<endl;
	cout<<"ȫ��ѧ����ƽ����Ϊ��"<<y/3<<endl;
	cout<<"������Ҫ��ѯ��ѧ����ѧ�ţ�";
	cin>>m;
	for(i = 0; i < n; i++)
		if(s[i].get_num() == m)
		{
			cout<<"��ѧ����ϢΪ��";
			s[i].print();
		}
	return 0;
}
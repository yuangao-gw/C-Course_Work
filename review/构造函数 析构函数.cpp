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
			cout<<"���������ĳɼ���";
			cin>>chinese;
			cout<<"��������ѧ�ɼ���";
			cin>>math;
			cout<<"������Ӣ��ɼ���";
			cin>>english;
			average = (chinese+math+english)*1.0/3;
			totle = chinese+math+english;
		}
		~Student()
		{
			cout<<endl<<"����"<<"\tƽ����"<<"\t�ܷ�"<<endl;
			cout<<name<<"\t"<<setfill('0')<<average<<"\t"<<totle<<endl;
		}
};
int main()
{
	Student s("����", 'm', 20);
	return 0;
}
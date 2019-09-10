#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i;
	string cla, id, name;
	cout<<"请输入班级 学号 姓名：";
	cin>>cla;
	cin>>id;
	cin>>name;
	for(i = 1; i < 30; i++)
		cout<<"-";
	cout<<endl;
	cout<<"班级："<<cla<<endl;
	cout<<"学号："<<id<<endl;
	cout<<"姓名："<<name<<endl;
	return 0;
}

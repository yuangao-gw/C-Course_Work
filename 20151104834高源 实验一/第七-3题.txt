#include<iostream>
using namespace std;
double max(double x = 8.6, double y = 7.4, double z = 4.5)
{
    double t;
	t = x>y?x:y;
	return t = t>z?t:z;
	
}
int main()
{
		double a,b,c;
		cout<<"3个缺省参数分别为：8.6 7.4 4.5"<<endl;
		cout<<"请输入3个数："<<endl;
		cin>>a>>b>>c;
		cout<<"最大值为："<<max(a, b, c)<<endl;

		cout<<"请输入两个数："<<endl;
		cin>>a>>b;
		cout<<"一个参数缺省后，最大值为："<<max(a, b)<<endl;

		cout<<"请输入一个数："<<endl;
		cin>>a;
		cout<<"两个参数缺省后，最大值为；"<<max(a)<<endl;
		cout<<"3个参数缺省后，最大值为："<<max()<<endl;
	return 0;
}

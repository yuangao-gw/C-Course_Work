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
		cout<<"3��ȱʡ�����ֱ�Ϊ��8.6 7.4 4.5"<<endl;
		cout<<"������3������"<<endl;
		cin>>a>>b>>c;
		cout<<"���ֵΪ��"<<max(a, b, c)<<endl;

		cout<<"��������������"<<endl;
		cin>>a>>b;
		cout<<"һ������ȱʡ�����ֵΪ��"<<max(a, b)<<endl;

		cout<<"������һ������"<<endl;
		cin>>a;
		cout<<"��������ȱʡ�����ֵΪ��"<<max(a)<<endl;
		cout<<"3������ȱʡ�����ֵΪ��"<<max()<<endl;
	return 0;
}

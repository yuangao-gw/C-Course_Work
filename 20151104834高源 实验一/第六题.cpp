#include<iostream>
using namespace std;
int main()
{
	int max1(int *x, int *y);
	int max2(int &x, int &y);
	int x, y;
	cout<<"��������������";
	cin>>x>>y;
	cout<<"�β�ʹ��ָ�룬�ȽϺ�ϴ�����ǣ�"<<max1(&x, &y)<<endl;
	cout<<"�β�ʹ�����ã��ȽϺ�ϴ�����ǣ�"<<max2(x, y)<<endl;
	return 0;
}
int max1(int *x, int *y)
{
	return *x>*y?*x:*y;
}
int max2(int &x, int &y)
{
	return x>y?x:y;
}

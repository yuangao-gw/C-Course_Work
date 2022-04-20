#include<iostream>
using namespace std;
int main()
{
	int max1(int *x, int *y);
	int max2(int &x, int &y);
	int x, y;
	cout<<"请输入两个数：";
	cin>>x>>y;
	cout<<"形参使用指针，比较后较大的数是："<<max1(&x, &y)<<endl;
	cout<<"形参使用引用，比较后较大的数是："<<max2(x, y)<<endl;
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

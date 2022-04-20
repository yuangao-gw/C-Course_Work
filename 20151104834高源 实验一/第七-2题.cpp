#include<iostream>
using namespace std;
template<typename T>
T max(T x, T y, T z)
{
    T t;
	t = x>y?x:y;
	return t = t>z?t:z;
	
}
int main()
{
	{
		int a,b,c;
		cin>>a>>b>>c;
		cout<<"3个 int 型数最大值为："<<max(a, b, c)<<endl;
	}
	{
		double a,b,c;
		cin>>a>>b>>c;
		cout<<"3个double 型数最大值为："<<max(a, b, c)<<endl;
	}
	{
		float a,b,c;
		cin>>a>>b>>c;
		cout<<"3个 float 型数最大值为："<<max(a, b, c)<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int max(int x, int y, int z)
{
    int t;
	t = x>y?x:y;
	return t = t>z?t:z;
	
}
double max(double x, double y, double z)
{
    double t;
	t = x>y?x:y;
	return t = t>z?t:z;
	
}
float max(float x, float y, float z)
{
    float t;
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

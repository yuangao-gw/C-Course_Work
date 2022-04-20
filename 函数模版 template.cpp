#include<iostream>
using namespace std;
template<typename T>
T max(T a=0, T b=0, T c=0, T d=0)
{
	T m;
	m = a>b?a:b;
	m = m>c?m:c;
    m = m>d?m:d;
	return m;
}

int main()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	cout<<max(a,b,c,d)<<endl;

	float x, y, z, u;
	cin>>x>>y>>z>>u;
	cout<<max(x, y, z, u)<<endl;

	char i,j,k,l;
	cin>>i>>j>>k>>l;
	cout<<max(i,j,k,l)<<endl;
	return 0;
}

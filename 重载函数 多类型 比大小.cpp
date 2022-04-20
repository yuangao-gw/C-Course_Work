#include<iostream>
#include<cstdlib>
#include<string>
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
	int t;
	
	do{
		cout<<"0 退出"<<endl;
		cout<<"1 int类型"<<endl;
		cout<<"2 float类型"<<endl;
		cout<<"3 double类型"<<endl;
		cout<<"4 char类型"<<endl;
		cout<<"5 string类型"<<endl;
		
		cin>>t;
		switch(t)
		{
		case 0: cout<<"选择的类型为 退出"<<endl;
			break;

		case 1: cout<<"选择的类型为 int类型"<<endl;
			int a1, a2, a3, a4;
			cin>>a1>>a2>>a3>>a4;
			cout<<max(a1,a2,a3,a4)<<endl;
			break;

		case 2: cout<<"选择的类型为 float类型"<<endl;
			float b1, b2, b3, b4;
			cin>>b1>>b2>>b3>>b4;
			cout<<max(b1,b2,b3,b4)<<endl;
			break;

		case 3: cout<<"选择的类型为 double类型"<<endl;
			double c1, c2, c3, c4;
			cin>>c1>>c2>>c3>>c4;
			cout<<max(c1,c2,c3,c4)<<endl;
			break;

		case 4: cout<<"选择的类型为 char类型"<<endl;
			char d1, d2, d3, d4;
			cin>>d1>>d2>>d3>>d4;
			cout<<max(d1,d2,d3,d4)<<endl;
			break;

		case 5: cout<<"选择的类型为 string类型"<<endl;
			string s1, s2, s3, s4;
			cin>>s1>>s2>>s3>>s4;
			cout<<max(s1,s2,s3,s4)<<endl;
			break;

		}
		system("pause");
		system("cls");
	}while(t != 0);	
	return 0;
}
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
template<typename T>
T max(T a[1010] = 0)
{
	T m, i, j, n;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-i-1; i++)
			if(a[j] > a[j+1]
			{
				m = a[j];
				a[j] = a[j+1];
				a[j+1] = m;
			}
	for(i = 0; i < n; i++)
		return a[i];
}
int main()
{
	int t;
	
	do{
		cout<<"0 退出"<<endl;
		cout<<"1 int类型"<<endl;
		cout<<"2 float类型"<<endl;
		cout<<"3 double类型"<<endl;
		cout<<"4 char类型"<<endl;
		cout<<"5 string类型"<<endl;
		
		cin>>t;
		switch(t)
		{
		case 0: cout<<"选择的类型为 退出"<<endl;
			break;

		case 1: cout<<"选择的类型为 int类型"<<endl;
			int a[1010], n, i;
			for(i = 0; i < n; i++)
				cin>>a[i];
			cout<<max(a)<<endl;
			break;

	/*	case 2: cout<<"选择的类型为 float类型"<<endl;
			float b1, b2, b3, b4;
			cin>>b1>>b2>>b3>>b4;
			cout<<max(b1,b2,b3,b4)<<endl;
			break;

		case 3: cout<<"选择的类型为 double类型"<<endl;
			double c1, c2, c3, c4;
			cin>>c1>>c2>>c3>>c4;
			cout<<max(c1,c2,c3,c4)<<endl;
			break;

		case 4: cout<<"选择的类型为 char类型"<<endl;
			char d1, d2, d3, d4;
			cin>>d1>>d2>>d3>>d4;
			cout<<max(d1,d2,d3,d4)<<endl;
			break;

		case 5: cout<<"选择的类型为 string类型"<<endl;
			string s1, s2, s3, s4;
			cin>>s1>>s2>>s3>>s4;
			cout<<max(s1,s2,s3,s4)<<endl;
			break;*/

		}
		system("pause");
		system("cls");
	}while(t != 0);	
	return 0;
}
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int n, i;
template<typename T>
T max(T a[1010])
{
	T m, j;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1-i; j++)
			if(a[j] > a[j+1])
			{
				m = a[j];
				a[j] = a[j+1];
				a[j+1] = m;
			}
	for(i = 0; i < n; i++)
		 return a[i];
}
int main()
{
	int t;
	
	do{
		cout<<"0 退出"<<endl;
		cout<<"1 int类型"<<endl;
		cout<<"2 float类型"<<endl;
		cout<<"3 double类型"<<endl;
		cout<<"4 char类型"<<endl;
		cout<<"5 string类型"<<endl;
		
		cin>>t;
		switch(t)
		{
		case 0: cout<<"选择的类型为 退出"<<endl;
			break;

		case 1: cout<<"选择的类型为 int类型"<<endl;
			int a[1010], n, i;
			cin>>n;
			for(i =0; i < n; i++)
				cin>>a[i];
			cout<<a[i]<<endl;
			break;

		case 2: cout<<"选择的类型为 float类型"<<endl;
			float b[1010];
		
			cin>>n;
			for(i =0; i < n; i++)
				cin>>b[i];
			cout<<max(a)<<endl;
			break;

		case 3: cout<<"选择的类型为 double类型"<<endl;
			double c[1010];
		
			cin>>n;
			for(i =0; i < n; i++)
				cin>>c[i];
			cout<<max(a)<<endl;
			break;

		case 4: cout<<"选择的类型为 char类型"<<endl;
			char d[1010];
		
			cin>>n;
			for(i =0; i < n; i++)
				cin>>d[i];
			cout<<max(a)<<endl;
			break;

		case 5: cout<<"选择的类型为 string类型"<<endl;
			string x[1010];
		
			cin>>n;
			for(i =0; i < n; i++)
				cin>>x[i];
			cout<<max(a)<<endl;
			break;

		}
		system("pause");
		system("cls");
	}while(t != 0);	
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
template<typename T>
T * sort(int n, T a[], bool f = 1)
{
	T t;
	int i, j;
	if(f == 0)
	{
	    for(i = 0; i < n-1; i++)
			for(j = 0; j < n-1-i; j++)
				if(a[j] > a[j+1])
				{
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				}
	}
	else
	{
	    for(i = 0; i < n-1; i++)
			for(j = 0; j < n-1-i; j++)
				if(a[j] < a[j+1])
				{
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				}
	}
	return a;
}

int main()
{
	int i, n, t;
	do{
		cout<<"ÅÅÐòÄ£°æ"<<endl;
		cout<<"1¡¢int"<<endl;
		cout<<"2¡¢float"<<endl;
		cout<<"3¡¢double"<<endl;
		cout<<"4¡¢char"<<endl;
		cout<<"5¡¢string"<<endl;
		cin>>t;
		switch(t)
		{
		    case 1:
				{
					int a[1010];
						cin>>n;
						for(i = 0; i < n; i++)
    						cin>>a[i];
						sort(n,a);
						for(i = 0; i < n; i++)
						cout<<a[i]<<" ";
						cout<<endl;
				}
			case 2:
				{
					float a[1010];
						cin>>n;
						for(i = 0; i < n; i++)
    						cin>>a[i];
						sort(n,a);
						for(i = 0; i < n; i++)
						cout<<a[i]<<" ";
						cout<<endl;
				}
			case 3:
				{
					double a[1010];
						cin>>n;
						for(i = 0; i < n; i++)
    						cin>>a[i];
						sort(n,a);
						for(i = 0; i < n; i++)
						cout<<a[i]<<" ";
						cout<<endl;
				}
			case 4:
				{
					char a[1010];
						cin>>n;
						for(i = 0; i < n; i++)
    						cin>>a[i];
						sort(n,a);
						for(i = 0; i < n; i++)
						cout<<a[i]<<" ";
						cout<<endl;
				}
			case 5:
				{
					string a[1010];
						cin>>n;
						for(i = 0; i < n; i++)
    						cin>>a[i];
						sort(n,a);
						for(i = 0; i < n; i++)
						cout<<a[i]<<" ";
						cout<<endl;
				}
		}
	}while(t != 0);
	return 0;
}

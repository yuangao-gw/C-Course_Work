#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int n, i, j;
template<typename T>
void max(T a[1010])
{
	T m;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1-i; j++)
			if(a[j] > a[j+1])
			{
				m = a[j];
				a[j] = a[j+1];
				a[j+1] = m;
			}
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
				{
					int a[1010];
					cin>>n;
					for(i =0; i < n; i++)
						cin>>a[i];
					max(a);
					for( i = 0; i < n; i++)
			    	cout<<a[i]<<" ";
					cout<<endl;
					break;
				}

		case 2: cout<<"选择的类型为 float类型"<<endl;
				{
					float a[1010];
					cin>>n;
					for(i =0; i < n; i++)
						cin>>a[i];
					max(a);
					for(i = 0; i < n; i++)
					cout<<a[i]<<" ";
					cout<<endl;
					break;
				}

		case 3: cout<<"选择的类型为 double类型"<<endl;
				{
				    double a[1010];
					cin>>n;
					for(i =0; i < n; i++)
						cin>>a[i];
					max(a);
					for( i = 0; i < n; i++)
					cout<<a[i]<<" ";
					cout<<endl;
					break;
				}

		case 4: cout<<"选择的类型为 char类型"<<endl;
				{
					char a[1010];
					cin>>n;
					for(i =0; i < n; i++)
						cin>>a[i];
						max(a);
					for( i = 0; i < n; i++)
					cout<<a[i]<<" ";
					cout<<endl;
					break;
				}

		case 5: cout<<"选择的类型为 string类型"<<endl;
				{
					string a[1010];
					cin>>n;
					for(i =0; i < n; i++)
						cin>>a[i];
						max(a);
					for( i = 0; i < n; i++)
					cout<<a[i]<<" ";
					cout<<endl;
					break;
				}

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
int n, i, j;
template<typename T>
void max(T a[])
{
	T m;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1-i; j++)
			if(a[j] > a[j+1])
			{
				m = a[j];
				a[j] = a[j+1];
				a[j+1] = m;
			}
}
template<typename T>
void scan(T a[])
{
	for(i =0; i < n; i++)
		cin>>a[i];
}
template<typename T>
void print(T a[])
{
	for( i = 0; i < n; i++)
    	cout<<a[i]<<" ";
		cout<<endl;
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
				{
					int a[1010];
					cin>>n;
					scan(a);
					max(a);
					print(a);
					break;
				}

		case 2: cout<<"选择的类型为 float类型"<<endl;
				{
					float a[1010];
					cin>>n;
					scan(a);
					max(a);
					print(a);
					break;
				}

		case 3: cout<<"选择的类型为 double类型"<<endl;
				{
				    double a[1010];
					cin>>n;
					scan(a);
					max(a);
					print(a);
					break;
				}

		case 4: cout<<"选择的类型为 char类型"<<endl;
				{
					char a[1010];
					cin>>n;
				scan(a);
					max(a);
					print(a);
					break;
				}

		case 5: cout<<"选择的类型为 string类型"<<endl;
				{
					string a[1010];
					cin>>n;
			    	scan(a);
					max(a);
					print(a);
					break;
				}

		}
		system("pause");
		system("cls");
	}while(t != 0);	
	return 0;
}
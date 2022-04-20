#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, i, j;
	string c[30], t;
	cin>>n;
	cout<<"ÇëÊäÈë "<<n<<" ¸ö×Ö·û´®"<<endl;
	for(i = 0; i < n; i++)
		cin>>c[i];
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-i-1; j++)
			if(c[j] > c[j+1])
			{
				t = c[j];
				c[j] = c[j+1];
				c[j+1] = t;
			}
	cout<<"ÅÅÐòºóµÄ×Ö·û´®Îª£º"<<endl;
	for(i = 0; i < n; i++)
		cout<<c[i]<<endl;
	return 0;
}

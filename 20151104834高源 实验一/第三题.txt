#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int i, j, k, count = 0; 
		for(i=2; i<=100; i++)
		{
			k=sqrt(i);
			for(j=2; j<=k; j++)
				if(i%j == 0)
					break;
				if(j>k)
				{
					cout<<setw(4)<<i;
					count++;
					if(count%5 == 0)
						cout<<endl;
				}
		}
		if(count%10 != 0)
			cout<<endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int arr[10], i, j, t, sum = 0;
	cout<<"排序前："<<endl;
	for(i = 0; i < 5; i++)
	{
		cout<<"arr["<<i+1<<"] = ";
		cin>>arr[i];
	}
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4-i; j++)
			if(arr[j] < arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
	cout<<"排序后："<<endl;
	for(i = 0; i < 5; i++)
	{
		cout<<"arr["<<i+1<<"] = ";
		cout<<arr[i]<<endl;
	}
	cout<<"数组平均值为：";
	for(i = 0; i < 5; i++)
		sum = sum+arr[i];
	cout<<sum/5.0<<endl;
		return 0;
}

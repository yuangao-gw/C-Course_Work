#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
class Array
{
	public:
		Array(unsigned l=0,const int *e=NULL);
		~Array();
		int length() const;
		int at(int i) const;
		int & at(int i);
		void print() const;
	protected:
		int len;
		int *elems;
};
Array::Array(unsigned l,const int *e)
{
	len = l;
	elems = NULL;
	if(len > 0)
	{
		elems = new int[len];
		if(e == NULL)
		{
			cout<<"申请空间失败！"<<endl;
			exit(0);
		}
		for(int i=0; i < len; i++)
			elems[i] = e[i];
	}
}
Array::~Array()
{
	delete[] elems;
}
int Array::length() const
{
	return len;
}
int Array::at(int i) const
{
	return elems[i-1];
}
int & Array::at(int i)
{
	return elems[i-1];
}
void Array::print() const
{
	for(int i = 0; i < len; i++)
		cout<<setw(5)<<elems[i];
	cout<<endl;
}
class ChkArray:virtual public Array
{
	public:
		ChkArray(unsigned l=0,const int *e=NULL);
		int at(int i) const;
		int & at(int i);
	protected:
		bool BorderCheck(int i) const;
};
ChkArray::ChkArray(unsigned l,const int *e):Array(l,e){}
int ChkArray::at(int i) const
{
	if(BorderCheck(i) == true)
	{
		cout<<"下标越界！"<<endl;
		return elems[0];
	}
	else
		return elems[i-1];
}
int & ChkArray::at(int i)
{
	if(BorderCheck(i) == true)
	{
		cout<<"下标越界！"<<endl;
		return elems[0];
	}
	else
		return elems[i-1];
}
bool ChkArray::BorderCheck(int i) const
{
	if(i > len || i <= 0)
		return true;
	else
		return false;
}
class SortArray:virtual public Array
{
	public:
		SortArray(unsigned l=0,const int *e=NULL);
		void sort(bool asc=true);
};
SortArray::SortArray(unsigned l,const int *e):Array(l,e){}
void SortArray::sort(bool asc)
{
	int i,j,t;
	if(asc == true)
	{
		for(i = 0; i < len; i++)
			for(j = i+1; j < len; j++)
				if(elems[i]>elems[j])
				{
					t = elems[i];
					elems[i] = elems[j];
					elems[j] = t;
				}
	}
	else
	{
		for(i = 0; i < len; i++)
			for(j = i+1; j < len; j++)
				if(elems[i]<elems[j])
				{
					t = elems[i];
					elems[i] = elems[j];
					elems[j] = t;
				}
	}
}
class ChkSrtArray:public ChkArray,public SortArray
{
	public:
		ChkSrtArray(unsigned l=0,const int *e=NULL);
};
ChkSrtArray::ChkSrtArray(unsigned l,const int *e):Array(l,e),ChkArray(l,e),SortArray(l,e){}
int main()
{
	int Arr[]={9,23,7,5,13,6,8,12,17};
	cout<<"排序前：";
	ChkSrtArray arr(9,Arr);
	arr.print();
	cout<<"排序后：";
	arr.sort();
	arr.print();
	int i;
	cout<<"输入要访问元素的下标：";
	cin>>i;
	arr.at(i);
	return 0;
}
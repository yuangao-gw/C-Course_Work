
#include<iostream>
using namespace std;
class Furniture
{
protected:
	int weith;
public:
	void setw(int i)
	{
		weith = i;
	}
	int getw()
	{
		return weith;
	}
};
class Bed:virtual public Furniture
{
public:
	void sleep()
	{
		cout<<"睡觉"<<endl;
	}
};
class Sofa:virtual public Furniture
{
public:
	void watchTV()
	{
		cout<<"看电视"<<endl;
	}
};
class Sleepersofa:public Bed, public Sofa
{
public:
	void flod_out()
	{
		cout<<"展开沙发"<<endl;
	}
};
int main()
{
	Sleepersofa s;
	s.setw(50);
	cout<<"重量为："<<s.getw()<<endl;
	s.watchTV();
	s.flod_out();
	s.sleep();
	return 0;
}
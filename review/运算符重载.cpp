#include<iostream>
using namespace std;
class Point
{
	private:
		int x;
		int y;
	public:
		Point(int X, int Y):x(X), y(Y){}
		Point()
		{
			x = 0;
			y = 0;
		}
		~Point(){}
	/*	{
			cout<<"�ռ��ѱ��ͷţ�"<<endl;
		}*/
		bool operator < (Point &p1);
		bool operator > (Point &p1);
		friend bool operator == (Point &p1,Point &p2);
		friend ostream & operator << (ostream & output, Point &p);
		friend istream & operator >> (istream & input, Point &p);
		Point operator + (Point &p1);
		Point operator + (int a);
		friend Point operator + (int a,Point &p);
		friend Point operator - (Point &p,int a);
		Point operator ++ ();
		Point operator ++ (int);
		friend Point operator ! (Point &p);
};
bool Point::operator < (Point &p1)
{
	if(x*x+y*y < p1.x*p1.x+p1.y*p1.y)
		return true;
	else
		return false;
}
bool Point::operator > (Point &p1)
{
	if(x*x+y*y > p1.x*p1.x+p1.y*p1.y)
		return true;
	else
		return false;
}
bool operator == (Point &p1,Point &p2)
{
	if(p1.x*p1.x+p1.y*p1.y == p2.x*p2.x+p2.y*p2.y)
		return true;
	else
		return false;
}
ostream & operator << (ostream & output, Point &p)
{
	output<<"("<<p.x<<","<<p.y<<")";
	return output;
}
istream & operator >> (istream & input, Point &p)
{
	input>>p.x>>p.y;
	return input;
}
Point Point::operator + (Point &p1)
{
	return Point(x+p1.x, y+p1.y);
}
Point Point::operator + (int a)
{
	return Point(x+a,y+a);
}
Point operator + (int a,Point &p)
{
	return Point(p.x+a,p.y);
}
Point operator - (Point &p,int a)
{
	return Point(p.x-a,p.y-a);
}
Point Point::operator ++ ()
{
	++x;
	++y;
	return *this;
}
Point Point::operator ++ (int)
{
	Point p(*this);
	x++;
	y++;
	return p;
}
Point operator ! (Point &p)
{
	p.x = -p.x;
	p.y = -p.y;
	return p;
}
int main()
{
	Point p(3,1), p1(3,4);
/*	if(p < p1)
	cout<<p<<" < "<<p1<<endl;
	else if(p > p1)
	cout<<p<<" > "<<p1<<endl;
	else if(p == p1)
	cout<<p<<" == "<<p1<<endl;

	cin>>p>>p1;
	cout<<p+p1<<endl;

	cin>>p;
	p = p+3;
	cout<<p<<endl;

	cin>>p;
	p = 3+p;
	cout<<p<<endl;

	cin>>p;
	p = p-3;
	cout<<p<<endl;

	cin>>p;
	!p;
	cout<<p;*/

	cin>>p;
	++p;
	cout<<p;
	return 0;
}
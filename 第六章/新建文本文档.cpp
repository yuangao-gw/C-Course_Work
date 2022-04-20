#include"Point.h"
#include"Circle.h"
#include"Cylinder.h"
 int main()
{
	Point p(1,2);
	Circle c(3,4,5);
	Cylinder s(4,5,6,7);
	Point *a[3] = {&p, &c, &s};
	int i;

	for(i = 0; i < 3; i++)
	{
		cout<<*a[i]<<endl;
		cout<<a[i]->area()<<endl;
		cout<<a[i]->v()<<endl;
	}


	/*cout<<"�����������꣺"<<endl;
	cin>>p;
	cout<<"������ĵ������Ϊ��"<<endl;
	cout<<p<<endl;


	cout<<"�������������Բ�İ뾶��"<<endl;
	cin>>c;
	cout<<"������ĵ�������Բ�İ뾶Ϊ��"<<endl;
	cout<<c<<endl;
	cout<<"Բ�����Ϊ��"<<endl;
	cout<<c.area()<<endl;

	cout<<"�����������ꡢԲ�İ뾶��Բ����ĸߣ�"<<endl;
	cin>>s;
	cout<<"������ĵ�����ꡢԲ�İ뾶��Բ����ĸ�Ϊ��"<<endl;
	cout<<s<<endl;
	cout<<"Բ����ı����Ϊ��"<<endl;
	cout<<s.area()<<endl;
	cout<<"Բ��������Ϊ��"<<endl;
	cout<<s.v()<<endl;*/
	return 0;
}
#if !defined(Point_h)
# define Point_h
#include<iostream.h>
class Point
{
protected:
	float x;
	float y;
public:
	Point(float a = 0, float b = 0);
	friend istream & operator >> (istream& input, Point& p);
	friend ostream & operator << (ostream& output, Point& p);
	virtual float area(){return 0;}
	virtual float v(){return 0;}
};
#endif
#include<iostream.h>
#include"Circle.h"
class Cylinder: public Circle
{
private:
	float h;
public:
	Cylinder(float a = 0,float b = 0,float c = 0,float d = 0);
	friend istream & operator >> (istream& input, Cylinder& s);
	friend ostream & operator << (ostream& output, Cylinder& s);
	virtual float area();
	virtual float v();
};
#if !defined(Circle_h)
# define Circle_h
#include"Point.h"
#include<iostream.h>
class Circle:public Point
{
protected:
	float r;
public:
	Circle(float a = 0, float b = 0, float c = 0);
	friend istream & operator >> (istream& input, Circle& c);
	friend ostream & operator << (ostream& output, Circle& c);
	virtual float area();
	virtual float v(){return 0;}
};
#endif
#include"Point.h"
Point::Point(float a, float b)
{
	x = a;
	y = b;
}
istream & operator >> (istream& input, Point& p)
{
	input>>p.x>>p.y;
	return input;
}
ostream & operator << (ostream& output, Point& p)
{
	output<<"("<<p.x<<","<<p.y<<")";
	return output;
}
#include"Circle.h"
Circle::Circle(float a, float b, float c):Point(a,b)
{
	r = c; 
}
istream & operator >> (istream& input, Circle& c)
{
	input>>c.x>>c.y>>c.r;
	return input;
}
ostream & operator << (ostream& output, Circle& c)
{
	output<<"("<<c.x<<","<<c.y<<") "<<c.r;
	return output;
}
float Circle::area()
{
	return 3.14*r*r;
}
#include"Cylinder.h"
Cylinder::Cylinder(float a,float b,float c,float d):Circle(a,b,c)
{
	h = d;
}
istream & operator >> (istream& input, Cylinder& s)
{
	input>>s.x>>s.y>>s.r>>s.h;
	return input;
}
ostream & operator << (ostream& output, Cylinder& s)
{
	output<<"("<<s.x<<","<<s.y<<") "<<s.r<<" "<<s.h;
	return output;
}
float Cylinder::area()
{
	return (3.14*r*r*2+3.14*2*r*h);
}
float Cylinder::v()
{
	return 3.14*r*r*h;
}
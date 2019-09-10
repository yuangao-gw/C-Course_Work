#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
    public:
		virtual double area() const
		{
			return 0.0;
		}
		virtual void shapeName() const =0;
		virtual void printArea() const =0;
};
class Circle:public Shape
{
protected:
	double r;
public:
	Circle(double c = 0):r(c){}
	double area() const
	{
		return r*r*3.14;
	}
	void shapeName() const
	{
		cout<<"Circle  :"<<endl;
	}
	void printArea() const
	{
		cout<<"area = "<<area()<<endl;
	}
};
class Rectangle:public Shape
{
protected:
	double w;
	double l;
public:
	Rectangle(double a = 0,double b = 0):w(a), l(b){}
	double area() const
	{
		return w*l;
	}
	void shapeName() const
	{
		cout<<"Rectangle  :"<<endl;
	}
	void printArea() const
	{
		cout<<"area = "<<area()<<endl;
	}
};
class Triangle:public Shape
{
protected:
	double l;
	double w;
	double z;
public:
	Triangle(double h = 0,double i = 0,double j = 0): l(h), w(i), z(j){}
	void shapeName() const
	{
		cout<<"Triangle  :"<<endl;
	}
	double area() const
	{
		double p, s;
		p = (l+w+z)/2.0;
		s = sqrt(p*(p-l)*(p-w)*(p-z));
		return s;
	}
	void printArea() const
	{
		cout<<"area = "<<area()<<endl;
	}
};
int main()
{
	Circle a(3);
	Rectangle b(3,4);
	Triangle c(3,4,5);
	Shape *p[3] = {&a, &b, &c};
	int i;

	for(i = 0; i < 3; i++)
	{
		p[i]->shapeName();
		p[i]->printArea();
	}
	return 0;
}
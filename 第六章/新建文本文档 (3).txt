#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
    public:
		virtual double area() const
		{
			return 0.0;
		}
		virtual void shapeName() =0;
};
class Circle:public Shape
{
protected:
	double r;
public:
	Circle(double a = 0): r(a){}
	virtual void shapeName()
	{
		cout<<"圆："<<endl;
	}
	double area() const
	{
		return r*r*3.14;
	}
};
class Square:public Shape
{
protected:
	double x;
public:
	Square(double b = 0):x(b){}
	virtual void shapeName()
	{
		cout<<"正方形："<<endl;
	}
	double area() const
	{
		return x*x;
	}
};
class Rectangle:public Shape
{
protected:
	double l;
	double w;
public:
	Rectangle(double c = 0,double d = 0): l(c), w(d){}
	virtual void shapeName()
	{
		cout<<"矩形："<<endl;
	}
	double area() const
	{
		return l*w;
	}
};
class Trapezoid:public Shape
{
protected:
	double l1;
	double l2;
	double w;
public:
	Trapezoid(double e = 0,double f = 0,double g = 0): l1(e), l2(f), w(g){}
	virtual void shapeName()
	{
		cout<<"梯形："<<endl;
	}
	double area() const
	{
		return (l1+l2)*w/2;
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
		virtual void shapeName()
	{
		cout<<"三角形："<<endl;
	}
	double area() const
	{
		double p, s;
		p = (l+w+z)/2.0;
		s = sqrt(p*(p-l)*(p-w)*(p-z));
		return s;
	}
};
int main()
{
	Circle a(3.5);
	Square b(3.3);
	Rectangle c(3.5, 2);
	Trapezoid d(3.5, 4.8, 2);
	Triangle e(3,4,5);
	Shape *p[5] = {&a, &b, &c,&d,&e};
	int i;
	double allArea = 0.0;

	for(i = 0; i < 5; i++)
	{
		p[i]->shapeName();
		cout<<"面积 = "<<p[i]->area()<<endl<<endl;;
		allArea = p[i]->area() + allArea;
	}
	cout<<"面积总和为："<<allArea<<endl;
	return 0;
}
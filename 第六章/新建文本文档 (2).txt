#include<iostream>
using namespace std;
class Shape
{
    public:
		virtual double area() const
		{
			return 0.0;
		}
		virtual double volume() const
		{
			return 0.0;
		}
		virtual void shapeName() const =0;
		virtual void display() const =0;
};
class Point: public Shape
{
protected:
	double x;
	double y;
public:
	Point(double a = 0, double b = 0):x(a), y(b){}
	virtual double area() const{return 0.0;}
	virtual double volume() const{return 0.0;}
	void shapeName() const
	{
		cout<<"Point   :"<<endl;
	}
	void display() const
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};
class Circle:public Point
{
protected:
	double r;
public:
	Circle(double a = 0, double b = 0, double c = 0):Point(a,b), r(c){}
	double area() const
	{
		return r*r*3.14;
	}
	virtual double volume() const{return 0;}
	void shapeName() const
	{
		cout<<"Circle  :"<<endl;
	}
	void display() const
	{
		cout<<"("<<x<<","<<y<<") ";
		cout<<r<<endl;
	}
};
class Cylinder: public Circle
{
private:
	double h;
public:
	Cylinder(double a = 0,double b = 0,double c = 0,double d = 0):Circle(a,b,c),h(d){}
	double area() const
	{
		return (3.14*r*r*2+3.14*2*r*h);
	}
	double volume() const
	{
		return 3.14*r*r*h;
	}
	void shapeName() const
	{
		cout<<"Cylinder:"<<endl;
	}
	void display() const
	{
		cout<<"("<<x<<","<<y<<") ";
		cout<<r<<" "<<h<<endl;
	}
};
int main()
{
	Point a(3.2, 4.5);
	Circle b(2.4, 12.5, 6);
	Cylinder c(3.5, 6.4, 5.2, 10.5);
	Shape *p[3] = {&a, &b, &c};
	int i;

	for(i = 0; i < 3; i++)
	{
		p[i]->shapeName();
		p[i]->display();
		if(p[i]->area() != 0)
		cout<<"area = "<<p[i]->area()<<endl;
		if(p[i]->volume() != 0)
		cout<<"volume = "<<p[i]->volume()<<endl;
	}
	return 0;
}
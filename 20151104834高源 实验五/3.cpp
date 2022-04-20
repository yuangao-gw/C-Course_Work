#include<iostream>
#define PI 3.1415926
using namespace std;
class Shape
{
	public:
		Shape(){}
		virtual double getArea() const = 0;
};
class TwoDimensionalShape: public Shape
{
	public:
		TwoDimensionalShape() {}
};
class ThreeDimensionalShape: public Shape
{
	public:
		ThreeDimensionalShape() {}
		virtual double getVolume() const = 0;
};
class Sphere: public ThreeDimensionalShape
{
	private:
		double radius;
	public:
		Sphere(double r):radius(r){}
		double getArea() const
		{
			return 4*PI*radius*radius;
		}
		double getVolume() const
		{
			return 4*PI*radius*radius*radius/3;
		}
};
class Cube: public ThreeDimensionalShape
{
	private:
		double l;
		double w;
		double h;
	public:
		Cube(double a,double b,double c):l(a),w(b),h(c){}
		double getArea() const
		{
			return 2*h*w+2*w*l+2*h*l;
		}
		double getVolume() const
		{
			return l*w*h;
		}
};
class Circle: public TwoDimensionalShape
{
	private:
		double radius;
	public:
		Circle(double r):radius(r){}
		double getArea() const
		{
			return PI*radius*radius;
		}
};
class Rectangle: public TwoDimensionalShape
{
	private:
		double l;
		double w;
	public:
		Rectangle(double a,double b):l(a),w(b){}
		double getArea() const
		{
			return l*w;
		}
};
int main()
{
	const int SIZE = 4;
	Sphere s(6.5);
	Cube c(3,2,1);
	Circle c1(5);
	Rectangle r(5,3.1);
	Shape *ptr[SIZE] = {&s,&c,&c1,&r};
	ThreeDimensionalShape *p[SIZE];

	for(int i = 0; i < SIZE; i++)
	{
		p[i] = dynamic_cast<ThreeDimensionalShape*>(ptr[i]);
		if(p[i] != 0)
			cout<<"v = "<<p[i]->getVolume()<<" ,";
		cout<<"s = "<<ptr[i]->getArea()<<endl;
	}
	return 0;
}

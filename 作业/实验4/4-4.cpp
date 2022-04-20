#include<iostream>
using namespace std;
class Figure
{
	public:
		Figure(int wid)
		{
			width=wid;
		}
		float area(){}
		int getWidth();
	private:
		int width;
};
int Figure::getWidth()
{
	return width;
}
class Rectangle:public Figure
{
	int height;
	public:
		Rectangle(int wid,int hei):Figure(wid)
		{
			height=hei;
		}
		float area();
};
float Rectangle::area()
{
	return getWidth()*height;
}
class Triangle:public Figure
{
	int height;
	public:
		Triangle(int wid,int hei):Figure(wid)
		{
			height=hei;
		}
		float area();
};
float Triangle::area()
{
	return getWidth()*height/2;
}
class Circle:public Figure
{
	public:
		Circle (int wid):Figure(wid){}
		float area();
};
float Circle::area()
{
	return 3.14*getWidth()*getWidth();
}
int main()
{
	Rectangle rect(5,4);
	Triangle tri(5,4);
	Circle cir(5);
	cout<<"矩形的面积：  "<<rect.area()<<endl;
	cout<<"三角形的面积："<<tri.area()<<endl;
	cout<<"圆的面积：    "<<cir.area()<<endl;
	return 0;
}
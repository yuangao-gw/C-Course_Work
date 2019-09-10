#include<iostream>
using namespace std;
class Point
{
	private:
		float x;
		float y;
	public:
		Point(float a=0, float b=0):x(a), y(b){}
		virtual ~Point()
		{
			cout<<"executing Point destructor"<<endl;
		}
};
class Circle: public Point
{
	private:
		float radius;
	public:
		Circle(float a=0, float b=0, float r=0):Point(a,b), radius(r){}
		~Circle()
		{
			cout<<"executing Circle destructor"<<endl;
		}
};
int main()
{
	Point *p = new Circle;//只与指针有关
	//Circle gradl(1,2,3);
	delete p;
	return 0;
}
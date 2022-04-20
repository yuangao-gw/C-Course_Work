#include<iostream>
#include<cmath>
using namespace std;
class Point
{
	private:
		int x;
		int y;
	public:
		void setcoordinate(int x, int y);
		void setX(int x);
		void setY(int y);

		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
};
void Point::setX(int X)
{
	x = X;
}
void Point::setY(int Y)
{
	y = Y;
}
void Point::setcoordinate(int x, int y)
{
	setX(x);
	setY(y);
}
int main()
{
	Point p1,p2;
	double distance;
	int x,y;
	cout<<"请输入横、纵坐标值：";
	cin>>x>>y;
	p1.setX(x);
	p1.setY(y);

	cout<<"请输入横、纵坐标值：";
	cin>>x>>y;
	p2.setX(x);
	p2.setY(y);

	distance = sqrt((p2.getX() - p1.getX())*(p2.getX() - p1.getX()) + (p2.getY() - p1.getY()) * (p2.getY() - p1.getY()));
	cout<<"两点间距离为："<<distance<<endl;
	return 0;
}


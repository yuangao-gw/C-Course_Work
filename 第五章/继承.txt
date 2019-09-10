#include<iostream>
#include<string>
using namespace std;
class Point
{
public:
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setdate(int X, int Y);
	void display();
private:
	float x;
	float y;
};
class Rectangle:public Point
{
private:
	float a; // 长
	float b; // 宽
public:
	void setdate();
	void display();
	void move(float x, float y);
};
void Point::setdate(int X, int Y)
{
	x = X;
	y = Y;
	cin>>x>>y;
}
void Point::display()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
void Rectangle::setdate()
{
	Point::setdate(x,y);
	cin>>a>>b;
}
void Rectangle::display()
{
	cout<<"长 : "<<a<<endl;
	cout<<"宽 : "<<b<<endl;
}
void Rectangle::move(float x, float y)
{
}
int main()
{
    Rectangle s;
	s.setdate();
	cout<<"左下点的坐标 : ";
	s.Point::display();
	cout<<"右下点的坐标 : ";
	s.display();
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
class Point
{
public:
	int getX()
	{
		return X;
	}
	int getY()
	{
		return Y;
	}
	void setdate(int x, int y);
	void display();
private:
	int X;
	int Y;
};
class Rectangle:public Point
{
private:
	int a; // 长
	int b; // 宽
public:
	void setdate(int x, int y,int l, int w);
	void display();
	void move(int l, int w);
};
void Point::setdate(int x, int y)
{
	X = x;
	Y = y;
}
void Point::display()
{
	cout<<"("<<X<<","<<Y<<")"<<endl;
}
void Rectangle::setdate(int x, int y,int l, int w)
{
	Point::setdate(x,y);
	a = l;
	b = w;
}
void Rectangle::display()
{
	cout<<"长 : "<<a<<endl;
	cout<<"宽 : "<<b<<endl;
}
void Rectangle::move(int l, int w)
{
	Point::setdate(getX()+l, getY()+w);
}
int main()
{
    Rectangle s;
	s.setdate(1,2,5,6);
	cout<<"左下点的坐标 : ";
	s.Point::display();
	cout<<"右下点的坐标 : ";
	s.move(4,6);
	s.Point::display();
	s.display();
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
class Point
{
protected:
	int X;
	int Y;
};
class Rectangle:protected Point
{
private:
	int a; // 长
	int b; // 宽
public:
	void setdate(int x, int y,int l, int w);
	void display();
	void display1();
	void move(int l, int w);
};
void Rectangle::setdate(int x, int y,int l, int w)
{
	X = x;
	Y = y;
	a = l;
	b = w;
}
void Rectangle::display1()
{
	cout<<"("<<X<<","<<Y<<")"<<endl;
}
void Rectangle::display()
{
	cout<<"长 : "<<a<<endl;
	cout<<"宽 : "<<b<<endl;
}
void Rectangle::move(int l, int w)
{
	X = X+l;
	Y = Y+w;
}
int main()
{
    Rectangle s;
	s.setdate(1,2,5,6);
	cout<<"左下点的坐标 : ";
	s.display1();
	cout<<"右下点的坐标 : ";
	s.move(4,6);
	s.display1();
	s.display();
	return 0;
}
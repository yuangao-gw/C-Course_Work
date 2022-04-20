#include<iostream.h>
class Complex
{
private:
	double real;
	double imag;
public:
	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex(double r, double i)
	{
		real = r;
		imag = i;
	}
	friend Complex operator + (Complex a,Complex b);
    friend Complex operator + (int a,Complex b);
	Complex operator + (int a);
	friend Complex operator - (Complex a,Complex b);
    friend Complex operator - (int a,Complex b);
	Complex operator - (int a);
	void display();
};
Complex Complex::operator + (int a)
{
	Complex c;
	return Complex(c.real = real+a,c.imag);
}
Complex Complex::operator - (int a)
{
	Complex c;
	return Complex(c.real = real-a,c.imag);
}
Complex operator + (int a,Complex b)
{
	return Complex(a+b.real, b.imag);
}
Complex operator + (Complex a,Complex b)
{
	return Complex(a.real + b.real ,a.imag + b.imag);
}
Complex operator - (int a,Complex b)
{
	return Complex(a-b.real, b.imag);
}
Complex operator - (Complex a,Complex b)
{
	return Complex(a.real - b.real ,a.imag - b.imag);
}
void Complex::display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
int main()
{
	Complex c1(3,4),c2(5,-10),c3; //ComplexÎª¸´Êý

	c3 = c1 + c2;  cout<<"c1 + c2 = ";  c3.display();
	c3 = c1 - c2;  cout<<"c1 - c2 = ";  c3.display();
	c3 = c1 + 5;   cout<<"c1 + 5 = ";   c3.display();
	c3 = c1 - 5;   cout<<"c1 - 5 = ";   c3.display();
	c3 = 10 + c2;  cout<<"10 + c2 = ";  c3.display();
	c3 = 10 - c2;  cout<<"10 - c2 = ";  c3.display();

	return 0;
}

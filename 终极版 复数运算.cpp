#include<iostream.h>
class Complex
{
private:
	double real;
	double imag;
public:
	Complex(double r=0, double i=0):real(r), imag(i) {}
	friend Complex operator + (Complex a,Complex b);
	friend Complex operator - (Complex a,Complex b);
	Complex operator * (Complex a);
	Complex operator / (Complex a);
	Complex operator + (double a);
	Complex operator - (double a);
	Complex operator ^ (int n);
	friend Complex operator + (double a,Complex b);
	friend Complex operator - (double a,Complex b);
	friend ostream & operator << (ostream & output, Complex &c);
	friend istream & operator >> (istream & input, Complex &c);
};
Complex operator + (double a,Complex b)
{
	return Complex(a+b.real, b.imag);
}
Complex operator - (double a,Complex b)
{
	return Complex(a-b.real, b.imag);
}
Complex Complex::operator + (double a)
{
	return Complex(real+a,imag);
}
Complex Complex::operator - (double a)
{
	return Complex(real-a, imag);
}
Complex Complex::operator * (Complex a)
{
	return Complex(real*a.real-imag*a.imag,imag*a.real+a.imag*real);
}
Complex Complex::operator / (Complex a)
{
	
	double t = a.real*a.real+a.imag*a.imag;
	return Complex((real*a.real+imag*a.imag)/t,(imag*a.real-real*a.imag)/t);
}
Complex operator + (Complex a,Complex b)
{
	return Complex(a.real + b.real ,a.imag + b.imag);
}
Complex operator - (Complex a,Complex b)
{
	return Complex(a.real - b.real ,a.imag - b.imag);
}
Complex Complex::operator ^ (int n)
{
	int i;
	Complex t(*this);
	for(i = 2; i <= n; i++)
		t = t*(*this);
	return t;
}
istream & operator >> (istream & input, Complex &c)
{
	input>>c.real>>c.imag;
	return input;
}
ostream & operator << (ostream & output, Complex &c)
{
	output<<"("<<c.real<<", "<<c.imag<<"i)"<<endl;
	return output;
}
int main()
{
	int n;
	do{
		cout<<"1、复数的加减乘除"<<endl;
		cout<<"2、复数与实数的加减"<<endl;
		cout<<"3、实数与复数的加减"<<endl;
		cout<<"4、复数的n次方"<<endl;
		cout<<"0、退出"<<endl;
		cin>>n;
		switch(n)
		{
		    case 1:
				{
					Complex a, b;
					char c;
					cin>>a>>c>>b;
					switch(c)
					{
				     	case '+': cout<<a+b; break;
				    	case '-': cout<<a-b; break;
						case '*': cout<<a*b; break;
						case '/': cout<<a/b; break;
					}
				}
				break;
			case 2:
			{
				Complex a;
				double b;
				char c;
				cin>>a>>c>>b;
				switch(c)
				{
				    case '+': cout<<a+b; break;
				    case '-': cout<<a-b; break;
				}
			}
			break;
			case 3:
			{
				Complex a;
				double b;
				char c;
				cin>>b>>c>>a;
				switch(c)
				{
				    case '+': cout<<b+a; break;
				    case '-': cout<<b-a; break;
				}
			}
			break;
			case 4:
			{
				Complex a;
				int n;
				cin>>a>>n;
				a = a^n;
				cout<<a;
			}
			break;
		}
	
	}while(n != 0);
	return 0;
}


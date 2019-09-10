#include<iostream.h>
class Complex
{
private:
	int real;
	int imag;
public:
	Complex(int t = 0, int i = 0):real(t),imag(i){};
	friend ostream & operator << (ostream & output, Complex &c);
	friend istream & operator >> (istream & input, Complex &c);
	Complex operator + (Complex b);
};
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
Complex Complex::operator + (Complex b)
{
/*	Complex c;
	c.real = real+b.real;
	c.imag = imag+b.imag;
	return c;*/
	return Complex(real+b.real,imag+b.imag);
}
int main()
{
	Complex a,b,c;
	cin>>a>>b;
	c = a+b;
	cout<<c;
	return 0;
}
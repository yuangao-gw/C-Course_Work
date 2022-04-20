#include<iostream>
using namespace std;
class Ammeter
{
	public:
		Ammeter(double r = 0);
		void print() const;
		void setReading(double amount);
		double get_price();
	protected:
		double reading;
		static double price;
};
double Ammeter::price = 0.48;
Ammeter::Ammeter(double r)
{
	reading = r;
}
void Ammeter::print() const
{
	cout<<"度数："<<reading<<"  "<<"单价："<<price<<"  ";
}
void Ammeter::setReading(double amount)
{
	reading = amount;
}
double Ammeter::get_price()
{
	return price;
}
class Smartmeter:public Ammeter
{
	public:
		Smartmeter(double p = 0);
		void setPrepaid(double pre);
		double CalcCharge();
		void print() const;
	private:
		double prepaid;
		double balance;
};
Smartmeter::Smartmeter(double r):Ammeter(r)
{
	prepaid = 0;
	balance = prepaid;
}
void Smartmeter::setPrepaid(double pre)
{
	prepaid += pre;
	balance += pre;
}
double Smartmeter::CalcCharge()
{
	balance = balance - price;
	return balance;
}
void Smartmeter::print() const
{
	Ammeter::print();
	cout<<"预付款："<<prepaid<<"  "<<"剩余款："<<balance<<endl;
}
int main()
{
	Smartmeter meter;
	int val = 1;
	double balance;
	double price = meter.get_price();
	meter.setPrepaid(50);
	meter.print();
	do
	{
		meter.setReading(val++);
		balance = meter.CalcCharge();
	}while(balance > meter.get_price());
	meter.print();
	return 0;
}